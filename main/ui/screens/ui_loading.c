// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: indicator_app

#include "../ui.h"

void ui_loading_screen_init(void)
{
ui_loading = lv_obj_create(NULL);
lv_obj_clear_flag( ui_loading, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_logo = lv_img_create(ui_loading);
lv_img_set_src(ui_logo, &ui_img_1452681969);
lv_obj_set_width( ui_logo, LV_SIZE_CONTENT);  /// 507
lv_obj_set_height( ui_logo, LV_SIZE_CONTENT);   /// 503
lv_obj_set_x( ui_logo, -1 );
lv_obj_set_y( ui_logo, 2 );
lv_obj_set_align( ui_logo, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_logo, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_logo, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_loadingButton = lv_btn_create(ui_loading);
lv_obj_set_width( ui_loadingButton, 507);
lv_obj_set_height( ui_loadingButton, 533);
lv_obj_set_x( ui_loadingButton, 1 );
lv_obj_set_y( ui_loadingButton, -8 );
lv_obj_set_align( ui_loadingButton, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_loadingButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_loadingButton, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_loadingButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_loadingButton, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_loadingButton, ui_event_loadingButton, LV_EVENT_ALL, NULL);

}
