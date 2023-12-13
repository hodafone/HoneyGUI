
#include <guidef.h>


typedef  enum
{
LANG_PULL_UP_COMPASS,
LANG_PULL_UP_WEATHER,
LANG_PULL_UP_RECENT_APP,
LANG_PULL_UP_ALL_APP,
LANG_PULL_UP_STEP,
LANG_PULL_UP_MILE,
LANG_PULL_UP_KILOMETER,
LANG_PULL_UP_KILOCALORIE,
LANGUAGE_UI_MAX,
}ENUM_LANGUAGE_UI;

//ch
static char Ch_pull_up_compass []="指南针";
static char Ch_pull_up_weather []="天气";
static char Ch_pull_up_recent_app []="最近应用";
static char Ch_pull_up_all_app []="所有App";
static char Ch_pull_up_step []="步";
static char Ch_pull_up_mile []="英里";
static char Ch_pull_up_kilometer []="公里";
static char Ch_pull_up_kilocalorie []="千卡";

//en
static char En_pull_up_compass []="compass";
static char En_pull_up_weather []="weather";
static char En_pull_up_recent_app []="Recent applications";
static char En_pull_up_all_app []="All apps";



typedef enum
{
	language_SChinese   = 0,	 //Ó¢Óï
	language_English    = 1,	 //ÖÐÎÄ¼òÌå
	language_Russisch   = 2,   //¶íÓï
	language_Spanish    = 3,	 //Î÷°àÑÀÓï
	language_German 	 	= 4,   //µÂÓï
	language_Italy      = 5,   //Òâ´óÀûÓï
	language_French	  	= 6,	 //·¨Óï
	language_Vietnamese = 7,  //Ô½ÄÏÓï
	language_Poland		  = 8,  //²¨À¼
	language_Dutch			= 9,  //ºÉÀ¼
	language_Greek			= 10, //Ï£À°
	language_Turkey			= 11, //ÍÁ¶úÆä
	language_Ronmanian	= 12, //ÂÞÂíÄáÑÇRomanian
	language_Bulgarian	 	= 13, //±£¼ÓÀûÑÇÓï
	language_TChinese	 	= 14, //Traditional Chinese·±Ìå
	language_Hebrew	 		= 15, //Ï£²®À´Óï
	language_Danish  		= 16, //µ¤ÂóÓï
	language_Serbia			= 17, //Èû¶ûÎ¬ÑÇ
	language_Sweden			= 18, //Èðµä
	language_Czech      = 19, //½Ý¿ËÓï
	language_Skovak    	= 20, //Ë¹Âå·¥¿ËÓï
	language_Hungarian  = 21, //ÐÙÑÀÀûÓï
										//=	22, //±£Áô´ýÓÃ
	language_Japanese	=	23, 	//ÈÕÓï
	language_Thai				=	24, //Ì©Óï
	language_Ukraine	  =	25, //ÎÚ¿ËÀ¼
	language_Suomi  		=	26, //·ÒÀ¼Suomi
	language_Norsk			=	27, //Å²ÍþNorsk
	language_Korean			=	28, //º«Óï
	language_Indonesian	=	29, //Ó¡ÄáÓï
	language_Latvia			=	30, //À­ÍÑÎ¬ÑÇ
	language_Lithuania	= 31, //Á¢ÌÕÍð
	language_Estonia		= 32, //°®É³ÄáÑÇ
	language_Portuguese = 33,  //ÆÏÌÑÑÀ
	language_Arab				=	34, //°¢À­²®
	language_Test       = 35,	 //Test
	language_Farsi      = 36,	 //²¨Ë¹Óï
	language_Filipino   = 37,	 //·ÆÂÉ±öÓï
	language_Malaysian  = 38,  //ÂíÀ´Î÷ÑÇÓï
	language_MAX        =	39, 
   
} language_t;

typedef struct 
{
    int16_t x;
    int16_t y;
    uint32_t color;
    char * lng_p;
}LNG_DATA_STR;

typedef struct 
{
	LNG_DATA_STR LNG_DATA[LANGUAGE_UI_MAX];
}LNG_TOTAL_DATA;

extern  LNG_TOTAL_DATA MultiLanguageData[language_MAX];






