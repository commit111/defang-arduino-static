// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: indicator_app

#include "../ui.h"

void ui_demoScreen10_screen_init(void)
{
ui_demoScreen10 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_demoScreen10, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_demoScreen10, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_demoScreen10, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_yourName = lv_label_create(ui_demoScreen10);
lv_obj_set_width( ui_yourName, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_yourName, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_yourName, 9 );
lv_obj_set_y( ui_yourName, -105 );
lv_obj_set_align( ui_yourName, LV_ALIGN_CENTER );
lv_label_set_text(ui_yourName,"Y/N");
lv_obj_set_style_text_color(ui_yourName, lv_color_hex(0x0F71BE), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_yourName, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_yourName, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_yourName, &lv_font_montserrat_30, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_heardOf = lv_label_create(ui_demoScreen10);
lv_obj_set_width( ui_heardOf, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_heardOf, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_heardOf, 9 );
lv_obj_set_y( ui_heardOf, -67 );
lv_obj_set_align( ui_heardOf, LV_ALIGN_CENTER );
lv_label_set_text(ui_heardOf,"\nit's called Defang! \nOh? You've heard of it?");
lv_label_set_recolor(ui_heardOf,"true");
lv_obj_set_style_text_color(ui_heardOf, lv_color_hex(0x0F71BE), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_heardOf, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_heardOf, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_heardOf, &lv_font_montserrat_30, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_yesButton2 = lv_btn_create(ui_demoScreen10);
lv_obj_set_width( ui_yesButton2, 100);
lv_obj_set_height( ui_yesButton2, 50);
lv_obj_set_x( ui_yesButton2, -65 );
lv_obj_set_y( ui_yesButton2, 53 );
lv_obj_set_align( ui_yesButton2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_yesButton2, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_yesButton2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_yesButton2, lv_color_hex(0x0F71BE), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_yesButton2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_yesText2 = lv_label_create(ui_yesButton2);
lv_obj_set_width( ui_yesText2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_yesText2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_yesText2, LV_ALIGN_CENTER );
lv_label_set_text(ui_yesText2,"Yes");
lv_obj_set_style_text_font(ui_yesText2, &lv_font_montserrat_24, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button2 = lv_btn_create(ui_demoScreen10);
lv_obj_set_width( ui_Button2, 100);
lv_obj_set_height( ui_Button2, 50);
lv_obj_set_x( ui_Button2, 84 );
lv_obj_set_y( ui_Button2, 53 );
lv_obj_set_align( ui_Button2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0x28A2E9), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_noText2 = lv_label_create(ui_Button2);
lv_obj_set_width( ui_noText2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_noText2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_noText2, LV_ALIGN_CENTER );
lv_label_set_text(ui_noText2,"No");
lv_obj_set_style_text_font(ui_noText2, &lv_font_montserrat_24, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_demoScreen10, ui_event_demoScreen10, LV_EVENT_ALL, NULL);

}
