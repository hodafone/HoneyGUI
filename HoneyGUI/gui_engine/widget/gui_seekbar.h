/**
*****************************************************************************************
*     Copyright(c) 2017, Realtek Semiconductor Corporation. All rights reserved.
*****************************************************************************************
  * @file gui_seekbar.h
  * @brief seekbar widget header file
  * @details seekbar widget
  * @author luke_sun@realsil.com.cn
  * @date 2023/11/06
  * @version 1.0
  ***************************************************************************************
    * @attention
  * <h2><center>&copy; COPYRIGHT 2017 Realtek Semiconductor Corporation</center></h2>
  ***************************************************************************************
  */

/*============================================================================*
 *               Define to prevent recursive inclusion
 *============================================================================*/
#ifndef __GUI_SEEKBAR_H__
#define __GUI_SEEKBAR_H__
#ifdef __cplusplus
extern "C" {
#endif
/*============================================================================*
 *                        Header Files
 *============================================================================*/
#include <guidef.h>
#include <gui_fb.h>
#include "gui_progressbar.h"
#include "gui_img.h"


/*============================================================================*
 *                         Types
 *============================================================================*/

/** @brief  ... */
typedef struct gui_seekbar gui_seekbar_t;
struct gui_seekbar
{
    gui_progressbar_t base;

    gui_img_t *slider_img;
    bool hit_slider;
    bool press_flag;
    void *press_cb;
    void *release_cb;
    void *release_cb_p;
    void *press_cb_p;
    int deltaX_old;
    uint16_t arcx;
    uint16_t arcy;
    uint16_t arc_r;
    uint16_t arc_w;
    float arc_start;
    float arc_end;
    gui_animate_t *animate;
    void (*ctor)(gui_seekbar_t *this, gui_obj_t *parent, const char *filename, int16_t x,
                 int16_t y,
                 int16_t w, int16_t h);
} ;


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

#if 0
/**
 * @brief create a seekbar widget.
 *
 * @param parent the father widget it nested in.
 * @param filename this seekbar widget's name.
 * @param x the X-axis coordinate of the widget.
 * @param y the Y-axis coordinate of the widget.
 * @param w the width of the widget.
 * @param h the hight of the widget.
 * @return return the widget object pointer.
 *
 */
gui_seekbar_t *gui_seekbar_create(void *parent, const char *filename, int16_t x, int16_t y,
                                  int16_t w, int16_t h);
/**
 * @brief create a seekbar widget.
 *
 * @param parent the father widget it nested in.
 * @param filename this seekbar widget's name.
 * @param x the X-axis coordinate of the widget.
 * @param y the Y-axis coordinate of the widget.
 * @param w the width of the widget.
 * @param h the hight of the widget.
 * @return return the widget object pointer.
 *
 */
gui_seekbar_t *gui_seekbar_h_create(void *parent, const char *filename, int16_t x, int16_t y,
                                    int16_t w, int16_t h);
#endif

/**
  * @brief  create a vertical based on picture seekbar
  * @param  parent the father widget it nested in
  * @param  filename this seekbar widget's name
  * @param  x   the X-axis coordinate relative to parent widget
  * @param  y   the y-axis coordinate relative to parent widget
  * @return return the widget object pointer
  * <b>Example usage</b>
  * \code{.c}
  * static void app_main_task(void *parent)
  * {
  *  parent = (void *)gui_seekbar_create_img_v(parent, gui_get_file_address(picture), x, y);
  *
  *    return;
  * }
  * \endcode
  */
gui_seekbar_t *gui_seekbar_create_img_v(void *parent, const char *filename, int16_t x, int16_t y
                                       );
/**
  * @brief  create a horizontal based on picture seekbar
  * @param  parent the father widget it nested in
  * @param  filename this seekbar widget's name
  * @param  x   the X-axis coordinate relative to parent widget
  * @param  y   the y-axis coordinate relative to parent widget
  * @return return the widget object pointer
  * <b>Example usage</b>
  *
  * \endcode
  */
gui_seekbar_t *gui_seekbar_create_img_h(void *parent, const char *filename, int16_t x, int16_t y
                                       );
/**
  * @brief  create a horizontal movie based on picture seekbar
  * @param  parent the father widget it nested in
  * @param  picture_array image array address
  * @param  array_length image array length
  * @param  x the X-axis coordinate relative to parent widget
  * @param  y the y-axis coordinate relative to parent widget
  * @return return the widget object pointer
  * <b>Example usage</b>
  *
  * \endcode
  */
gui_seekbar_t *gui_seekbar_create_movie_h(void *parent, void  **picture_array,
                                          uint16_t array_length, int16_t x, int16_t y);
/**
  * @brief  create a vertical movie based on picture seekbar
  * @param  parent the father widget it nested in
  * @param  picture_array image array address
  * @param  array_length image array length
  * @param  x   the X-axis coordinate relative to parent widget
  * @param  y   the y-axis coordinate relative to parent widget
  * @return return the widget object pointer
  * <b>Example usage</b>
  *
  * \endcode
  */
gui_seekbar_t *gui_seekbar_create_movie_v(void *parent, void  **picture_array,
                                          uint16_t array_length, int16_t x, int16_t y);
/**
  * @brief  create a arc movie based on picture seekbar
  * @param  parent the father widget it nested in
  * @param  picture_array image array address
  * @param  array_length image array length
  * @param  x the X-axis coordinate relative to parent widget
  * @param  y the y-axis coordinate relative to parent widget
  * @param  arc_x arc x
  * @param  arc_y arc y
  * @param  arc_w arc width
  * @param  arc_start arc start
  * @param  arc_end arc end
  * @return return the widget object pointer
  * <b>Example usage</b>
  *
  * \endcode
  */
gui_seekbar_t *gui_seekbar_create_movie_arc(void *parent, void  **picture_array,
                                            uint16_t array_length, int16_t x, int16_t y, uint16_t arc_x, uint16_t arc_y, uint16_t arc_r,
                                            uint16_t arc_w, float arc_start, float arc_end);



#ifdef __cplusplus
}
#endif

#endif

