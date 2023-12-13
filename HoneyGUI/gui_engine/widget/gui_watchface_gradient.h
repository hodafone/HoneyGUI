/**
\internal
*****************************************************************************************
*     Copyright(c) 2017, Realtek Semiconductor Corporation. All rights reserved.
*****************************************************************************************
  * @file gui_watchface_gradient.h
  * @brief  This file is part of GUI Engine
  * @details  create watchface gradien widget
  * @author triton_yu@realsil.com.cn
  * @date 2023/10/24
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
#ifndef __GUI_WATCHFACE_GRADIENT_H__
#define __GUI_WATCHFACE_GRADIENT_H__



#ifdef __cplusplus
extern "C" {
#endif

/*============================================================================*
 *                        Header Files
 *============================================================================*/
#include <guidef.h>
#include <gui_api.h>
#include <gui_canvas.h>
#include "gui_watchface_gradient.h"


/*============================================================================*
 *                         Types
 *============================================================================*/

/** @brief  ... */
typedef struct gui_watchface_gradient
{
    gui_canvas_t base;
} gui_watchface_gradient_t;


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
  * @brief  create watchface gradient
  * @param  parent parent widget
  * @param  name   widget name
  * @param  x      left
  * @param  y      top
  * @param  w      width
  * @param  h      high
  * @return gui_watchface_gradient_t* widget pointer
  *
  * <b>Example usage</b>
  * \code{.c}
  * void example_watchface(void *parent)
  * {
  *      gui_watchface_gradient_create(parent, "watchface_gradient", 0, 0, 221, 269);
  *  }
  *
  *
  *
  * \endcode
  */
gui_watchface_gradient_t *gui_watchface_gradient_create(void *parent,  const char *name,
                                                        int16_t x, int16_t y, int16_t w, int16_t h);



#ifdef __cplusplus
}
#endif

#endif

