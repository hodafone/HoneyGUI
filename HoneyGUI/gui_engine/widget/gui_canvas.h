/**
 \internal
*****************************************************************************************
*     Copyright(c) 2017, Realtek Semiconductor Corporation. All rights reserved.
*****************************************************************************************
  * @file
  * @brief
  * @details
  * @author
  * @date
  * @version
  ***************************************************************************************
    * @attention
  * <h2><center>&copy; COPYRIGHT 2017 Realtek Semiconductor Corporation</center></h2>
  ***************************************************************************************
 \endinternal
  */

/*============================================================================*
 *               Define to prevent recursive inclusion
 *============================================================================*/
#ifndef __GUI_CANVAS_H__
#define __GUI_CANVAS_H__
#ifdef __cplusplus
extern "C" {
#endif

/*============================================================================*
 *                        Header Files
 *============================================================================*/
#include <guidef.h>
#include <gui_api.h>
#include <nanovg.h>

/*============================================================================*
 *                         Types
 *============================================================================*/

/** @brief  canvas structure */
typedef struct _gui_canvas
{
    gui_obj_t base;
    NVGcontext *vg;
    void (*nanovg_canvas_cb)(struct _gui_canvas *this);
} gui_canvas_t;


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
 * @brief create a canvas widget used to drawing graphics in nanovg.
 *
 * @param parent the father widget nested in.
 * @param name this canvas widget's name.
 * @param addr
 * @param x the X-axis coordinate relative to parent widget
 * @param y the Y-axis coordinate relative to parent widget
 * @param w width
 * @param h height
 * @return gui_canvas_t*
 */
gui_canvas_t *gui_canvas_create(void *parent,  const char *name, void *addr,
                                int16_t x, int16_t y, int16_t w, int16_t h);

/**
 * @brief set the callback function for drawing specific shapes.
 *
 * @param this this widget pointer
 * @param cb the callback function for drawing specific shapes
 */
void gui_canvas_set_canvas_cb(gui_canvas_t *this,
                              void (*cb)(gui_canvas_t *this));


#ifdef __cplusplus
}
#endif

#endif

