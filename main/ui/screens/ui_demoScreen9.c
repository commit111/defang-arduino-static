// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: indicator_app

#include "../ui.h"

void ui_demoScreen9_screen_init(void)
{
ui_demoScreen9 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_demoScreen9, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_demoScreen9, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_demoScreen9, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_solution = lv_label_create(ui_demoScreen9);
lv_obj_set_width( ui_solution, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_solution, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_solution, -5 );
lv_obj_set_y( ui_solution, -55 );
lv_obj_set_align( ui_solution, LV_ALIGN_CENTER );
lv_label_set_text(ui_solution,"Well, do I have a solution\nfor you... ");
lv_obj_set_style_text_color(ui_solution, lv_color_hex(0x0F71BE), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_solution, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_solution, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_solution, &lv_font_montserrat_30, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_interestedButton = lv_btn_create(ui_demoScreen9);
lv_obj_set_width( ui_interestedButton, 246);
lv_obj_set_height( ui_interestedButton, 50);
lv_obj_set_x( ui_interestedButton, 2 );
lv_obj_set_y( ui_interestedButton, 53 );
lv_obj_set_align( ui_interestedButton, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_interestedButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_interestedButton, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_interestedButton, lv_color_hex(0x28A2E9), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_interestedButton, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_showMeAlready = lv_label_create(ui_interestedButton);
lv_obj_set_width( ui_showMeAlready, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_showMeAlready, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_showMeAlready, LV_ALIGN_CENTER );
lv_label_set_text(ui_showMeAlready,"Show me already");
lv_obj_set_style_text_font(ui_showMeAlready, &lv_font_montserrat_24, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_interestedButton, ui_event_interestedButton, LV_EVENT_ALL, NULL);

}