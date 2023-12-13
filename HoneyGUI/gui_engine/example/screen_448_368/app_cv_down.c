#include "root_image_hongkong/ui_resource.h"
#include <gui_img.h>
#include "gui_curtainview.h"
#include "gui_curtain.h"
#include "gui_tabview.h"
#include "gui_cardview.h"
#include "gui_card.h"
#include "gui_tab.h"
#include "gui_canvas.h"
#include <gui_win.h>
#include <gui_obj.h>
#include "gui_switch.h"
#include <time.h>
#include <stdio.h>
#include <gui_text.h>
#include <hdf_tool.h>
#include <hdf_multi_language.h>
#include <hdf_module_global_data.h>

gui_img_t *hour;
gui_img_t *minute;
gui_img_t *second;
gui_img_t *home_bg;
gui_img_t *circle;

float degree_second = 0;
float degree_hour = 0;
float degree_minute = 0;

struct tm *ptr;
time_t lt;




static void *pull_up_clock_week_en[] =
{
    PULL_UP_CLOCK_WEEK_EN_1_BIN,PULL_UP_CLOCK_WEEK_EN_2_BIN,PULL_UP_CLOCK_WEEK_EN_3_BIN,PULL_UP_CLOCK_WEEK_EN_4_BIN,PULL_UP_CLOCK_WEEK_EN_5_BIN,PULL_UP_CLOCK_WEEK_EN_6_BIN,PULL_UP_CLOCK_WEEK_EN_7_BIN,
};

static void *pull_up_clock_week_ch[] =
{
    PULL_UP_CLOCK_WEEK_CH_1_BIN,PULL_UP_CLOCK_WEEK_CH_2_BIN,PULL_UP_CLOCK_WEEK_CH_3_BIN,PULL_UP_CLOCK_WEEK_CH_4_BIN,PULL_UP_CLOCK_WEEK_CH_5_BIN,PULL_UP_CLOCK_WEEK_CH_6_BIN,PULL_UP_CLOCK_WEEK_CH_7_BIN,
};

static void *pull_up_clock_date_num[] =
{
    PULL_UP_CLOCK_DATE_0_BIN,PULL_UP_CLOCK_DATE_1_BIN,PULL_UP_CLOCK_DATE_2_BIN,PULL_UP_CLOCK_DATE_3_BIN,PULL_UP_CLOCK_DATE_4_BIN,PULL_UP_CLOCK_DATE_5_BIN,PULL_UP_CLOCK_DATE_6_BIN,PULL_UP_CLOCK_DATE_7_BIN,PULL_UP_CLOCK_DATE_8_BIN,PULL_UP_CLOCK_DATE_9_BIN,PULL_UP_CLOCK_DATE_LINE_BIN,
};

static void *pull_up_compass_num[] =
{
    PULL_UP_COMPASS_NUM_0_BIN,PULL_UP_COMPASS_NUM_1_BIN,PULL_UP_COMPASS_NUM_2_BIN,PULL_UP_COMPASS_NUM_3_BIN,PULL_UP_COMPASS_NUM_4_BIN,PULL_UP_COMPASS_NUM_5_BIN,PULL_UP_COMPASS_NUM_6_BIN,PULL_UP_COMPASS_NUM_7_BIN,PULL_UP_COMPASS_NUM_8_BIN,PULL_UP_COMPASS_NUM_9_BIN,PULL_UP_COMPASS_NUM_TILDE_BIN,PULL_UP_COMPASS_NUM_DEGREE_BIN,
};

static void *pull_up_compass_unit_en[] =
{
    PULL_UP_COMPASS_UNIT_EN_E_BIN,PULL_UP_COMPASS_UNIT_EN_S_BIN,PULL_UP_COMPASS_UNIT_EN_W_BIN,PULL_UP_COMPASS_UNIT_EN_N_BIN,PULL_UP_COMPASS_UNIT_CH_SE_BIN,PULL_UP_COMPASS_UNIT_CH_SW_BIN,PULL_UP_COMPASS_UNIT_EN_NE_BIN,PULL_UP_COMPASS_UNIT_EN_NW_BIN,
};

