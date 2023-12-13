#if defined _WIN32
extern unsigned char resource_root[];

#define   ACTIVITY_BIN                            (void *)(resource_root + 0x000003f8)
#define   APP_LIST3_BIN                           (void *)(resource_root + 0x000a1938)
#define   CURTAIN_RECT_248_385_BIN                (void *)(resource_root + 0x000a2c38)
#define   SAT_BIN                                 (void *)(resource_root + 0x000d1638)
#define   SUN_BIN                                 (void *)(resource_root + 0x000d24b8)
#define   THU_BIN                                 (void *)(resource_root + 0x000d3338)
#define   TUE_BIN                                 (void *)(resource_root + 0x000d41b8)
#define   WED_BIN                                 (void *)(resource_root + 0x000d5038)
#define   WHATSAPP_BIN                            (void *)(resource_root + 0x000d5eb8)
#define   ADD_BIN                                 (void *)(resource_root + 0x000d7778)
#define   ASSEMBLY_BIN                            (void *)(resource_root + 0x000d7ab8)
#define   AUDIO_FREQUENCY_BIN                     (void *)(resource_root + 0x000d7b38)
#define   CALLING_0_BIN                           (void *)(resource_root + 0x000dcaf8)
#define   CENTIGRADE_BIN                          (void *)(resource_root + 0x000de678)
#define   CIRCLE_BIN                              (void *)(resource_root + 0x000decb8)
#define   CLOSE_BIN                               (void *)(resource_root + 0x000e0578)
#define   DATA_BIN                                (void *)(resource_root + 0x000e8e78)
#define   DELETE_BIN                              (void *)(resource_root + 0x000e99b8)
#define   DIRECTION_BIN                           (void *)(resource_root + 0x000ea878)
#define   FACEBOOK_BIN                            (void *)(resource_root + 0x000eb478)
#define   FRI_BIN                                 (void *)(resource_root + 0x000ecdf8)
#define   HEART_RATE_BIN                          (void *)(resource_root + 0x000edc78)
#define   INSTAGRAM_BIN                           (void *)(resource_root + 0x000ee938)
#define   LNE_BIN                                 (void *)(resource_root + 0x000f01f8)
#define   MAP_BIN                                 (void *)(resource_root + 0x000f1ab8)
#define   MESSAGE_0_BIN                           (void *)(resource_root + 0x000f77b8)
#define   MESSAGE_1_BIN                           (void *)(resource_root + 0x000f9078)
#define   MESSAGE_2_BIN                           (void *)(resource_root + 0x000fa938)
#define   MESSAGE_3_BIN                           (void *)(resource_root + 0x000fc1f8)
#define   MESSAGE_APP1L_BIN                       (void *)(resource_root + 0x00107db8)
#define   MESSAGE_MUS_BIN                         (void *)(resource_root + 0x0011d8b8)
#define   MESSAGE_WEIXIN_BIN                      (void *)(resource_root + 0x00129478)
#define   MON_BIN                                 (void *)(resource_root + 0x0013ed38)
#define   MUSIC_0_BIN                             (void *)(resource_root + 0x0013fbb8)
#define   MUSIC_1_BIN                             (void *)(resource_root + 0x00140978)
#define   NOTIFY_BIN                              (void *)(resource_root + 0x00143238)
#define   RECT_100_127_BIN                        (void *)(resource_root + 0x00175c78)
#define   RECT_110_108_BIN                        (void *)(resource_root + 0x0017bff8)
#define   RECT_146_50_BIN                         (void *)(resource_root + 0x00181cf8)
#define   RECT_160_385_BIN                        (void *)(resource_root + 0x00185638)
#define   RECT_228_64_BIN                         (void *)(resource_root + 0x001a37b8)
#define   RECT_300_126_BIN                        (void *)(resource_root + 0x001aa9f8)
#define   RECT_300_127_BIN                        (void *)(resource_root + 0x001bd178)
#define   RECT_300_80_BIN                         (void *)(resource_root + 0x001cfb38)
#define   RECT_350_348_BIN                        (void *)(resource_root + 0x001db6f8)
#define   RING_BIN                                (void *)(resource_root + 0x002264b8)
#define   SIRI_BIN                                (void *)(resource_root + 0x00227178)
#define   SIRI_0_BIN                              (void *)(resource_root + 0x0022a138)
#define   SIRI_1_BIN                              (void *)(resource_root + 0x0022d378)
#define   SIRI_10_BIN                             (void *)(resource_root + 0x002305b8)
#define   SIRI_11_BIN                             (void *)(resource_root + 0x002337f8)
#define   SIRI_12_BIN                             (void *)(resource_root + 0x00236a38)
#define   SIRI_13_BIN                             (void *)(resource_root + 0x00239c78)
#define   SIRI_14_BIN                             (void *)(resource_root + 0x0023ceb8)
#define   SIRI_15_BIN                             (void *)(resource_root + 0x002400f8)
#define   SIRI_16_BIN                             (void *)(resource_root + 0x00243338)
#define   SIRI_17_BIN                             (void *)(resource_root + 0x00246578)
#define   SIRI_18_BIN                             (void *)(resource_root + 0x002497b8)
#define   SIRI_19_BIN                             (void *)(resource_root + 0x0024c9f8)
#define   SIRI_2_BIN                              (void *)(resource_root + 0x0024e638)
#define   SIRI_21_BIN                             (void *)(resource_root + 0x00251878)
#define   SIRI_3_BIN                              (void *)(resource_root + 0x002534b8)
#define   SIRI_4_BIN                              (void *)(resource_root + 0x002566f8)
#define   SIRI_5_BIN                              (void *)(resource_root + 0x00259938)
#define   SIRI_6_BIN                              (void *)(resource_root + 0x0025cb78)
#define   SIRI_7_BIN                              (void *)(resource_root + 0x0025fdb8)
#define   SIRI_70_70_BIN                          (void *)(resource_root + 0x00262ff8)
#define   SIRI_8_BIN                              (void *)(resource_root + 0x00265fb8)
#define   SIRI_80_80_BIN                          (void *)(resource_root + 0x002691f8)
#define   SIRI_9_BIN                              (void *)(resource_root + 0x0026c438)
#define   SKY0_BIN                                (void *)(resource_root + 0x0026f678)
#define   SKY1_BIN                                (void *)(resource_root + 0x00270338)
#define   SOUND_BIN                               (void *)(resource_root + 0x00270ff8)
#define   SOUND_RECORDING_BIN                     (void *)(resource_root + 0x00275fb8)
#define   SOUND_RECORDING_0_BIN                   (void *)(resource_root + 0x00276c78)
#define   SPORT_BIN                               (void *)(resource_root + 0x00278538)
#define   SPORT_0_BIN                             (void *)(resource_root + 0x00279278)
#define   TEXT_0_BIN                              (void *)(resource_root + 0x0027ab38)
#define   TEXT_1_BIN                              (void *)(resource_root + 0x0027bbf8)
#define   TEXT_2_BIN                              (void *)(resource_root + 0x0027e4b8)
#define   TIME_BIN                                (void *)(resource_root + 0x0027ef38)
#define   WAVE_BIN                                (void *)(resource_root + 0x00280d78)
#define   WEIXIN_BIN                              (void *)(resource_root + 0x00281778)
#define   CLOCKN_BIN                              (void *)(resource_root + 0x00283038)
#define   HEARTRATE_BIN                           (void *)(resource_root + 0x00324078)
#define   MUSIC_BIN                               (void *)(resource_root + 0x003c50b8)
#define   QUICKCARD_BIN                           (void *)(resource_root + 0x004660f8)
#define   WEATHER_BIN                             (void *)(resource_root + 0x00507138)
#define   ALARM_CLOCK_OFF_BIN                     (void *)(resource_root + 0x005a8178)
#define   ALARM_CLOCK_ON_BIN                      (void *)(resource_root + 0x005b8478)
#define   DOG100_BIN                              (void *)(resource_root + 0x005c88b8)
#define   DOG120_BIN                              (void *)(resource_root + 0x005de6b8)
#define   DOG140_BIN                              (void *)(resource_root + 0x005f44b8)
#define   DOG160_BIN                              (void *)(resource_root + 0x0060a2b8)
#define   DOG180_BIN                              (void *)(resource_root + 0x006200b8)
#define   DOG20_BIN                               (void *)(resource_root + 0x00635eb8)
#define   DOG200_BIN                              (void *)(resource_root + 0x0064bcb8)
#define   DOG220_BIN                              (void *)(resource_root + 0x00661ab8)
#define   DOG240_BIN                              (void *)(resource_root + 0x006778b8)
#define   DOG260_BIN                              (void *)(resource_root + 0x0068d6b8)
#define   DOG280_BIN                              (void *)(resource_root + 0x006a34b8)
#define   DOG300_BIN                              (void *)(resource_root + 0x006b92b8)
#define   DOG320_BIN                              (void *)(resource_root + 0x006cf0b8)
#define   DOG340_BIN                              (void *)(resource_root + 0x006e4eb8)
#define   DOG360_BIN                              (void *)(resource_root + 0x006facb8)
#define   DOG40_BIN                               (void *)(resource_root + 0x00710ab8)
#define   DOG60_BIN                               (void *)(resource_root + 0x007268b8)
#define   DOG80_BIN                               (void *)(resource_root + 0x0073c6b8)
#define   BEIJIN_BIN                              (void *)(resource_root + 0x007524b8)
#define   BRIGHT_OFF_BIN                          (void *)(resource_root + 0x00764478)
#define   BRIGHT_ON_BIN                           (void *)(resource_root + 0x00774778)
#define   CALL_OFF_BIN                            (void *)(resource_root + 0x00784a78)
#define   CALL_ON_BIN                             (void *)(resource_root + 0x00794d78)
#define   CARD_HEALTH_BIN                         (void *)(resource_root + 0x007a50b8)
#define   CARD_MORE_BIN                           (void *)(resource_root + 0x007ce3b8)
#define   CARD_MUSIC_BIN                          (void *)(resource_root + 0x007f76b8)
#define   CARD_MUSIC1_BIN                         (void *)(resource_root + 0x008209b8)
#define   CARD_WEATHER1_BIN                       (void *)(resource_root + 0x00849cb8)
#define   DIANHUAGUAN_BIN                         (void *)(resource_root + 0x00872fb8)
#define   DIANHUAKAI_BIN                          (void *)(resource_root + 0x00884f78)
#define   FLASHLIGHT_OFF_BIN                      (void *)(resource_root + 0x00896f38)
#define   FLASHLIGHT_ON_BIN                       (void *)(resource_root + 0x008a7238)
#define   GBK_32_32_DOT_BIN                       (void *)(resource_root + 0x008b7578)
#define   GBK_UNICODE_TABLE_BIN                   (void *)(resource_root + 0x00bd17b8)
#define   ARGB8565_STEP_DAT_BIN                   (void *)(resource_root + 0x00bf1838)
#define   AVATAR_PIC_BIN                          (void *)(resource_root + 0x00bf1a78)
#define   LVGL_BIN                                (void *)(resource_root + 0x00c03078)
#define   PULL_UP_BATTERY_LEVEL_BG_BIN            (void *)(resource_root + 0x00c1a3f8)
#define   PULL_UP_BATTERY_LEVEL_CHARGE_BIN        (void *)(resource_root + 0x00c33438)
#define   PULL_UP_BATTERY_LEVEL_NUM_BIN           (void *)(resource_root + 0x00c33878)
#define   PULL_UP_BATTERY_LEVEL_PROGRESS_BIN      (void *)(resource_root + 0x00c3aaf8)
#define   PULL_UP_CLOCK_BG_BIN                    (void *)(resource_root + 0x00c8f338)
#define   PULL_UP_CLOCK_CIRCLE_BIN                (void *)(resource_root + 0x00c926f8)
#define   PULL_UP_CLOCK_DATE_NUMBER_BIN           (void *)(resource_root + 0x00c928b8)
#define   PULL_UP_CLOCK_HOUR_BIN                  (void *)(resource_root + 0x00c97b78)
#define   PULL_UP_CLOCK_MINUTE_BIN                (void *)(resource_root + 0x00c98178)
#define   PULL_UP_CLOCK_SECOND_BIN                (void *)(resource_root + 0x00c98a78)
#define   PULL_UP_CLOCK_WEEK_CH_BIN               (void *)(resource_root + 0x00c98d78)
#define   PULL_UP_CLOCK_WEEK_EN_BIN               (void *)(resource_root + 0x00ca6878)
#define   PULL_UP_COMPASS_BG_BIN                  (void *)(resource_root + 0x00cb43b8)
#define   PULL_UP_COMPASS_DIRECTION_ARROW_BIN     (void *)(resource_root + 0x00cb5278)
#define   PULL_UP_COMPASS_NUM_BIN                 (void *)(resource_root + 0x00cba3b8)
#define   PULL_UP_COMPASS_UNIT_CH_BIN             (void *)(resource_root + 0x00cc2778)
#define   PULL_UP_COMPASS_UNIT_EN_BIN             (void *)(resource_root + 0x00cd79b8)
#define   PULL_UP_BG_BIN                          (void *)(resource_root + 0x00cecbf8)
#define   SHANGLA_TIANQI_BEIJING_BIN              (void *)(resource_root + 0x00d8dcb8)
#define   SHANGLA_TIANQI_DUOYUN_BIN               (void *)(resource_root + 0x00da6cf8)
#define   SHANGLA_TIANQI_QINGTIAN_BIN             (void *)(resource_root + 0x00da9438)
#define   SHANGLA_TIANQI_WEIZHITIANQI_BIN         (void *)(resource_root + 0x00dabb78)
#define   SHANGLA_TIANQI_XIAXUE_BIN               (void *)(resource_root + 0x00dae2b8)
#define   SHANGLA_TIANQI_XIAYU_BIN                (void *)(resource_root + 0x00db09f8)
#define   JINGYINGUAN_BIN                         (void *)(resource_root + 0x00db3138)
#define   JINGYINKAI_BIN                          (void *)(resource_root + 0x00dc50f8)
#define   JUYUANMOSHIGUAN_BIN                     (void *)(resource_root + 0x00dd70b8)
#define   JUYUANMOSHIKAI_BIN                      (void *)(resource_root + 0x00de9078)
#define   LIANGDUGUAN_BIN                         (void *)(resource_root + 0x00dfb038)
#define   LIANGDUKAI_BIN                          (void *)(resource_root + 0x00e0cff8)
#define   LINGSHENGGUAN_BIN                       (void *)(resource_root + 0x00e1efb8)
#define   LINGSHENGKAI_BIN                        (void *)(resource_root + 0x00e30f78)
#define   MUTE_OFF_BIN                            (void *)(resource_root + 0x00e42f38)
#define   MUTE_ON_BIN                             (void *)(resource_root + 0x00e53238)
#define   NAOZHONGGUAN_BIN                        (void *)(resource_root + 0x00e63538)
#define   NAOZHONGKAI_BIN                         (void *)(resource_root + 0x00e754f8)
#define   NO_DISTURB_OFF_BIN                      (void *)(resource_root + 0x00e874b8)
#define   NO_DISTURB_ON_BIN                       (void *)(resource_root + 0x00e977b8)
#define   RECT_221_269_BIN                        (void *)(resource_root + 0x00ea7ab8)
#define   RING_OFF_BIN                            (void *)(resource_root + 0x00ee1bb8)
#define   RING_ON_BIN                             (void *)(resource_root + 0x00ef1eb8)
#define   SET_OFF_BIN                             (void *)(resource_root + 0x00f021b8)
#define   SET_ON_BIN                              (void *)(resource_root + 0x00f124b8)
#define   SHEZHIGUAN_BIN                          (void *)(resource_root + 0x00f227b8)
#define   SHEZHIKAI_BIN                           (void *)(resource_root + 0x00f34778)
#define   SHIZHONGGUAN_BIN                        (void *)(resource_root + 0x00f46738)
#define   SHIZHONGKAI_BIN                         (void *)(resource_root + 0x00f586f8)
#define   SHOUDIANTONGGUAN_BIN                    (void *)(resource_root + 0x00f6a6b8)
#define   SHOUDIANTONGKAI_BIN                     (void *)(resource_root + 0x00f7c678)
#define   SIGNAL_OFF_BIN                          (void *)(resource_root + 0x00f8e638)
#define   SIGNAL_ON_BIN                           (void *)(resource_root + 0x00f9e938)
#define   THEATRE_OFF_BIN                         (void *)(resource_root + 0x00faec38)
#define   THEATRE_ON_BIN                          (void *)(resource_root + 0x00fbef38)
#define   VIBRATE_OFF_BIN                         (void *)(resource_root + 0x00fcf238)
#define   VIBRATE_ON_BIN                          (void *)(resource_root + 0x00fdf538)
#define   WATCH_OFF_BIN                           (void *)(resource_root + 0x00fef838)
#define   WATCH_ON_BIN                            (void *)(resource_root + 0x00fffb38)
#define   WURAOGUAN_BIN                           (void *)(resource_root + 0x0100fe38)
#define   WURAOKAI_BIN                            (void *)(resource_root + 0x01021df8)
#define   XINHAOGUAN_BIN                          (void *)(resource_root + 0x01033db8)
#define   XINHAOKAI_BIN                           (void *)(resource_root + 0x01045d78)
#define   ZHENDONGGUAN_BIN                        (void *)(resource_root + 0x01057d38)
#define   ZHENDONGKAI_BIN                         (void *)(resource_root + 0x01069cf8)

