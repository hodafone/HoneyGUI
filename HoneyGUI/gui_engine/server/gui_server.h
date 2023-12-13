/*
 * File      : gui_server.h
 */
#ifndef __GUI_SERVER_H__
#define __GUI_SERVER_H__


#include <guidef.h>
#include <gui_app.h>
#include <gui_obj.h>
#ifdef __cplusplus
extern "C" {
#endif
#define GUI_SERVER_THREAD_NAME "gui_s"
typedef void (* touch_sync_cb)(void);
int rtgui_server_init(void);
void gui_server_suspend(void);
void gui_server_resume(void);
bool gui_server_exit_dlps(void);
void gui_debug_sethook(void (*hook)(void));

void js_run_file_on_server(const char *file, gui_app_t *app);

#ifdef __cplusplus
}
#endif

#endif