static void *pull_up_compass_unit_ch[] =
{
    PULL_UP_COMPASS_UNIT_CH_E_BIN,PULL_UP_COMPASS_UNIT_CH_S_BIN,PULL_UP_COMPASS_UNIT_CH_W_BIN,PULL_UP_COMPASS_UNIT_CH_N_BIN,PULL_UP_COMPASS_UNIT_CH_SE_BIN,PULL_UP_COMPASS_UNIT_CH_SW_BIN,PULL_UP_COMPASS_UNIT_CH_NE_BIN,PULL_UP_COMPASS_UNIT_CH_NW_BIN,
};

static void *pull_up_battery_level_num[] =
{
	PULL_UP_BATTERY_LEVEL_NUM_0_BIN,PULL_UP_BATTERY_LEVEL_NUM_1_BIN,PULL_UP_BATTERY_LEVEL_NUM_2_BIN,PULL_UP_BATTERY_LEVEL_NUM_3_BIN,PULL_UP_BATTERY_LEVEL_NUM_4_BIN,PULL_UP_BATTERY_LEVEL_NUM_5_BIN,PULL_UP_BATTERY_LEVEL_NUM_6_BIN,PULL_UP_BATTERY_LEVEL_NUM_7_BIN,PULL_UP_BATTERY_LEVEL_NUM_8_BIN,PULL_UP_BATTERY_LEVEL_NUM_9_BIN,PULL_UP_BATTERY_LEVEL_NUM_PER_BIN,
};

static void *pull_up_battery_progress[] =
{
    PULL_UP_BATTERY_LEVEL_PROGRESS_LOW_BIN,PULL_UP_BATTERY_LEVEL_PROGRESS_20_BIN,PULL_UP_BATTERY_LEVEL_PROGRESS_40_BIN,PULL_UP_BATTERY_LEVEL_PROGRESS_60_BIN,PULL_UP_BATTERY_LEVEL_PROGRESS_80_BIN,PULL_UP_BATTERY_LEVEL_PROGRESS_100_BIN,
};

static void *pull_up_weather_num[] =
{
	PULL_UP_WEATHER_NUM_0_BIN,PULL_UP_WEATHER_NUM_1_BIN,PULL_UP_WEATHER_NUM_2_BIN,PULL_UP_WEATHER_NUM_3_BIN,PULL_UP_WEATHER_NUM_4_BIN,PULL_UP_WEATHER_NUM_5_BIN,PULL_UP_WEATHER_NUM_6_BIN,PULL_UP_WEATHER_NUM_7_BIN,PULL_UP_WEATHER_NUM_8_BIN,PULL_UP_WEATHER_NUM_9_BIN,PULL_UP_WEATHER_NUM_LINE_BIN,PULL_UP_WEATHER_NUM_C_BIN,PULL_UP_WEATHER_NUM_F_BIN,
};

static void *pull_up_weather_type[] =
{
    PULL_UP_WEATHER_SUNNY_BIN,PULL_UP_WEATHER_CLOUDY_BIN,PULL_UP_WEATHER_RAIN_BIN,PULL_UP_WEATHER_SNOW_BIN,PULL_UP_WEATHER_UNKNOWN_BIN,
};

static void *pull_up_steps_num[] =
{
    PULL_UP_STEP_STEPS_NUM_0_BIN,PULL_UP_STEP_STEPS_NUM_1_BIN,PULL_UP_STEP_STEPS_NUM_2_BIN,PULL_UP_STEP_STEPS_NUM_3_BIN,PULL_UP_STEP_STEPS_NUM_4_BIN,PULL_UP_STEP_STEPS_NUM_5_BIN,PULL_UP_STEP_STEPS_NUM_6_BIN,PULL_UP_STEP_STEPS_NUM_7_BIN,PULL_UP_STEP_STEPS_NUM_8_BIN,PULL_UP_STEP_STEPS_NUM_9_BIN,
};

static void *pull_up_dis_num[] =
{
    PULL_UP_STEP_DIS_NUM_0_BIN,PULL_UP_STEP_DIS_NUM_1_BIN,PULL_UP_STEP_DIS_NUM_2_BIN,PULL_UP_STEP_DIS_NUM_3_BIN,PULL_UP_STEP_DIS_NUM_4_BIN,PULL_UP_STEP_DIS_NUM_5_BIN,PULL_UP_STEP_DIS_NUM_6_BIN,PULL_UP_STEP_DIS_NUM_7_BIN,PULL_UP_STEP_DIS_NUM_8_BIN,PULL_UP_STEP_DIS_NUM_9_BIN,PULL_UP_STEP_DIS_NUM_DOT_BIN,
};

