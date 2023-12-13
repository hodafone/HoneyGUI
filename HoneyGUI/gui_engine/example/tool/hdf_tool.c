#include "root_image_hongkong/ui_resource.h"
#include <guidef.h>
#include <gui_img.h>


uint16_t hdf_get_pic_center_display_x(void *addr,int16_t x, int16_t w)
{
    struct gui_rgb_data_head head;
    memcpy(&head, addr, sizeof(head));
    return x+(w-head.w)/2;
}


uint16_t hdf_get_pic_array_center_display_x(void  **picture_array,const char *text,int16_t x, int16_t w)
{

    uint16_t string_num_w;
    struct gui_rgb_data_head head;
    uint16_t length=strlen(text);
    uint16_t unicode;

    for (uint16_t i = 0; i < length; i ++)
    {
        unicode=*(text + i);
        if ((unicode >= 0x30) && (unicode <= 0x39))
        {
             memcpy(&head, picture_array[unicode - '0'], sizeof(head));
        }
        else if ((unicode == '.') || (unicode == '-') || (unicode == '/')|| (unicode == '~')|| (unicode == '%'))
        {
             memcpy(&head, picture_array[10], sizeof(head));
        }
        else if ((unicode == 'd')||(unicode == 'c'))//d represents the degree of the compass image、c represents degrees Celsius image
        {
            memcpy(&head, picture_array[11], sizeof(head));
        }        
        else if ((unicode == 'f'))//f represents Fahrenheit degrees image
        {
            memcpy(&head, picture_array[12], sizeof(head));
        }
        string_num_w +=head.w;
        //gui_log("string_num_w=%d head.w=%d!!!",string_num_w,head.w);
    }
    return x+(w-string_num_w)/2;
}

uint16_t hdf_gui_show_string_num(void *parent,void  **picture_array,  int16_t x, int16_t y, const char *text)
{
    uint16_t unicode;
    uint16_t xs = x;
    gui_img_t *img;
    uint16_t length=strlen(text);
    for (uint16_t i = 0; i < length; i ++)
    {
        unicode=*(text + i);
        if ((unicode >= 0x30) && (unicode <= 0x39))
        {
            //gui_img_create_from_mem(parent, "string_num",picture_array[unicode - '0'] , x+i*w, y, 0, 0);
            img=gui_img_create_from_mem(parent, "string_num",picture_array[unicode - '0'] , xs, y, 0, 0);
        }
        else if ((unicode == '.') || (unicode == '-') || (unicode == '/')|| (unicode == '~')|| (unicode == '%'))
        {
            //gui_img_create_from_mem(parent, "string_num",picture_array[10] , x+i*w, y, 0, 0);
            img=gui_img_create_from_mem(parent, "string_num",picture_array[10] , xs, y, 0, 0);
        }
        else if ((unicode == 'd')||(unicode == 'c'))//d represents the degree of the compass image、c represents degrees Celsius image
        {
            //gui_img_create_from_mem(parent, "string_num",picture_array[11] , x+i*w, y, 0, 0);
            img=gui_img_create_from_mem(parent, "string_num",picture_array[11] , xs, y, 0, 0);
        }        
        else if ((unicode == 'f'))//f represents Fahrenheit degrees image
        {
            //gui_img_create_from_mem(parent, "string_num",picture_array[12] , x+i*w, y, 0, 0);
            img=gui_img_create_from_mem(parent, "string_num",picture_array[12] , xs, y, 0, 0);
        }
        xs += gui_img_get_width(img);
       // gui_log("xs=%d img_w=%d!!!",xs,gui_img_get_width(img));
    }

    return xs-x;

}



void hdf_gui_show_compass_unit(void *parent,void  **picture_array,  int16_t x, int16_t y,uint16_t msen_ori)
{
    uint8_t offset=0;
    if(msen_ori>=67&&msen_ori<=111)//E
    {
        offset=0;
    }
    else if(msen_ori>=158&&msen_ori<=202)// S
    {
        offset=1;
    }

    else if(msen_ori>=247&&msen_ori<=292)// W
    {
        offset=2;
    }
    else if((msen_ori>=338&&msen_ori<=359)||(msen_ori>=0&&msen_ori<=21)) //N
    {
        offset=3;
    }
    else if(msen_ori>=112&&msen_ori<=157) //SE
    {
        offset=4;
    }
    else if(msen_ori>=203&&msen_ori<=246)// SW
    {
        offset=5;
    }
    else if(msen_ori>=22&&msen_ori<=66) //NE
    {
        offset=6;
    }
    else if(msen_ori>=292&&msen_ori<=337) // NW
    {
        offset=7;
    }
    gui_img_create_from_mem(parent, "compass_unit", picture_array[offset] , x, y, 0, 0);

}


void hdf_gui_show_battery_level_progress(void *parent,void  **picture_array,  int16_t x, int16_t y, uint8_t battery_level)
{
    if(battery_level == 100)
    {
         gui_img_create_from_mem(parent, "battery_progress", picture_array[5] , x, y, 0, 0);
    }else if(battery_level < 10)
    {
        gui_img_create_from_mem(parent, "battery_progress", picture_array[0] , x, y, 0, 0);
    }
    else
    {
        //gui_img_create_from_mem(parent, "battery_progress", (void *)(addr+ ((battery_level-1)/20 + 1)*pic_bin_size) , x, y, 0, 0);
        gui_img_create_from_mem(parent, "battery_progress", picture_array[(battery_level-1)/20 + 1] , x, y, 0, 0);
    }


}