#else
#define   ACTIVITY_BIN                            (void *)(0x0c0003f8)
#define   APP_LIST3_BIN                           (void *)(0x0c0a1938)
#define   CURTAIN_RECT_248_385_BIN                (void *)(0x0c0a2c38)
#define   SAT_BIN                                 (void *)(0x0c0d1638)
#define   SUN_BIN                                 (void *)(0x0c0d24b8)
#define   THU_BIN                                 (void *)(0x0c0d3338)
#define   TUE_BIN                                 (void *)(0x0c0d41b8)
#define   WED_BIN                                 (void *)(0x0c0d5038)
#define   WHATSAPP_BIN                            (void *)(0x0c0d5eb8)
#define   ADD_BIN                                 (void *)(0x0c0d7778)
#define   ASSEMBLY_BIN                            (void *)(0x0c0d7ab8)
#define   AUDIO_FREQUENCY_BIN                     (void *)(0x0c0d7b38)
#define   CALLING_0_BIN                           (void *)(0x0c0dcaf8)
#define   CENTIGRADE_BIN                          (void *)(0x0c0de678)
#define   CIRCLE_BIN                              (void *)(0x0c0decb8)
#define   CLOSE_BIN                               (void *)(0x0c0e0578)
#define   DATA_BIN                                (void *)(0x0c0e8e78)
#define   DELETE_BIN                              (void *)(0x0c0e99b8)
#define   DIRECTION_BIN                           (void *)(0x0c0ea878)
#define   FACEBOOK_BIN                            (void *)(0x0c0eb478)
#define   FRI_BIN                                 (void *)(0x0c0ecdf8)
#define   HEART_RATE_BIN                          (void *)(0x0c0edc78)
#define   INSTAGRAM_BIN                           (void *)(0x0c0ee938)
#define   LNE_BIN                                 (void *)(0x0c0f01f8)
#define   MAP_BIN                                 (void *)(0x0c0f1ab8)
#define   MESSAGE_0_BIN                           (void *)(0x0c0f77b8)
#define   MESSAGE_1_BIN                           (void *)(0x0c0f9078)
#define   MESSAGE_2_BIN                           (void *)(0x0c0fa938)
#define   MESSAGE_3_BIN                           (void *)(0x0c0fc1f8)
#define   MESSAGE_APP1L_BIN                       (void *)(0x0c107db8)
#define   MESSAGE_MUS_BIN                         (void *)(0x0c11d8b8)
#define   MESSAGE_WEIXIN_BIN                      (void *)(0x0c129478)
#define   MON_BIN                                 (void *)(0x0c13ed38)
#define   MUSIC_0_BIN                             (void *)(0x0c13fbb8)
#define   MUSIC_1_BIN                             (void *)(0x0c140978)
#define   NOTIFY_BIN                              (void *)(0x0c143238)
#define   RECT_100_127_BIN                        (void *)(0x0c175c78)
#define   RECT_110_108_BIN                        (void *)(0x0c17bff8)
#define   RECT_146_50_BIN                         (void *)(0x0c181cf8)
#define   RECT_160_385_BIN                        (void *)(0x0c185638)
#define   RECT_228_64_BIN                         (void *)(0x0c1a37b8)
#define   RECT_300_126_BIN                        (void *)(0x0c1aa9f8)
#define   RECT_300_127_BIN                        (void *)(0x0c1bd178)
#define   RECT_300_80_BIN                         (void *)(0x0c1cfb38)
#define   RECT_350_348_BIN                        (void *)(0x0c1db6f8)
#define   RING_BIN                                (void *)(0x0c2264b8)
#define   SIRI_BIN                                (void *)(0x0c227178)
#define   SIRI_0_BIN                              (void *)(0x0c22a138)
#define   SIRI_1_BIN                              (void *)(0x0c22d378)
#define   SIRI_10_BIN                             (void *)(0x0c2305b8)
#define   SIRI_11_BIN                             (void *)(0x0c2337f8)
#define   SIRI_12_BIN                             (void *)(0x0c236a38)
#define   SIRI_13_BIN                             (void *)(0x0c239c78)
#define   SIRI_14_BIN                             (void *)(0x0c23ceb8)
#define   SIRI_15_BIN                             (void *)(0x0c2400f8)
#define   SIRI_16_BIN                             (void *)(0x0c243338)
#define   SIRI_17_BIN                             (void *)(0x0c246578)
#define   SIRI_18_BIN                             (void *)(0x0c2497b8)
#define   SIRI_19_BIN                             (void *)(0x0c24c9f8)
#define   SIRI_2_BIN                              (void *)(0x0c24e638)
#define   SIRI_21_BIN                             (void *)(0x0c251878)
#define   SIRI_3_BIN                              (void *)(0x0c2534b8)
#define   SIRI_4_BIN                              (void *)(0x0c2566f8)
#define   SIRI_5_BIN                              (void *)(0x0c259938)
#define   SIRI_6_BIN                              (void *)(0x0c25cb78)
#define   SIRI_7_BIN                              (void *)(0x0c25fdb8)
#define   SIRI_70_70_BIN                          (void *)(0x0c262ff8)
#define   SIRI_8_BIN                              (void *)(0x0c265fb8)
#define   SIRI_80_80_BIN                          (void *)(0x0c2691f8)
#define   SIRI_9_BIN                              (void *)(0x0c26c438)
#define   SKY0_BIN                                (void *)(0x0c26f678)
#define   SKY1_BIN                                (void *)(0x0c270338)
#define   SOUND_BIN                               (void *)(0x0c270ff8)
#define   SOUND_RECORDING_BIN                     (void *)(0x0c275fb8)
#define   SOUND_RECORDING_0_BIN                   (void *)(0x0c276c78)
#define   SPORT_BIN                               (void *)(0x0c278538)
#define   SPORT_0_BIN                             (void *)(0x0c279278)
#define   TEXT_0_BIN                              (void *)(0x0c27ab38)
#define   TEXT_1_BIN                              (void *)(0x0c27bbf8)
#define   TEXT_2_BIN                              (void *)(0x0c27e4b8)
#define   TIME_BIN                                (void *)(0x0c27ef38)
#define   WAVE_BIN                                (void *)(0x0c280d78)
#define   WEIXIN_BIN                              (void *)(0x0c281778)
#define   CLOCKN_BIN                              (void *)(0x0c283038)
#define   HEARTRATE_BIN                           (void *)(0x0c324078)
#define   MUSIC_BIN                               (void *)(0x0c3c50b8)
#define   QUICKCARD_BIN                           (void *)(0x0c4660f8)
#define   WEATHER_BIN                             (void *)(0x0c507138)
#define   ALARM_CLOCK_OFF_BIN                     (void *)(0x0c5a8178)
#define   ALARM_CLOCK_ON_BIN                      (void *)(0x0c5b8478)
#define   DOG100_BIN                              (void *)(0x0c5c88b8)
#define   DOG120_BIN                              (void *)(0x0c5de6b8)
#define   DOG140_BIN                              (void *)(0x0c5f44b8)
#define   DOG160_BIN                              (void *)(0x0c60a2b8)
#define   DOG180_BIN                              (void *)(0x0c6200b8)
#define   DOG20_BIN                               (void *)(0x0c635eb8)
#define   DOG200_BIN                              (void *)(0x0c64bcb8)
#define   DOG220_BIN                              (void *)(0x0c661ab8)
#define   DOG240_BIN                              (void *)(0x0c6778b8)
#define   DOG260_BIN                              (void *)(0x0c68d6b8)
#define   DOG280_BIN                              (void *)(0x0c6a34b8)
#define   DOG300_BIN                              (void *)(0x0c6b92b8)
#define   DOG320_BIN                              (void *)(0x0c6cf0b8)
#define   DOG340_BIN                              (void *)(0x0c6e4eb8)
#define   DOG360_BIN                              (void *)(0x0c6facb8)
#define   DOG40_BIN                               (void *)(0x0c710ab8)
#define   DOG60_BIN                               (void *)(0x0c7268b8)
#define   DOG80_BIN                               (void *)(0x0c73c6b8)
#define   BEIJIN_BIN                              (void *)(0x0c7524b8)
#define   BRIGHT_OFF_BIN                          (void *)(0x0c764478)
#define   BRIGHT_ON_BIN                           (void *)(0x0c774778)
#define   CALL_OFF_BIN                            (void *)(0x0c784a78)
#define   CALL_ON_BIN                             (void *)(0x0c794d78)
#define   CARD_HEALTH_BIN                         (void *)(0x0c7a50b8)
#define   CARD_MORE_BIN                           (void *)(0x0c7ce3b8)
#define   CARD_MUSIC_BIN                          (void *)(0x0c7f76b8)
#define   CARD_MUSIC1_BIN                         (void *)(0x0c8209b8)
#define   CARD_WEATHER1_BIN                       (void *)(0x0c849cb8)
#define   DIANHUAGUAN_BIN                         (void *)(0x0c872fb8)
#define   DIANHUAKAI_BIN                          (void *)(0x0c884f78)
#define   FLASHLIGHT_OFF_BIN                      (void *)(0x0c896f38)
#define   FLASHLIGHT_ON_BIN                       (void *)(0x0c8a7238)
#define   GBK_32_32_DOT_BIN                       (void *)(0x0c8b7578)
#define   GBK_UNICODE_TABLE_BIN                   (void *)(0x0cbd17b8)
#define   ARGB8565_STEP_DAT_BIN                   (void *)(0x0cbf1838)
#define   AVATAR_PIC_BIN                          (void *)(0x0cbf1a78)
#define   LVGL_BIN                                (void *)(0x0cc03078)
#define   PULL_UP_BATTERY_LEVEL_BG_BIN            (void *)(0x0cc1a3f8)
#define   PULL_UP_BATTERY_LEVEL_CHARGE_BIN        (void *)(0x0cc33438)
#define   PULL_UP_BATTERY_LEVEL_NUM_BIN           (void *)(0x0cc33878)
#define   PULL_UP_BATTERY_LEVEL_PROGRESS_BIN      (void *)(0x0cc3aaf8)
#define   PULL_UP_CLOCK_BG_BIN                    (void *)(0x0cc8f338)
#define   PULL_UP_CLOCK_CIRCLE_BIN                (void *)(0x0cc926f8)
#define   PULL_UP_CLOCK_DATE_NUMBER_BIN           (void *)(0x0cc928b8)
#define   PULL_UP_CLOCK_HOUR_BIN                  (void *)(0x0cc97b78)
#define   PULL_UP_CLOCK_MINUTE_BIN                (void *)(0x0cc98178)
#define   PULL_UP_CLOCK_SECOND_BIN                (void *)(0x0cc98a78)
#define   PULL_UP_CLOCK_WEEK_CH_BIN               (void *)(0x0cc98d78)
#define   PULL_UP_CLOCK_WEEK_EN_BIN               (void *)(0x0cca6878)
#define   PULL_UP_COMPASS_BG_BIN                  (void *)(0x0ccb43b8)
#define   PULL_UP_COMPASS_DIRECTION_ARROW_BIN     (void *)(0x0ccb5278)
#define   PULL_UP_COMPASS_NUM_BIN                 (void *)(0x0ccba3b8)
#define   PULL_UP_COMPASS_UNIT_CH_BIN             (void *)(0x0ccc2778)
#define   PULL_UP_COMPASS_UNIT_EN_BIN             (void *)(0x0ccd79b8)
#define   PULL_UP_BG_BIN                          (void *)(0x0ccecbf8)
#define   SHANGLA_TIANQI_BEIJING_BIN              (void *)(0x0cd8dcb8)
#define   SHANGLA_TIANQI_DUOYUN_BIN               (void *)(0x0cda6cf8)
#define   SHANGLA_TIANQI_QINGTIAN_BIN             (void *)(0x0cda9438)
#define   SHANGLA_TIANQI_WEIZHITIANQI_BIN         (void *)(0x0cdabb78)
#define   SHANGLA_TIANQI_XIAXUE_BIN               (void *)(0x0cdae2b8)
#define   SHANGLA_TIANQI_XIAYU_BIN                (void *)(0x0cdb09f8)
#define   JINGYINGUAN_BIN                         (void *)(0x0cdb3138)
#define   JINGYINKAI_BIN                          (void *)(0x0cdc50f8)
#define   JUYUANMOSHIGUAN_BIN                     (void *)(0x0cdd70b8)
#define   JUYUANMOSHIKAI_BIN                      (void *)(0x0cde9078)
#define   LIANGDUGUAN_BIN                         (void *)(0x0cdfb038)
#define   LIANGDUKAI_BIN                          (void *)(0x0ce0cff8)
#define   LINGSHENGGUAN_BIN                       (void *)(0x0ce1efb8)
#define   LINGSHENGKAI_BIN                        (void *)(0x0ce30f78)
#define   MUTE_OFF_BIN                            (void *)(0x0ce42f38)
#define   MUTE_ON_BIN                             (void *)(0x0ce53238)
#define   NAOZHONGGUAN_BIN                        (void *)(0x0ce63538)
#define   NAOZHONGKAI_BIN                         (void *)(0x0ce754f8)
#define   NO_DISTURB_OFF_BIN                      (void *)(0x0ce874b8)
#define   NO_DISTURB_ON_BIN                       (void *)(0x0ce977b8)
#define   RECT_221_269_BIN                        (void *)(0x0cea7ab8)
#define   RING_OFF_BIN                            (void *)(0x0cee1bb8)
#define   RING_ON_BIN                             (void *)(0x0cef1eb8)
#define   SET_OFF_BIN                             (void *)(0x0cf021b8)
#define   SET_ON_BIN                              (void *)(0x0cf124b8)
#define   SHEZHIGUAN_BIN                          (void *)(0x0cf227b8)
#define   SHEZHIKAI_BIN                           (void *)(0x0cf34778)
#define   SHIZHONGGUAN_BIN                        (void *)(0x0cf46738)
#define   SHIZHONGKAI_BIN                         (void *)(0x0cf586f8)
#define   SHOUDIANTONGGUAN_BIN                    (void *)(0x0cf6a6b8)
#define   SHOUDIANTONGKAI_BIN                     (void *)(0x0cf7c678)
#define   SIGNAL_OFF_BIN                          (void *)(0x0cf8e638)
#define   SIGNAL_ON_BIN                           (void *)(0x0cf9e938)
#define   THEATRE_OFF_BIN                         (void *)(0x0cfaec38)
#define   THEATRE_ON_BIN                          (void *)(0x0cfbef38)
#define   VIBRATE_OFF_BIN                         (void *)(0x0cfcf238)
#define   VIBRATE_ON_BIN                          (void *)(0x0cfdf538)
#define   WATCH_OFF_BIN                           (void *)(0x0cfef838)
#define   WATCH_ON_BIN                            (void *)(0x0cfffb38)
#define   WURAOGUAN_BIN                           (void *)(0x0d00fe38)
#define   WURAOKAI_BIN                            (void *)(0x0d021df8)
#define   XINHAOGUAN_BIN                          (void *)(0x0d033db8)
#define   XINHAOKAI_BIN                           (void *)(0x0d045d78)
#define   ZHENDONGGUAN_BIN                        (void *)(0x0d057d38)
#define   ZHENDONGKAI_BIN                         (void *)(0x0d069cf8)

#endif
