# Progressbar
<br>

## Overview
The progressbar widget allows you to create widgets with three different effects.
After created a progressbar widget, you can set the percentage of the widget to display.

## Usage

### Create vertical widget

You can create a vertical style progressbar based on picture by this api [gui_progressbar_img_v_create(void *parent, void *picture, int16_t x, int16_t y)](#api).
It's a normal single picture progressbar.

### Create horizontal widget

Similar to `Create vertical widget` above, you can use [gui_progressbar_img_h_create(void *parent, void *picture, int16_t x, int16_t y)](#api) to create a horizontal style progressbar based on picture.

### Create movie widget

Unlike the above two normal single picture progressbar, a movie style progressbar consists of a series of pictures.
You can create a movie style progressbar by using [gui_progressbar_movie_create(void *parent, void  **picture_array, uint16_t array_length, int16_t x, int16_t y)](#api). `picture_array` is the array used to store the pictures and `array_length` is the number of pictures.
The first picture is shown at 0% progress and the last picture is shown at 100% progress.

### Percentage

For example, if you want to use a progressbar to show the progress of a song, you can use [gui_progressbar_set_percentage(gui_progressbar_t *this, float percentage)](#api) to set the current progress after the progressbar has been created.
In addition, you can use [gui_progressbar_get_percentage(gui_progressbar_t *this)](#api) to get the current progress.

### Progress

The above usage (`Percentage`) is for a normal single picture progressbar. For a movie style progressbar, you need to use [gui_progressbar_set_progress(gui_progressbar_t *this, size_t progress)](#api) and [gui_progressbar_get_progress(gui_progressbar_t *this)](#api) to set and get the progress.

### Get max

This api [gui_progressbar_get_max(gui_progressbar_t *this)](#api) is used to get the number of pictures in a movie style progressbar, so you can know how many pictures will be displayed in total.

## Example

<details> <summary>code</summary>

```c
#include "root_image_hongkong/ui_resource.h"
#include "gui_progressbar.h"
#include "gui_text.h"
#include "draw_font.h"

static void *array[] = {DOG40_BIN, DOG60_BIN, DOG80_BIN, DOG100_BIN, DOG120_BIN, DOG140_BIN};

void page_tb_one(void *parent)
{
    gui_set_font_mem_resourse(24, TEST_FONT24_DOT_BIN, TEST_FONT24_TABLE_BIN);

    gui_progressbar_t *test_bar_one = gui_progressbar_img_v_create(parent, TEST_BIN, 50, 0);
    gui_progressbar_set_percentage(test_bar_one, 1);

    gui_progressbar_t *test_bar_two = gui_progressbar_img_v_create(parent, TEST_BIN, 150, 0);
    gui_progressbar_set_percentage(test_bar_two, 0.5);

    gui_text_t *text1 = gui_text_create(parent, "vertical1", 50, 250, 300, 24);
    gui_text_set(text1, "100%    50%  vertical", "rtk_font_mem", 0xffffffff, 21, 24);
    gui_text_mode_set(text1, LEFT);

    gui_text_t *text2 = gui_text_create(parent, "vertical2", 10, 300, 330, 24);
    gui_text_set(text2, "gui_progressbar_img_v_create", "rtk_font_mem", 0xff0000ff, 28, 24);
    gui_text_mode_set(text2, LEFT);
}

void page_tb_two(void *parent)
{
    gui_set_font_mem_resourse(24, TEST_FONT24_DOT_BIN, TEST_FONT24_TABLE_BIN);

    gui_progressbar_t *test_bar_three = gui_progressbar_img_h_create(parent, TEST_BIN, 50, 0);
    gui_progressbar_set_percentage(test_bar_three, 1);

    gui_progressbar_t *test_bar_four = gui_progressbar_img_h_create(parent, TEST_BIN, 150, 0);
    gui_progressbar_set_percentage(test_bar_four, 0.5);

    gui_text_t *text3 = gui_text_create(parent, "horizontal1", 50, 250, 300, 24);
    gui_text_set(text3, "100%    50%  horizontal", "rtk_font_mem", 0xffffffff, 23, 24);
    gui_text_mode_set(text3, LEFT);

    gui_text_t *text4 = gui_text_create(parent, "horizontal2", 10, 300, 330, 24);
    gui_text_set(text4, "gui_progressbar_img_h_create", "rtk_font_mem", 0xff0000ff, 28, 24);
    gui_text_mode_set(text4, LEFT);
}

void page_tb_three(void *parent)
{
    gui_set_font_mem_resourse(24, TEST_FONT24_DOT_BIN, TEST_FONT24_TABLE_BIN);

    gui_progressbar_t *test_bar_five = gui_progressbar_movie_create(parent, array, 6, 0, 0);

    gui_progressbar_t *test_bar_six = gui_progressbar_movie_create(parent, array, 6, 150, 0);
    gui_progressbar_set_progress(test_bar_six, 4);

    gui_text_t *text5 = gui_text_create(parent, "movie1", 80, 250, 300, 24);
    gui_text_set(text5, "pic0   pic4  movie", "rtk_font_mem", 0xffffffff, 18, 24);
    gui_text_mode_set(text5, LEFT);

    gui_text_t *text6 = gui_text_create(parent, "movie2", 10, 300, 330, 24);
    gui_text_set(text6, "gui_progressbar_movie_create", "rtk_font_mem", 0xff0000ff, 28, 24);
    gui_text_mode_set(text6, LEFT);
}
```


</details>

<br>

<center><img width= "300" src="https://foruda.gitee.com/images/1700102166174264891/96e1cada_13671147.gif" /></center>

<span id="api">

## API

</span>

```eval_rst

.. doxygenfile:: gui_progressbar.h

```

