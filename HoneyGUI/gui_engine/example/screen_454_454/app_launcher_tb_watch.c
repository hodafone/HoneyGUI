
#include <gui_obj.h>
#include <gui_watch_gradient_spot.h>
#include <gui_magic_img.h>
#include "root_image/resource_8772f.h"



void page_tb_watch(void *parent)
{

    gui_magic_img_t *img = gui_img_creat_from_mem(parent, "test", C1_BIN, 0, 0, 454, 454);
    //gui_img_scale(img, 0.2f, 0.2f);
    gui_img_translate(img, (454) / 2, (454) / 2);
    gui_img_rotation(img, 45, 256 / 2, 256 / 2);

    gui_watch_gradient_spot_t *watch = gui_watch_gradient_spot_create(parent,  "tb_00", 0, 0,
                                                                      454, 454);
    gui_watch_gradient_spot_set_center(watch, 454 / 2, 454 / 2);

}
