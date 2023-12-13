/**
*****************************************************************************************
*     Copyright(c) 2017, Realtek Semiconductor Corporation. All rights reserved.
*****************************************************************************************
  * @file gui_page.c
  * @brief page widget
  * @details page widget
  * @author howie_wang@realsil.com.cn
  * @date 2023/11/07
  * @version 1.0
  ***************************************************************************************
    * @attention
  * <h2><center>&copy; COPYRIGHT 2017 Realtek Semiconductor Corporation</center></h2>
  ***************************************************************************************
  */

/*============================================================================*
 *                        Header Files
 *============================================================================*/
#include <guidef.h>
#include <gui_page.h>
#include <string.h>
#include <gui_server.h>
#include <gui_img.h>
#include "gui_obj.h"
#include <gui_curtain.h>
#include <tp_algo.h>

/** @defgroup WIDGET WIDGET
  * @{
  */
/*============================================================================*
 *                           Types
 *============================================================================*/
/** @defgroup WIDGET_Exported_Types WIDGET Exported Types
  * @{
  */


/** End of WIDGET_Exported_Types
  * @}
  */

/*============================================================================*
 *                           Constants
 *============================================================================*/
/** @defgroup WIDGET_Exported_Constants WIDGET Exported Constants
  * @{
  */


/** End of WIDGET_Exported_Constants
  * @}
  */

/*============================================================================*
 *                            Macros
 *============================================================================*/
/** @defgroup SUBMOUDLE_Exported_Macros SUBMOUDLE Exported Macros
  * @{
  */


/** End of SUBMOUDLE_Exported_Macros
  * @}
  */

/*============================================================================*
 *                            Variables
 *============================================================================*/
/** @defgroup SUBMOUDLE_Exported_Variables SUBMOUDLE Exported Variables
  * @{
  */


/** End of SUBMOUDLE_Exported_Variables
  * @}
  */

/*============================================================================*
 *                           Private Functions
 *============================================================================*/
/** @defgroup WIDGET_Exported_Functions WIDGET Exported Functions
  * @{
  */
static void deal_img_in_root(gui_obj_t *object, int ayend, int *out)
{
    gui_list_t *node = NULL;
    gui_list_for_each(node, &object->child_list)
    {
        gui_obj_t *obj = gui_list_entry(node, gui_obj_t, brother_list);
        obj->ax = obj->x + obj->parent->ax;
        obj->ay = obj->y + obj->parent->ay;
        if (ayend < obj->ay + obj->h) { ayend = obj->ay + obj->h; }
        *out = ayend;
        deal_img_in_root(obj, ayend, out);
    }
}

static void gui_page_add_scroll_bar(gui_page_t *this, void *bar_pic)
{
    this->scroll_bar = gui_img_create_from_mem(this->base.parent, "scroll_bar", bar_pic, 0, 0, 0, 0);
    gui_img_get_height(this->scroll_bar);
    this->scroll_bar->base.x = this->base.w - 3 - this->scroll_bar->base.w;
}

static void set_offset(gui_page_t *this, int offset)
{
    this->yold = offset;
    this->base.y = offset;
}

static int get_offset(gui_page_t *this)
{
    return this->base.y;
}

_gui_api_page_t gui_page_api =
{
    .set_offset = set_offset,
    .get_offset = get_offset,
    .gui_page_add_scroll_bar = gui_page_add_scroll_bar,
};

/*============================================================================*
 *                           Public Functions
 *============================================================================*/

void page_update(gui_obj_t *obj)
{
    gui_dispdev_t *dc = gui_get_dc();
    touch_info_t *tp = tp_get_info();
    if (((gui_page_t *)obj)->get_yend < 2)
    {
        int ay = 0;
        deal_img_in_root(obj, obj->y + obj->h, &ay);
        obj->h = ay - obj->y;
        obj->w = 320;
        // gui_log("deal_img_in_root %d",obj->h);
        ((gui_page_t *)obj)->get_yend++;
    }
    if (obj->parent->ay != 0)
    {
        return;
    }

    if ((obj->ax < (int)gui_get_screen_width()) && ((obj->ax + obj->w) >= 0) && \
        (obj->ay < (int)gui_get_screen_height()) && ((obj->ay + obj->h) >= 0))
    {
        if ((tp->x > ((gui_page_t *)obj)->start_x) && (tp->x < ((gui_page_t *)obj)->start_x + obj->w))
        {
            if ((tp->y > ((gui_page_t *)obj)->start_y) && (tp->y < ((gui_page_t *)obj)->start_y + obj->h))
            {
                if ((tp->type == TOUCH_HOLD_Y))
                {
                    // gui_log("obj->y:%d,%d",obj->y, ((gui_page_t *)obj)->start_y-(obj->h-gui_get_screen_height()));
                    obj->y = tp->deltaY + ((gui_page_t *)obj)->yold;
                    if (obj->y > ((gui_page_t *)obj)->start_y)
                    {
                        obj->y = ((gui_page_t *)obj)->start_y;

                    }
                    else if (obj->y < (((gui_page_t *)obj)->start_y - (obj->h - (int)gui_get_screen_height())) &&
                             obj->y != 0)
                    {
                        // gui_log("obj->yyyy:%d,%d",obj->y, ((gui_page_t *)obj)->start_y-(obj->h-(int)gui_get_screen_height()));
                        obj->y = ((gui_page_t *)obj)->start_y - (obj->h - (int)gui_get_screen_height());
                    }
                }
                else
                {
                    if (obj->y > ((gui_page_t *)obj)->start_y)
                    {
                        obj->y = ((gui_page_t *)obj)->start_y;

                    }
                    else if (obj->y < (((gui_page_t *)obj)->start_y - (obj->h - (int)gui_get_screen_height())) &&
                             obj->y != 0)
                    {
                        // gui_log("obj->yyyy:%d,%d",obj->y, ((gui_page_t *)obj)->start_y-(obj->h-(int)gui_get_screen_height()));
                        obj->y = ((gui_page_t *)obj)->start_y - (obj->h - (int)gui_get_screen_height());
                    }

                    ((gui_page_t *)obj)->yold = obj->y;
                }
            }
        }


        if (((gui_page_t *)obj)->scroll_bar)
        {
            ((gui_page_t *)obj)->scroll_bar->base.y = ((((gui_page_t *)obj)->start_y - obj->y) *
                                                       gui_get_screen_height() / obj->h);
        }
        // gui_log("obj->y:%d,%d, %d\n", obj->y, obj->ay, obj->parent->ay);
        if (obj->y == ((gui_page_t *)obj)->start_y)
        {
            obj->cover = false;
        }
        else
        {
            obj->cover = true;
        }
    }



}


void gui_page_ctor(gui_page_t *this, gui_obj_t *parent, const char *filename, int16_t x,
                   int16_t y, int16_t w, int16_t h)
{
    gui_obj_ctor(&this->base, parent, filename, x, y, w, h
                );
    GET_BASE(this)->type = PAGE;
    GET_BASE(this)->obj_prepare = page_update;
    this->base.type = PAGE;
    this->start_x = x;
    this->start_y = y;
}

gui_page_t *gui_page_create(void *parent, const char *filename, int16_t x, int16_t y,
                            int16_t w, int16_t h)
{
#define _GUI_NEW_gui_page_create_param this, parent, filename, x, y, w, h
    GUI_NEW(gui_page_t, gui_page_ctor, _GUI_NEW_gui_page_create_param)
}


/** End of WIDGET_Exported_Functions
  * @}
  */

/** End of WIDGET
  * @}
  */