static void *pull_up_cal_num[] =
{
    PULL_UP_STEP_CAL_NUM_0_BIN,PULL_UP_STEP_CAL_NUM_1_BIN,PULL_UP_STEP_CAL_NUM_2_BIN,PULL_UP_STEP_CAL_NUM_3_BIN,PULL_UP_STEP_CAL_NUM_4_BIN,PULL_UP_STEP_CAL_NUM_5_BIN,PULL_UP_STEP_CAL_NUM_6_BIN,PULL_UP_STEP_CAL_NUM_7_BIN,PULL_UP_STEP_CAL_NUM_8_BIN,PULL_UP_STEP_CAL_NUM_9_BIN,
};

static void *pull_up_bp_num[] =
{
    PULL_UP_BP_NUM_0_BIN,PULL_UP_BP_NUM_1_BIN,PULL_UP_BP_NUM_2_BIN,PULL_UP_BP_NUM_3_BIN,PULL_UP_BP_NUM_4_BIN,PULL_UP_BP_NUM_5_BIN,PULL_UP_BP_NUM_6_BIN,PULL_UP_BP_NUM_7_BIN,PULL_UP_BP_NUM_8_BIN,PULL_UP_BP_NUM_9_BIN,PULL_UP_BP_NUM_SLASH_BIN,
};

static void *pull_up_bo_num[] =
{
    PULL_UP_BO_NUM_0_BIN,PULL_UP_BO_NUM_1_BIN,PULL_UP_BO_NUM_2_BIN,PULL_UP_BO_NUM_3_BIN,PULL_UP_BO_NUM_4_BIN,PULL_UP_BO_NUM_5_BIN,PULL_UP_BO_NUM_6_BIN,PULL_UP_BO_NUM_7_BIN,PULL_UP_BO_NUM_8_BIN,PULL_UP_BO_NUM_9_BIN,PULL_UP_BO_NUM_PER_BIN
};






void turn(void)
{
    /*
    degree_hour=(hour%12+minute/60)*30;
    degree_minute=(minute+second/60)*6;
    degree_second=second*6;
    */
    lt = time(NULL);
    ptr = localtime(&lt);
    degree_hour=(ptr->tm_hour%12+(float)ptr->tm_min/60)*30;
    degree_minute=(ptr->tm_min+(float)ptr->tm_sec/60)*6;
    degree_second=ptr->tm_sec*6;
    //degree_second=(second+(float)milliSecond/1000)*6;//Smooth movement
    //gui_img_rotation(hour, degree_hour, 4, 46);

    gui_img_rotation(hour, degree_hour, hour->draw_img.img_w/2, hour->draw_img.img_h);
    gui_img_rotation(minute, degree_minute, minute->draw_img.img_w/2, minute->draw_img.img_h);
    gui_img_rotation(second,  degree_second , second->draw_img.img_w/2, second->draw_img.img_h-16);

       //gui_log("hour=%d!!!", hour->draw_img.img_w);
}

static void canvas_compass_cb(gui_canvas_t *canvas)
{
    nvgRoundedRect(canvas->vg, 19, 0, 330, 160, 30);
    nvgFillColor(canvas->vg, nvgRGBA(13,21,21, 204));
    nvgFill(canvas->vg);
}

static void canvas_battery_cb(gui_canvas_t *canvas)
{
    nvgRoundedRect(canvas->vg, 19, 0, 160, 160, 30);
    nvgFillColor(canvas->vg, nvgRGBA(255,255,255, 204));
    nvgFill(canvas->vg);
}

static void canvas_weather_cb(gui_canvas_t *canvas)
{
    nvgRoundedRect(canvas->vg, 189, 0, 160, 160, 30);
    nvgFillColor(canvas->vg, nvgRGBA(00,114,255, 204));
    nvgFill(canvas->vg);
}

static void canvas_activity_cb(gui_canvas_t *canvas)
{
    nvgRoundedRect(canvas->vg, 19, 0, 330, 160, 30);
    nvgFillColor(canvas->vg, nvgRGBA(13,21,21,204));
    nvgFill(canvas->vg);
}


