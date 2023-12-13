/**
 \internal
*****************************************************************************************
*     Copyright(c) 2017, Realtek Semiconductor Corporation. All rights reserved.
*****************************************************************************************
  * @file gui_page.h
  * @brief page widget
  * @details page widget
  * @author howie_wang@realsil.com.cn
  * @date 2023/11/07
  * @version 1.0
  ***************************************************************************************
    * @attention
  * <h2><center>&copy; COPYRIGHT 2017 Realtek Semiconductor Corporation</center></h2>
  ***************************************************************************************
 \endinternal
  */

/*============================================================================*
 *               Define to prevent recursive inclusion
 *============================================================================*/
#ifndef __GUI_page_H__
#define __GUI_page_H__

#ifdef __cplusplus
extern "C" {
#endif
/*============================================================================*
 *                        Header Files
 *============================================================================*/
#include <guidef.h>
#include <gui_fb.h>
#include <gui_curtain.h>
#include <gui_img.h>


/*============================================================================*
 *                         Types
 *============================================================================*/

/** @brief  PAGE widget structure */
typedef struct gui_page
{
    gui_obj_t base;
    uint32_t current_id;
    uint32_t widget_count;
    uint32_t width;
    int yold;
    int start_x;
    int start_y;
    gui_img_t *scroll_bar;
    int get_yend;
    void (*ctor)(struct gui_page *this, gui_obj_t *parent, const char *filename, int16_t x,
                 int16_t y, int16_t w, int16_t h);
} gui_page_t;

/** @brief  PAGE widget api structure */
typedef struct _gui_api_page
{
    void (*gui_page_add_scroll_bar)(gui_page_t *this, void *bar_pic);
    void (*set_offset)(gui_page_t *this, int offset);
    int (*get_offset)(gui_page_t *this);
} _gui_api_page_t;



/*============================================================================*
 *                         Constants
 *============================================================================*/


/*============================================================================*
 *                         Macros
 *============================================================================*/


/*============================================================================*
 *                         Variables
 *============================================================================*/


/*============================================================================*
 *                         Functions
 *============================================================================*/

/**
 * @brief update the page widget.
 *
 * @param obj widget pointer.
 *
 */
void page_update(gui_obj_t *obj);

/**
 * @brief construct a page widget.
 *
 * @param this widget pointer.
 * @param parent the father widget the page nested in.
 * @param filename the page widget name.
 * @param x the X-axis coordinate.
 * @param x the Y-axis coordinate.
 * @param w the width.
 * @param h the hight.
 *
 */
void gui_page_ctor(gui_page_t *this, gui_obj_t *parent, const char *filename, int16_t x,
                   int16_t y, int16_t w, int16_t h);
//gui_grid
/**
 * @brief create a page widget.
 *
 * @param parent the father widget the page nested in.
 * @param filename the page widget name.
 * @param x the X-axis coordinate.
 * @param x the Y-axis coordinate.
 * @param w the width.
 * @param h the hight.
 * @return return the widget object pointer
 *
 * <b>Example usage</b>
 * \code{.c}
 *{
 *     char* ptxt = "page_name";
 *     parent = (void *)gui_page_create(parent, ptxt, x, y, w, h);
 *}
 * \endcode
 */
gui_page_t *gui_page_create(void *parent, const char *filename, int16_t x, int16_t y,
                            int16_t w, int16_t h);

extern _gui_api_page_t gui_page_api;


#ifdef __cplusplus
}
#endif

#endif

