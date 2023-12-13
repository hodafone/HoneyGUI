#include "hdf_multi_language.h"

 LNG_TOTAL_DATA MultiLanguageData[language_MAX] = {
[language_SChinese] = {
.LNG_DATA[LANG_PULL_UP_COMPASS]   ={66,  255,  0XFFFFFFFF,  Ch_pull_up_compass},
.LNG_DATA[LANG_PULL_UP_WEATHER]   ={66,  255,  0XFFFFFFFF,  Ch_pull_up_weather},
.LNG_DATA[LANG_PULL_UP_RECENT_APP]   ={66,  255,  0XFFFFFFFF,  Ch_pull_up_recent_app},
.LNG_DATA[LANG_PULL_UP_ALL_APP]   ={66,  255,  0XFFFFFFFF,  Ch_pull_up_all_app},
.LNG_DATA[LANG_PULL_UP_STEP]   ={66,  255,  0XFFFFFFFF,  Ch_pull_up_step},
.LNG_DATA[LANG_PULL_UP_MILE]   ={66,  255,  0XFFFFFFFF,  Ch_pull_up_mile},
.LNG_DATA[LANG_PULL_UP_KILOMETER]   ={66,  255,  0XFFFFFFFF,  Ch_pull_up_kilometer},
.LNG_DATA[LANG_PULL_UP_KILOCALORIE]   ={66,  255,  0XFFFFFFFF,  Ch_pull_up_kilocalorie},
},
[language_English] = {
.LNG_DATA[LANG_PULL_UP_COMPASS]   ={66,  255,  0XFFFFFFFF,  En_pull_up_compass},
.LNG_DATA[LANG_PULL_UP_WEATHER]   ={66,  255,  0XFFFFFFFF,  En_pull_up_weather},
.LNG_DATA[LANG_PULL_UP_RECENT_APP]   ={66,  255,  0XFFFFFFFF,  En_pull_up_recent_app},
.LNG_DATA[LANG_PULL_UP_ALL_APP]   ={66,  255,  0XFFFFFFFF,  En_pull_up_all_app},
},
};