static void canvas_bp_cb(gui_canvas_t *canvas)
{
    nvgRoundedRect(canvas->vg, 19, 0, 160, 160, 30);
    nvgFillColor(canvas->vg, nvgRGBA(1,240,235, 204));
    nvgFill(canvas->vg);
}

static void canvas_bo_cb(gui_canvas_t *canvas)
{

    nvgRoundedRect(canvas->vg, 189, 0, 160, 160, 30);
    nvgFillColor(canvas->vg, nvgRGBA(255,255,255, 204));
    nvgFill(canvas->vg);
}

static void canvas_all_app_cb(gui_canvas_t *canvas)
{
    nvgRoundedRect(canvas->vg, 84, 0, 200, 60, 35);
    nvgFillColor(canvas->vg, nvgRGBA(13,21,21,204));
    nvgFill(canvas->vg);
}

static void compass_card_clicked(void *obj, gui_event_t e)
{
    gui_log("compass_card_clicked\n");


}
static void cardlist_clock(void *parent)
{
    //gui_img_create_from_mem(parent, "page0", CARD_HEALTH_BIN, 14, 0, 0, 0);
    home_bg = gui_img_create_from_mem(parent, "home_bg", PULL_UP_CLOCK_BG_BIN, 188, 20, 0, 0);
    hour = gui_img_create_from_mem(parent, "hour", PULL_UP_CLOCK_HOUR_BIN, 268, 100, 0, 0);
    minute = gui_img_create_from_mem(parent, "minute", PULL_UP_CLOCK_MINUTE_BIN, 268, 100, 0, 0);
    second = gui_img_create_from_mem(parent, "second", PULL_UP_CLOCK_SECOND_BIN, 268, 100, 0, 0);
    circle = gui_img_create_from_mem(parent, "circle", PULL_UP_CLOCK_CIRCLE_BIN, 263, 95, 0, 0);
    //gui_log("hour=%d!!!", hour->draw_img.img_w);
    gui_img_set_animate(hour, 100000, 0xffffffff, turn, NULL);
    lt = time(NULL);
    ptr = localtime(&lt);
    static char date[5] = {'\0'};
    memset(date, '\0', sizeof(date));
    sprintf(date, "%02d-%02d", ptr->tm_mon+1,ptr->tm_mday);
    hdf_gui_show_string_num(parent,pull_up_clock_date_num,39,68,date);
    //gui_log("week=%d!!!", ptr->tm_wday);

    gui_img_create_from_mem(parent, "week",RtkWristbandSys.language == language_SChinese?pull_up_clock_week_ch[ptr->tm_wday - 1]:pull_up_clock_week_en[ptr->tm_wday - 1] , 39, 104, 0, 0);

}
static void cardlist_compass(void *parent)
{

    //uint16_t msen_ori=get_msen_ori()
    uint16_t msen_ori=160;
    gui_img_t *compass_bg=gui_img_create_from_mem(parent, "compass_bg", PULL_UP_COMPASS_BG_BIN, 19, 0, 0, 0);
    gui_canvas_t *canvas = gui_canvas_create(parent, "canvas", 0, 0, 0, 330, 160);
    gui_canvas_set_canvas_cb(canvas, canvas_compass_cb);
    gui_img_t *direction_arrow=gui_img_create_from_mem(parent, "direction_arrow", PULL_UP_COMPASS_DIRECTION_ARROW_BIN, 292, 55, 0, 0);
    gui_img_rotation(direction_arrow, 360-msen_ori, 36, 36); 
    char *compass=MultiLanguageData[RtkWristbandSys.language].LNG_DATA[LANG_PULL_UP_COMPASS].lng_p;
    gui_text_t *tv_compass = gui_text_create(parent,  "tv_compass",  39, 15, 300, 50);
    gui_text_set(tv_compass, compass, "rtk_font_mem", 0xec2909ff, strlen(compass), 32);
    gui_text_mode_set(tv_compass, LEFT);


    hdf_gui_show_compass_unit(parent,RtkWristbandSys.language == language_SChinese?pull_up_compass_unit_ch:pull_up_compass_unit_en,39,61,msen_ori);	


    static char msen_ori_string[5] = {'\0'};
    memset(msen_ori_string, '\0', sizeof(msen_ori_string));
    sprintf(msen_ori_string, "~%03dd", msen_ori);
    hdf_gui_show_string_num(parent,pull_up_compass_num,123,64,msen_ori_string);

    //gui_obj_add_event_cb(compass_bg, (gui_event_cb_t)compass_card_clicked, GUI_EVENT_TOUCH_CLICKED, NULL);

}
static void cardlist_battery_level(void *parent)
{
    //uint8_t battery_level = wristband_get_battery_level();
    uint8_t battery_level = 8;
    //gui_img_create_from_mem(parent, "page1", PULL_UP_BATTERY_LEVEL_BG_BIN, 19, 0, 0, 0);
    gui_canvas_t *canvas = gui_canvas_create(parent, "canvas", 0, 0, 0, 160, 160);
    gui_canvas_set_canvas_cb(canvas, canvas_battery_cb);
    hdf_gui_show_battery_level_progress(parent,pull_up_battery_progress,39,20,battery_level);	
    if(RtkWristbandSys.charger_status == InCharging)
    {
        gui_img_create_from_mem(parent, "charge", PULL_UP_BATTERY_LEVEL_CHARGE_BIN, 93, 36, 0, 0);
    }
    static char battery_level_string[4] = {'\0'};
    memset(battery_level_string, '\0', sizeof(battery_level_string));
    sprintf(battery_level_string, "%d%%",battery_level);
    hdf_gui_show_string_num(parent,pull_up_battery_level_num,hdf_get_pic_array_center_display_x(pull_up_battery_level_num,battery_level_string,19,160),65,battery_level_string);
}
static void cardlist_weather(void *parent)
{
	int8_t temp_avg ;
    //uint8_t weather_unit=RtkWristbandSys.flag_field.weather_unit;
    //uint8_t weatherStatus = System_history_s.weather_status.Status%4;
    //bool weather_state=(System_history_s.weather_status.TemperuteValueL != 0)||(System_history_s.weather_status.TemperuteValueH != 0);
    uint8_t weather_unit=0;	
    uint8_t weather_type =0;
    bool weather_state=true;
    //gui_img_create_from_mem(parent, "page1", PULL_UP_WEATHER_BG_BIN, 189, 0, 0, 0);
    gui_canvas_t *canvas = gui_canvas_create(parent, "canvas", 0, 0, 0, 330, 160);
    gui_canvas_set_canvas_cb(canvas, canvas_weather_cb);
    char *weather=MultiLanguageData[RtkWristbandSys.language].LNG_DATA[LANG_PULL_UP_WEATHER].lng_p;
    gui_text_t *tv_weather = gui_text_create(parent,  "tv_weather",  209, 15, 300, 50);
    gui_text_set(tv_weather, weather, "rtk_font_mem", 0xffffffff, strlen(weather), 32);
    gui_text_mode_set(tv_weather, LEFT);
    
    if(weather_state)
    {
        if(weather_unit == 1)
        {
            //temp_avg = 32 + 1.8 * ((System_history_s.weather_status.TemperuteValueL + System_history_s.weather_status.TemperuteValueH)/2);
            temp_avg = 32 + 1.8 * ((30 + 5)/2);
            if(temp_avg >= 100)
            {
                temp_avg = 99;
            }
        }
        else
        {
            //temp_avg = (System_history_s.weather_status.TemperuteValueL + System_history_s.weather_status.TemperuteValueH)/2;	
            temp_avg =(23 + 6)/2;

        }
        static char temp_string[4] = {'\0'};
        memset(temp_string, '\0', sizeof(temp_string));
        if(temp_avg>=0)
		{     
            if(weather_unit == 1)
            {
                sprintf(temp_string, "%02df",temp_avg);
            }
            else
            {
                sprintf(temp_string, "%02dc",temp_avg);
            }    
           
		}
		else
		{
            if(weather_unit == 1)
            {
                sprintf(temp_string, "-%02df",abs(temp_avg));
            }
            else
            {
                sprintf(temp_string, "-%02dc",abs(temp_avg));
            }    

		}
        gui_img_create_from_mem(parent, "weather_type",pull_up_weather_type[weather_type] , 209, 55, 0, 0);
        hdf_gui_show_string_num(parent,pull_up_weather_num,temp_avg<0?270-18:270,112,temp_string);
        
    }
    else
    {
        gui_img_create_from_mem(parent, "weather_type",pull_up_weather_type[4] , 209, 55, 0, 0);
    }
	

}
static void cardlist_step(void *parent)
{
    gui_canvas_t *canvas = gui_canvas_create(parent, "canvas", 0, 0, 0, 330, 160);
    gui_canvas_set_canvas_cb(canvas, canvas_activity_cb);
    gui_img_create_from_mem(parent, "step", PULL_UP_STEP_ICON_BIN, 39, 30, 0, 0);
    //uint32_t step = Get_User_Sport_steps();
    //uint32_t kcal = (uint16_t)CalSportCalory_system_Metric(step);
    //float dis = CalSportDistance(step);

    uint32_t step = 2000;
    uint32_t kcal = 800;
    float dis = 2.5;
    uint16_t string_num_pic_end_x;

    static char step_string[5] = {'\0'};
    memset(step_string, '\0', sizeof(step_string));
    sprintf(step_string, "%d",kcal);
    string_num_pic_end_x=hdf_gui_show_string_num(parent,pull_up_cal_num,178,21,step_string);

    char *unit=MultiLanguageData[RtkWristbandSys.language].LNG_DATA[LANG_PULL_UP_KILOCALORIE].lng_p;
    gui_text_t *tv_unit = gui_text_create(parent,  "tv_unit",  178+string_num_pic_end_x+8, 21-5, 300, 50);
    gui_text_set(tv_unit, unit, "rtk_font_mem", 0xfb0046ff, strlen(unit), 32);

    memset(step_string, '\0', sizeof(step_string));
    sprintf(step_string, "%d",step);
    string_num_pic_end_x=hdf_gui_show_string_num(parent,pull_up_steps_num,178,71,step_string);
    unit=MultiLanguageData[RtkWristbandSys.language].LNG_DATA[LANG_PULL_UP_STEP].lng_p;
    tv_unit = gui_text_create(parent,  "tv_unit",  178+string_num_pic_end_x+8, 71-5, 300, 50);
    gui_text_set(tv_unit, unit, "rtk_font_mem", 0xb3f512ff, strlen(unit), 32);

    memset(step_string, '\0', sizeof(step_string));
    sprintf(step_string, "%0.2f",dis);
    string_num_pic_end_x=hdf_gui_show_string_num(parent,pull_up_dis_num,178,121,step_string);
    
    if(RtkWristbandSys.flag_field.distance_unit == 0)
    {
        unit=MultiLanguageData[RtkWristbandSys.language].LNG_DATA[LANG_PULL_UP_KILOMETER].lng_p;
    }else
    {
        unit=MultiLanguageData[RtkWristbandSys.language].LNG_DATA[LANG_PULL_UP_MILE].lng_p;
    }
    tv_unit = gui_text_create(parent,  "tv_unit",  178+string_num_pic_end_x+8, 121-5, 300, 50);
    gui_text_set(tv_unit, unit, "rtk_font_mem", 0x19ebffff, strlen(unit), 32);
}
static void cardlist_heart(void *parent)
{
    gui_img_create_from_mem(parent, "page2", PULL_UP_HEART_BG_BIN, 19, 0, 0, 0);
    uint8_t hr=80;
    uint16_t string_num_pic_end_x;
    static char hr_string[4] = {'\0'};
    memset(hr_string, '\0', sizeof(hr_string));
    sprintf(hr_string, "%d",hr);
    string_num_pic_end_x=hdf_gui_show_string_num(parent,pull_up_weather_num,95,18,hr_string);
    gui_img_create_from_mem(parent, "hr_unit", RtkWristbandSys.language == language_SChinese?PULL_UP_HEART_UNIT_CH_BIN:PULL_UP_HEART_UNIT_EN_BIN, 95+string_num_pic_end_x+7, 18+8, 0, 0);
}
static void cardlist_bp_bo(void *parent)
{
    gui_canvas_t *canvas_bp = gui_canvas_create(parent, "canvas", 0, 0, 0, 330, 160);
    gui_canvas_set_canvas_cb(canvas_bp, canvas_bp_cb);
    uint8_t bp_low =90; 
    uint8_t bp_high =125; 
    static char restul_string[8] = {'\0'};
    memset(restul_string, '\0', sizeof(restul_string));
    sprintf(restul_string, "%d/%d",bp_low,bp_high);
    gui_img_create_from_mem(parent, "bp", PULL_UP_BP_ICON_BIN, hdf_get_pic_center_display_x(PULL_UP_BP_ICON_BIN,19,160), 15, 0, 0);
    hdf_gui_show_string_num(parent,pull_up_bp_num,hdf_get_pic_array_center_display_x(pull_up_bp_num,restul_string,19,160),79,restul_string);
    gui_img_create_from_mem(parent, "bp", RtkWristbandSys.language == language_SChinese?PULL_UP_BP_UNIT_CH_BIN:PULL_UP_BP_UNIT_EN_BIN, hdf_get_pic_center_display_x(PULL_UP_BP_UNIT_CH_BIN,19,160), 123, 0, 0);



    gui_canvas_t *canvas_bo = gui_canvas_create(parent, "canvas", 0, 0, 0, 189, 160);
    gui_canvas_set_canvas_cb(canvas_bo, canvas_bo_cb);
    uint8_t bo =80; 
    memset(restul_string, '\0', sizeof(restul_string));
    sprintf(restul_string, "%d%%",bo);
    gui_img_create_from_mem(parent, "bo", PULL_UP_BO_ICON_BIN, hdf_get_pic_center_display_x(PULL_UP_BO_ICON_BIN,189,160), 15, 0, 0);
    hdf_gui_show_string_num(parent,pull_up_bo_num,hdf_get_pic_array_center_display_x(pull_up_bo_num,restul_string,189,160),79,restul_string);
    gui_img_create_from_mem(parent, "bo", RtkWristbandSys.language == language_SChinese?PULL_UP_BO_UNIT_CH_BIN:PULL_UP_BO_UNIT_EN_BIN, hdf_get_pic_center_display_x(PULL_UP_BO_UNIT_CH_BIN,189,160), 123, 0, 0);
    

}
static void cardlist_music(void *parent)
{

    gui_img_create_from_mem(parent, "page5", PULL_UP_MUSIC_BG_BIN, 19, 0, 0, 0);
    gui_img_create_from_mem(parent, "back", PULL_UP_MUSIC_BACK_BIN, 70, 62, 0, 0);
    gui_img_create_from_mem(parent, "start", PULL_UP_MUSIC_START_BIN, 131, 27, 0, 0);
    gui_img_create_from_mem(parent, "forward", PULL_UP_MUSIC_FORWARD_BIN, 262, 62, 0, 0);
}

