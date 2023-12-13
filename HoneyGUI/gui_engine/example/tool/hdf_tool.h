/**
*****************************************************************************************
*     Copyright(c) 2023, HDF Corporation. All rights reserved.
*****************************************************************************************
  * @file app_hdf_tool.h
  * @brief hdf tool header file
  * @details image widget is used to show image on the screen
  * @author zhangy_hodafone@foxmail.com
  * @date 2023/11/30
  * @version 1.0
  ***************************************************************************************
    * @attention
  * <h2><center>&copy; COPYRIGHT 2023 HDF Corporation</center></h2>
  ***************************************************************************************
  */


/**
 * @brief obtain the single pic centered display of x-coordinates based on the parent component
 * @note obtain the the single pic centered display of x-coordinates based on the parent component
 * @param addr bin file address
 * @param x the X of the parent.
 * @param w the width of the parent.
 *  @return uint16_t centered display of x-coordinates based on the parent component
 */

uint16_t hdf_get_pic_center_display_x(void  *addr,int16_t x, int16_t w);

/**
 * @brief obtain the num string centered display of x-coordinates based on the parent component
 * @note obtain the num string centered display of x-coordinates based on the parent component
 * @param picture_array bin file address
 * @param text – the text string.
 * @param x the X of the parent.
 * @param w the width of the parent.
 *  @return uint16_t centered display of x-coordinates based on the parent component
 */

uint16_t hdf_get_pic_array_center_display_x(void  **picture_array,const char *text,int16_t x, int16_t w);


/**
 * @brief show string num from bin image
 * @note show string num from bin image
 * @param parent the father widget it nested in.
 * @param picture_array bin file address
 * @param x the X-axis coordinate of the widget.
 * @param x the Y-axis coordinate of the widget.
 * @param text – the text string.
 *  @return uint16_t end position displayed from position x
 */

uint16_t hdf_gui_show_string_num(void *parent,void  **picture_array,  int16_t x, int16_t y,const char *text);



/**
 * @brief show compass unit from bin image
 * @note bin image store order E->S->W->N->SE->SW->NE->NW
 * @param parent the father widget it nested in.
 * @param picture_array bin file address
 * @param x the X-axis coordinate of the widget.
 * @param x the Y-axis coordinate of the widget.
 * @param msen_ori – the sensor data.
 */

void hdf_gui_show_compass_unit(void *parent,void  **picture_array,  int16_t x, int16_t y,uint16_t msen_ori);


/**
 * @brief show battery progress from bin image
 * @note bin image store order low->20->40->60->80->100
 * @param parent the father widget it nested in.
 * @param picture_array bin file address
 * @param x the X-axis coordinate of the widget.
 * @param x the Y-axis coordinate of the widget.
 * @param battery_level – the battery level.
 */

void hdf_gui_show_battery_level_progress(void *parent,void  **picture_array,  int16_t x, int16_t y,uint8_t battery_level);





