// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: indicator_app

#include "../ui.h"

void ui_demoScreen6_screen_init(void)
{
ui_demoScreen6 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_demoScreen6, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_demoScreen6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_demoScreen6, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_bar75 = lv_bar_create(ui_demoScreen6);
lv_bar_set_value(ui_bar75,75,LV_ANIM_OFF);
lv_bar_set_start_value(ui_bar75, 0, LV_ANIM_OFF);
lv_obj_set_width( ui_bar75, 275);
lv_obj_set_height( ui_bar75, 20);
lv_obj_set_x( ui_bar75, 9 );
lv_obj_set_y( ui_bar75, -12 );
lv_obj_set_align( ui_bar75, LV_ALIGN_CENTER );

lv_obj_set_style_bg_color(ui_bar75, lv_color_hex(0x28A2E9), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_bar75, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_demoScreen6, ui_event_demoScreen6, LV_EVENT_ALL, NULL);

}