static void cardlist_navigation(void *parent)
{
    gui_img_t *img=gui_img_create_from_mem(parent, "nv", PULL_UP_NAVIGATION_BG_BIN, 19, 0, 0, 0);

}

static void cardlist_recent_app(void *parent)
{
     gui_canvas_t *canvas = gui_canvas_create(parent, "canvas", 0, 0, 0, 330, 160);
    gui_canvas_set_canvas_cb(canvas, canvas_activity_cb);
    char *recent_app=MultiLanguageData[RtkWristbandSys.language].LNG_DATA[LANG_PULL_UP_RECENT_APP].lng_p;
    gui_text_t *tv_recent_app = gui_text_create(parent,  "tv_recent_app",  0, 10, 0, 0);
    gui_text_set(tv_recent_app, recent_app, "rtk_font_mem", 0xffffffff, strlen(recent_app), 32);
    gui_text_mode_set(tv_recent_app, CENTER);
    gui_img_create_from_mem(parent, "left", RECENT_APP_BO_BIN, 39, 56, 0, 0);
    gui_img_create_from_mem(parent, "center", RECENT_APP_BP_BIN, 144, 56, 0, 0);
    gui_img_create_from_mem(parent, "right", RECENT_APP_CAL_BIN, 249, 56, 0, 0);

}

static void cardlist_all_app(void *parent)
{
     gui_canvas_t *canvas = gui_canvas_create(parent, "canvas", 0, 0, 0, 330, 160);
    gui_canvas_set_canvas_cb(canvas, canvas_all_app_cb);
    char *all_app=MultiLanguageData[RtkWristbandSys.language].LNG_DATA[LANG_PULL_UP_ALL_APP].lng_p;
    gui_text_t *tv_all_app = gui_text_create(parent,  "tv_all_app",  150, 14, 0, 0);
    gui_text_set(tv_all_app, all_app, "rtk_font_mem", 0xffffffff, strlen(all_app), 32);
    gui_text_mode_set(tv_all_app, LEFT);
    gui_img_create_from_mem(parent, "left", PULL_UP_ALL_APP_ICON_BIN, 114, 18, 0, 0);

}





static void canvas_cb_black(gui_canvas_t *canvas)
{
    nvgRect(canvas->vg, 0, 0, 368, 448);
    nvgFillColor(canvas->vg, nvgRGBA(0, 0, 0, 200));
    nvgFill(canvas->vg);
}


static gui_cardview_t *cv;
static void done_cb(gui_curtainview_t *this)
{
    if (this->cur_curtain == CURTAIN_DOWN)
    {
        gui_log("CURTAIN_DOWN done!!! \n");
        cv->mute = false;
    }
    if (this->cur_curtain == CURTAIN_MIDDLE)
    {
        gui_log("CURTAIN_DOWN Reset!!! \n");
        cv->mute = true;
        cv->release_y = 0;
        cv->remain_y = 0;
    }

}

static void cv_status_cb(gui_cardview_t *this)
{
    //gui_log("cv release value = %d \n", this->release_y);

    gui_curtainview_t *curtainview = (gui_curtainview_t *)this->base.parent->parent;

    if (this->release_y != 0)
    {
        curtainview->mute = true;
    }
    else
    {
        curtainview->mute = false;
    }
}

void curtain_down_design(void *parent_widget)
{
    gui_curtain_t *ct_card = parent_widget;
    gui_curtainview_t *curtainview = (gui_curtainview_t *)ct_card->base.parent;
    gui_curtainview_set_done_cb(curtainview, done_cb);

    gui_canvas_t *canvas = gui_canvas_create(parent_widget, "canvas", 0, 0, 0, 368, 448);
    gui_canvas_set_canvas_cb(canvas, canvas_cb_black);

    cv = gui_cardview_create(parent_widget, "cardview", 0, 0, 0, 185);

    gui_cardview_status_cb(cv, cv_status_cb);
    //gui_cardview_set_style(cv,CLASSIC);


    gui_card_t *tb_all_app = gui_card_create(cv, "tb_all_app",         0, 120, 0, 160, 0, 9);
    gui_card_t *tb_recent_app = gui_card_create(cv, "tb_recent_app",         0, 110, 0, 160, 0, 8);
    gui_card_t *tb_navigation = gui_card_create(cv, "tb_navigation",         0, 100, 0, 160, 0, 7);
    gui_card_t *tb_music = gui_card_create(cv, "tb_music",         0, 90, 0, 160, 0, 6);
    gui_card_t *tb_bp_bo = gui_card_create(cv, "tb_bp_bo",   0, 80, 0, 160, 0, 5); 
    gui_card_t *tb_heart = gui_card_create(cv, "tb_heart",   0, 70, 0, 160, 0, 4);  
    gui_card_t *tb_step = gui_card_create(cv, "tb_step",   0, 60, 0, 160, 0, 3);       
    gui_card_t *tb_weather = gui_card_create(cv, "tb_weather",   0, 50, 0, 160, 1, 2);
    gui_card_t *tb_battery_level = gui_card_create(cv, "tb_battery_level",         0, 50, 0, 160, 0, 2); 
    gui_card_t *tb_compass = gui_card_create(cv, "tb_compass",   0, 40, 0, 160, 0, 1);
    gui_card_t *tb_clock = gui_card_create(cv, "tb_clock",         0, 0, 0, 160, 0, 0); 

    cardlist_clock(tb_clock);
    cardlist_compass(tb_compass);
    cardlist_battery_level(tb_battery_level);
    cardlist_weather(tb_weather);
    cardlist_step(tb_step);
    cardlist_heart(tb_heart);
    cardlist_bp_bo(tb_bp_bo);
    cardlist_music(tb_music);
    cardlist_navigation(tb_navigation);
    cardlist_recent_app(tb_recent_app);
    cardlist_all_app(tb_all_app);
}

