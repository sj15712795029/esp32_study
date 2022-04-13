#include "lvgl_widgets_test.h"
#include "lvgl/lvgl.h"
#include <stdio.h>

void lvgl_attributes_position_test(void);
void lvgl_attributes_size_test(void);
void lvgl_attributes_drag_test(void);
void lvgl_attributes_size_test(void);
void lvgl_attributes_click_test(void);
void lvgl_attributes_align_test(void);
void lvgl_event_test(void);
void lvgl_style_bg_properties_test(void);
void lvgl_style_border_properties_test(void);
void lvgl_style_outline_properties_test(void);
void lvgl_style_shadow_properties_test(void);
void lvgl_style_patten_properties_test(void);
void lvgl_style_value_properties_test(void);
void lvgl_style_text_properties_test(void);
void lvgl_style_line_properties_test(void);
void lvgl_style_image_properties_test(void);
void lvgl_style_transition_properties_test(void);
void lvgl_style_scale_properties_test(void);
void lvgl_basic_obj_test(void);
void lvgl_arc_test1(void);
void lvgl_arc_test2(void);
void lvgl_arc_angle_test(void);
void lvgl_arc_rotation_test(void);
void lvgl_arc_range_value_test(void);
void lvgl_arc_event_test(void);
void lvgl_bar_test(void);
void lvgl_bar_style_test(void);
void lvgl_bar_rang_value_test(void);
void lvgl_bar_mode_test(void);
void lvgl_button_test1(void);
void lvgl_button2_test2(void);
void lvgl_button_checkable_test(void);
void lvgl_button_style_test(void);
void lvgl_button_event_test(void);
void lvgl_button_matrix_test(void);
void lvgl_button_matrix_text_test(void);
void lvgl_button_matrix_control_test(void);
void lvgl_button_matrix_one_check_test(void);
void lvgl_button_matrix_event_test(void);
void lvgl_calendar_test(void);
void lvgl_calendar_current_data_test(void);
void lvgl_calendar_show_data_test(void);
void lvgl_calendar_highlight_data_test(void);
void lvgl_calendar_name_day_test(void);
void lvgl_calendar_name_month_test(void);
void lvgl_calendar_event_test(void);
void lvgl_canvas_test1(void);
void lvgl_canvas_test2(void);
void lvgl_check_box_test(void);
void lvgl_check_box_part_test(void);
void lvgl_check_box_text_test(void);
void lvgl_check_box_check_test(void);
void lvgl_check_box_disable_test(void);
void lvgl_chart_test(void);
void lvgl_chart_test1(void);
void lvgl_chart_test2(void);
void lvgl_chart_style_test(void);
void lvgl_chart_ovwrite_startp_test(void);
void lvgl_chart_ex_array_test(void);
void lvgl_chart_point_test(void);
void lvgl_chart_ver_range_test(void);
void lvgl_chart_division_lines_test(void);
void lvgl_chart_tick_label_test(void);
void lvgl_contain_test(void);
void lvgl_contain_layout_centor_test(void);
void lvgl_contain_layout_coloum_test(void);
void lvgl_contain_layout_raw_test(void);
void lvgl_contain_layout_pretty_test(void);
void lvgl_contain_fit_test(void);
void lvgl_color_picker_test(void);
void lvgl_cpicker_type_test(void);
void lvgl_cpicker_set_color_test(void);
void lvgl_cpicker_knob_test(void);
void lvgl_cpicker_event_test(void);
void lvgl_drop_list_test1(void);
void lvgl_drop_list_test2(void);
void lvgl_dlist_set_option_test(void);
void lvgl_dlist_direct_test(void);
void lvgl_dlist_symbol_test(void);
void lvgl_dlist_max_height_test(void);
void lvgl_dlist_ani_test(void);
void lvgl_guage_test1(void);
void lvgl_guage_test2(void);
void lvgl_guage_value_needle_test(void);
void lvgl_guage_scale_test(void);
void lvgl_guage_range_test(void);
void lvgl_guage_needle_image_test(void);
void lvgl_guage_critical_test(void);
void lvgl_image1_test1(void);
void lvgl_image2_test2(void);
void lvgl_image_source_test(void);
void lvgl_image_button_test(void);
void lvgl_image_button_source_test(void);
void lvgl_keyboard_test(void);
void lvgl_keyboard_mode_test(void);
void lvgl_label_test1(void);
void lvgl_label_test2(void);
void lvgl_label_test3(void);
void lvgl_label_text_test(void);
void lvgl_label_line_test(void);
void lvgl_label_lm_test(void);
void lvgl_led_test(void);
void lvgl_led_test1(void);
void lvgl_line_test(void);
void lvgl_line_set_point_test(void);
void lvgl_line_auto_size_test(void);
void lvgl_line_inverty_test(void);
void lvgl_list_test(void);
void lvgl_list_add_button_test(void);
void lvgl_list_navig_test(void);
void lvgl_list_layout_test(void);
void lvgl_line_meter_test(void);
void lvgl_line_meter_set_value_test(void);
void lvgl_line_meter_range_angle_test(void);
void lvgl_line_meter_angle_offset_test(void);
void lvgl_line_meter_mirror_test(void);
void lvgl_msgbox_test1(void);
void lvgl_msgbox_test2(void);
void lvgl_msgbox_set_text_test(void);
void lvgl_msgbox_add_button_test(void);
void lvgl_msgbox_auto_close_test(void);
void lvgl_msgbox_event_test(void);
void lvgl_obj_mask_test1(void);
void lvgl_obj_mask_test2(void);
void lvgl_page_test(void);
void lvgl_roller_test(void);
void lvgl_roller_set_option_test(void);
void lvgl_roller_visible_raw_test(void);
void lvgl_roller_event_test(void);
void lvgl_slider_test1(void);
void lvgl_slider_test2(void);
void lvgl_slider_value_range_test(void);
void lvgl_slider_knob_only_test(void);
void lvgl_spinbox_test(void);
void lvgl_spinbox_set_format_test(void);
void lvgl_spinner_test(void);
void lvgl_spinner_arc_length_test(void);
void lvgl_spinner_spin_speed_test(void);
void lvgl_spinner_spin_type_test(void);
void lvgl_spinner_spin_dir_test(void);
void lvgl_switch_test(void);
void lvgl_switch_ani_test(void);
void lvgl_switch_event_test(void);
void lvgl_table_test(void);
void lvgl_table_row_col_test(void);
void lvgl_table_value_test(void);
void lvgl_table_cell_type_test(void);
void lvgl_tabview_test(void);
void lvgl_text_area_test1(void);
void lvgl_text_area_test2(void);
void lvgl_text_area_test3(void);
void lvgl_title_view_test(void);
void lvgl_window_test(void);

void lvgl_widgets_test()
{
    //lvgl_attributes_size_test();
    //lvgl_attributes_position_test();
    //lvgl_attributes_drag_test();
    //lvgl_attributes_click_test();
    //lvgl_attributes_align_test();
    //lvgl_event_test();
    //lvgl_style_bg_properties_test();
    //lvgl_style_border_properties_test();
    //lvgl_style_outline_properties_test();
    //lvgl_style_shadow_properties_test();
    //lvgl_style_patten_properties_test();
    //lvgl_style_value_properties_test();
    //lvgl_style_text_properties_test();
    //lvgl_style_line_properties_test();
    //lvgl_style_image_properties_test();
    //lvgl_style_transition_properties_test();
    //lvgl_style_scale_properties_test();
    //lvgl_basic_obj_test();
    //lvgl_arc_test1();
    //lvgl_arc_test2();
    //lvgl_arc_angle_test();
    //lvgl_arc_rotation_test();
    //lvgl_arc_range_value_test();
    //lvgl_arc_event_test();
    //lvgl_bar_test();
    //lvgl_bar_style_test();
    //lvgl_bar_rang_value_test();
    //lvgl_bar_mode_test();
    lvgl_button_test1();
    //lvgl_button2_test2();
    //lvgl_button_matrix_test();
    //lvgl_button_checkable_test();
    //lvgl_button_style_test();
    //lvgl_button_event_test();
    //lvgl_button_matrix_text_test();
    //lvgl_button_matrix_control_test();
    //lvgl_button_matrix_one_check_test();
    //lvgl_button_matrix_event_test();
    //lvgl_calendar_test();
    //lvgl_calendar_current_data_test();
    //lvgl_calendar_highlight_data_test();
    //lvgl_calendar_name_day_test();
    //lvgl_calendar_name_month_test();
    //lvgl_calendar_event_test();
    //lvgl_canvas_test1();
    //lvgl_canvas_test2();
    //lvgl_check_box_test();
    //lvgl_check_box_part_test();
    //lvgl_check_box_text_test();
    //lvgl_check_box_check_test();
    //lvgl_check_box_disable_test();
    //lvgl_chart_test1();
    //lvgl_chart_test2();
    //lvgl_chart_style_test();
    //lvgl_chart_test();
    //lvgl_chart_ovwrite_startp_test();
    //lvgl_chart_ex_array_test();
    //lvgl_chart_point_test();
    //lvgl_chart_ver_range_test();
    //lvgl_chart_division_lines_test();
    //lvgl_chart_tick_label_test();
    //lvgl_contain_test();
    //lvgl_contain_layout_centor_test();
    //lvgl_contain_layout_coloum_test();
    //lvgl_contain_layout_raw_test();
    //lvgl_contain_layout_pretty_test();
    //lvgl_contain_fit_test();
    //lvgl_contain_fit_test();
    //lvgl_cpicker_type_test();
    //lvgl_cpicker_set_color_test();
    //lvgl_cpicker_knob_test();
    //lvgl_cpicker_event_test();
    //lvgl_color_picker_test();
    //lvgl_drop_list_test1();
    //lvgl_drop_list_test2();
    //lvgl_dlist_set_option_test();
    //lvgl_dlist_direct_test();
    //lvgl_dlist_symbol_test();
    //lvgl_dlist_max_height_test();
    //lvgl_dlist_ani_test();
    //lvgl_guage_test1();
    //lvgl_guage_test2();
    //lvgl_guage_value_needle_test();
    //lvgl_guage_scale_test();
    //lvgl_guage_range_test();
    //lvgl_guage_needle_image_test();
    //lvgl_guage_critical_test();
    //lvgl_image_source_test();
    //lvgl_image_button_source_test();
    //lvgl_image1_test1();
    //lvgl_image2_test2();
    //lvgl_image_button_test();
    //lvgl_keyboard_test();
    //lvgl_keyboard_mode_test();
    //lvgl_label_test1();
    //lvgl_label_test2();
    //lvgl_label_test3();
    //lvgl_label_text_test();
    //lvgl_label_line_test();
    //lvgl_label_lm_test();
    //lvgl_led_test();
    //lvgl_led_test1();
    //lvgl_line_test();
    //lvgl_line_set_point_test();
    //lvgl_line_auto_size_test();
    //lvgl_line_inverty_test();
    //lvgl_list_test();
    //lvgl_list_add_button_test();
    //lvgl_list_navig_test();
    //lvgl_list_layout_test();
    //lvgl_line_meter_test();
    //lvgl_line_meter_set_value_test();
    //lvgl_line_meter_range_angle_test();
    //lvgl_line_meter_angle_offset_test();
    //lvgl_line_meter_mirror_test();
    //lvgl_msgbox_test1();
    //lvgl_msgbox_test2();
    //lvgl_msgbox_set_text_test();
    //lvgl_msgbox_add_button_test();
    //lvgl_msgbox_auto_close_test();
    //lvgl_msgbox_event_test();
    //lvgl_obj_mask_test1();
    //lvgl_obj_mask_test2();
    //lvgl_page_test();
    //lvgl_roller_test();
    //lvgl_roller_set_option_test();
    //lvgl_roller_visible_raw_test();
    //lvgl_roller_event_test();
    //lvgl_slider_test1();
    //lvgl_slider_test2();
    //lvgl_slider_value_range_test();
    //lvgl_slider_knob_only_test();
    //lvgl_spinbox_test();
    //lvgl_spinbox_set_format_test();
    //lvgl_spinner_test();
    //lvgl_spinner_arc_length_test();
    //lvgl_spinner_spin_speed_test();
    //lvgl_spinner_spin_type_test();
    //lvgl_spinner_spin_dir_test();
    //lvgl_switch_ani_test();
    //lvgl_switch_event_test();
    //lvgl_switch_test();
    //lvgl_table_test();
    //lvgl_table_row_col_test();
    //lvgl_table_value_test();
    //lvgl_table_cell_type_test();
    //lvgl_tabview_test();
    //lvgl_text_area_test1();
    //lvgl_text_area_test2();
    //lvgl_text_area_test3();
    //lvgl_title_view_test();
    //lvgl_window_test();
}


/********************************************************************************************/
void lvgl_attributes_position_test(void)
{
    lv_obj_t* obj1 = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_set_pos(obj1,100, 100);

    lv_obj_t* obj2 = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_set_pos(obj2, 200, 200);


    lv_obj_t* obj3 = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_set_size(obj3, 200, 200);
    lv_obj_set_pos(obj3, 300, 300);

    lv_obj_t* obj4 = lv_obj_create(obj3, NULL);
    lv_obj_set_pos(obj4, 10, 10);

}

/********************************************************************************************/
void lvgl_attributes_size_test(void)
{
    lv_obj_t* obj1 = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_set_pos(obj1, 100, 100);
    lv_obj_set_size(obj1, 100, 100);

    lv_obj_t* obj2 = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_set_pos(obj2, 200, 200);
    lv_obj_set_size(obj2, 200, 200);
}

/********************************************************************************************/
void lvgl_attributes_drag_test(void)
{
    lv_obj_t* obj1 = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_set_size(obj1, 200, 200);
    lv_obj_set_pos(obj1, 100, 100);
    lv_obj_set_drag(obj1,true);

    lv_obj_t* obj2 = lv_obj_create(obj1, NULL);
    lv_obj_set_pos(obj2, 10, 10);
}

/********************************************************************************************/
void lvgl_attributes_click_test(void)
{
    lv_obj_t* obj1 = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_set_size(obj1, 200, 200);
    lv_obj_set_pos(obj1, 100, 100);
    lv_obj_set_click(obj1,true);

    lv_obj_t* obj2 = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_set_size(obj2, 200, 200);
    lv_obj_set_pos(obj2, 300, 300);
    lv_obj_set_click(obj2, false);
}

/********************************************************************************************/
void lvgl_attributes_align_test(void)
{
    lv_obj_t* obj1 = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_set_size(obj1, 1000, 500);
    lv_obj_set_pos(obj1, 10, 20);

    lv_obj_t* obj1_sub1 = lv_obj_create(obj1, NULL);
    lv_obj_align(obj1_sub1, obj1, LV_ALIGN_CENTER, 0, 0);

    lv_obj_t* obj1_sub2 = lv_obj_create(obj1, NULL);
    lv_obj_align(obj1_sub2, obj1, LV_ALIGN_IN_TOP_LEFT, 0, 0);

    lv_obj_t* obj1_sub3 = lv_obj_create(obj1, NULL);
    lv_obj_align(obj1_sub3, obj1, LV_ALIGN_OUT_TOP_RIGHT, 0, lv_obj_get_height(obj1_sub3));

}


/********************************************************************************************/
static void obj_event_handler(lv_obj_t* obj, lv_event_t event)
{
    switch (event)
    {
    case LV_EVENT_PRESSED:
        printf("LV_EVENT_PRESSED\n");
        break;
    case LV_EVENT_PRESSING:
        printf("LV_EVENT_PRESSING\n");
        break;
    case LV_EVENT_PRESS_LOST:
        printf("LV_EVENT_PRESS_LOST\n");
        break;
    case LV_EVENT_SHORT_CLICKED:
        printf("LV_EVENT_SHORT_CLICKED\n");
        break;
    case LV_EVENT_LONG_PRESSED:
        printf("LV_EVENT_LONG_PRESSED\n");
        break;
    case LV_EVENT_LONG_PRESSED_REPEAT:
        printf("LV_EVENT_LONG_PRESSED_REPEAT\n");
        break;
    case LV_EVENT_CLICKED:
        printf("LV_EVENT_CLICKED\n");
        break;
    case LV_EVENT_RELEASED:
        printf("LV_EVENT_RELEASED\n");
        break;
    case LV_EVENT_DRAG_BEGIN:
        printf("LV_EVENT_DRAG_BEGIN\n");
        break;
    case LV_EVENT_DRAG_END:
        printf("LV_EVENT_DRAG_END\n");
        break;
    case LV_EVENT_DRAG_THROW_BEGIN:
        printf("LV_EVENT_DRAG_THROW_BEGIN\n");
        break;
    case LV_EVENT_GESTURE:
        printf("LV_EVENT_GESTURE\n");
        break;
    case LV_EVENT_KEY:
        printf("LV_EVENT_KEY\n");
        break;
    case LV_EVENT_FOCUSED:
        printf("LV_EVENT_FOCUSED\n");
        break;
    case LV_EVENT_DEFOCUSED:
        printf("LV_EVENT_DEFOCUSED\n");
        break;
    case LV_EVENT_LEAVE:
        printf("LV_EVENT_LEAVE\n");
        break;
    case LV_EVENT_VALUE_CHANGED:
        printf("LV_EVENT_VALUE_CHANGED\n");
        break;
    case LV_EVENT_INSERT:
        printf("LV_EVENT_INSERT\n");
        break;
    case LV_EVENT_REFRESH:
        printf("LV_EVENT_REFRESH\n");
        break;

    }

}

void lvgl_event_test(void)
{
    lv_obj_t* obj1 = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_set_drag(obj1,true);
    lv_obj_set_event_cb(obj1, obj_event_handler);
}

/********************************************************************************************/
void lvgl_style_bg_properties_test(void)
{
    static lv_style_t style;
    lv_style_init(&style);
    lv_style_set_radius(&style, LV_STATE_DEFAULT, 5);

    /*Make a gradient*/
    lv_style_set_bg_opa(&style, LV_STATE_DEFAULT, LV_OPA_COVER);
    lv_style_set_bg_color(&style, LV_STATE_DEFAULT, LV_COLOR_RED);
    lv_style_set_bg_grad_color(&style, LV_STATE_DEFAULT, LV_COLOR_BLUE);
    lv_style_set_bg_grad_dir(&style, LV_STATE_DEFAULT, LV_GRAD_DIR_HOR);

    /*Shift the gradient to the bottom*/
    lv_style_set_bg_main_stop(&style, LV_STATE_DEFAULT, 0);
    lv_style_set_bg_grad_stop(&style, LV_STATE_DEFAULT, 255);


    /*Create an object with the new style*/
    lv_obj_t* obj = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_add_style(obj, LV_OBJ_PART_MAIN, &style);
    lv_obj_align(obj, NULL, LV_ALIGN_CENTER, 0, 0);
}

/********************************************************************************************/
void lvgl_style_border_properties_test(void)
{
    static lv_style_t style;
    lv_style_init(&style);

    /*Set a background color and a radius*/
    lv_style_set_radius(&style, LV_STATE_DEFAULT, 20);
    lv_style_set_bg_opa(&style, LV_STATE_DEFAULT, LV_OPA_COVER);
    lv_style_set_bg_color(&style, LV_STATE_DEFAULT, LV_COLOR_SILVER);

    /*Add border to the bottom+right*/
    lv_style_set_border_color(&style, LV_STATE_DEFAULT, LV_COLOR_RED);
    lv_style_set_border_width(&style, LV_STATE_DEFAULT, 5);
    lv_style_set_border_opa(&style, LV_STATE_DEFAULT, LV_OPA_50);
    lv_style_set_border_side(&style, LV_STATE_DEFAULT, LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_RIGHT);

    /*Create an object with the new style*/
    lv_obj_t* obj = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_add_style(obj, LV_OBJ_PART_MAIN, &style);
    lv_obj_align(obj, NULL, LV_ALIGN_CENTER, 0, 0);
}

/********************************************************************************************/
void lvgl_style_outline_properties_test(void)
{
    static lv_style_t style;
    lv_style_init(&style);

    /*Set a background color and a radius*/
    lv_style_set_radius(&style, LV_STATE_DEFAULT, 5);
    lv_style_set_bg_opa(&style, LV_STATE_DEFAULT, LV_OPA_COVER);
    lv_style_set_bg_color(&style, LV_STATE_DEFAULT, LV_COLOR_SILVER);

    /*Add outline*/
    lv_style_set_outline_width(&style, LV_STATE_DEFAULT, 2);
    lv_style_set_outline_color(&style, LV_STATE_DEFAULT, LV_COLOR_RED);
    lv_style_set_outline_pad(&style, LV_STATE_DEFAULT, 8);

    /*Create an object with the new style*/
    lv_obj_t* obj = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_add_style(obj, LV_OBJ_PART_MAIN, &style);
    lv_obj_align(obj, NULL, LV_ALIGN_CENTER, 0, 0);
}

/********************************************************************************************/
void lvgl_style_shadow_properties_test(void)
{
    static lv_style_t style;
    lv_style_init(&style);

    /*Set a background color and a radius*/
    lv_style_set_radius(&style, LV_STATE_DEFAULT, 5);
    lv_style_set_bg_opa(&style, LV_STATE_DEFAULT, LV_OPA_COVER);
    lv_style_set_bg_color(&style, LV_STATE_DEFAULT, LV_COLOR_SILVER);

    /*Add a shadow*/
    lv_style_set_shadow_width(&style, LV_STATE_DEFAULT, 8);
    lv_style_set_shadow_color(&style, LV_STATE_DEFAULT, LV_COLOR_RED);
    lv_style_set_shadow_ofs_x(&style, LV_STATE_DEFAULT, 10);
    lv_style_set_shadow_ofs_y(&style, LV_STATE_DEFAULT, 20);

    /*Create an object with the new style*/
    lv_obj_t* obj = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_add_style(obj, LV_OBJ_PART_MAIN, &style);
    lv_obj_align(obj, NULL, LV_ALIGN_CENTER, 0, 0);
}

/********************************************************************************************/
void lvgl_style_patten_properties_test(void)
{
    static lv_style_t style;
    lv_style_init(&style);

    /*Set a background color and a radius*/
    lv_style_set_radius(&style, LV_STATE_DEFAULT, 5);
    lv_style_set_bg_opa(&style, LV_STATE_DEFAULT, LV_OPA_COVER);
    lv_style_set_bg_color(&style, LV_STATE_DEFAULT, LV_COLOR_SILVER);

    /*Add a repeating pattern*/
    lv_style_set_pattern_image(&style, LV_STATE_DEFAULT, LV_SYMBOL_BLUETOOTH);
    lv_style_set_pattern_recolor(&style, LV_STATE_DEFAULT, LV_COLOR_BLUE);
    lv_style_set_pattern_opa(&style, LV_STATE_DEFAULT, LV_OPA_50);
    lv_style_set_pattern_repeat(&style, LV_STATE_DEFAULT, true);

    /*Create an object with the new style*/
    lv_obj_t* obj = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_set_size(obj, 200, 200);
    lv_obj_add_style(obj, LV_OBJ_PART_MAIN, &style);
    lv_obj_align(obj, NULL, LV_ALIGN_CENTER, 0, 0);
}

/********************************************************************************************/
void lvgl_style_value_properties_test(void)
{
    static lv_style_t style;
    lv_style_init(&style);

    /*Set a background color and a radius*/
    lv_style_set_radius(&style, LV_STATE_DEFAULT, 5);
    lv_style_set_bg_opa(&style, LV_STATE_DEFAULT, LV_OPA_COVER);
    lv_style_set_bg_color(&style, LV_STATE_DEFAULT, LV_COLOR_SILVER);

    /*Add a value text properties*/
    lv_style_set_value_color(&style, LV_STATE_DEFAULT, LV_COLOR_RED);
    lv_style_set_value_align(&style, LV_STATE_DEFAULT, LV_ALIGN_IN_BOTTOM_RIGHT);
    lv_style_set_value_ofs_x(&style, LV_STATE_DEFAULT, 10);
    lv_style_set_value_ofs_y(&style, LV_STATE_DEFAULT, 30);

    /*Create an object with the new style*/
    lv_obj_t* obj = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_add_style(obj, LV_OBJ_PART_MAIN, &style);
    lv_obj_align(obj, NULL, LV_ALIGN_CENTER, 0, 0);

    /*Add a value text to the local style. This way every object can have different text*/
    lv_obj_set_style_local_value_str(obj, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, "wireless link");
}

/********************************************************************************************/
void lvgl_style_text_properties_test(void)
{
    static lv_style_t style;
    lv_style_init(&style);

    lv_style_set_radius(&style, LV_STATE_DEFAULT, 5);
    lv_style_set_bg_opa(&style, LV_STATE_DEFAULT, LV_OPA_COVER);
    lv_style_set_bg_color(&style, LV_STATE_DEFAULT, LV_COLOR_SILVER);
    lv_style_set_border_width(&style, LV_STATE_DEFAULT, 2);
    lv_style_set_border_color(&style, LV_STATE_DEFAULT, LV_COLOR_BLUE);

    lv_style_set_pad_top(&style, LV_STATE_DEFAULT, 10);
    lv_style_set_pad_bottom(&style, LV_STATE_DEFAULT, 10);
    lv_style_set_pad_left(&style, LV_STATE_DEFAULT, 10);
    lv_style_set_pad_right(&style, LV_STATE_DEFAULT, 10);

    lv_style_set_text_color(&style, LV_STATE_DEFAULT, LV_COLOR_RED);
    lv_style_set_text_letter_space(&style, LV_STATE_DEFAULT, 5);
    lv_style_set_text_line_space(&style, LV_STATE_DEFAULT, 20);
    lv_style_set_text_decor(&style, LV_STATE_DEFAULT, LV_TEXT_DECOR_UNDERLINE);

    /*Create an object with the new style*/
    lv_obj_t* obj = lv_label_create(lv_scr_act(), NULL);
    lv_obj_add_style(obj, LV_LABEL_PART_MAIN, &style);
    lv_label_set_text(obj, "wireless link");
    lv_obj_align(obj, NULL, LV_ALIGN_CENTER, 0, 0);
}

/********************************************************************************************/
void lvgl_style_line_properties_test(void)
{
    static lv_style_t style;
    lv_style_init(&style);

    lv_style_set_line_color(&style, LV_STATE_DEFAULT, LV_COLOR_RED);
    lv_style_set_line_width(&style, LV_STATE_DEFAULT, 10);
    lv_style_set_line_rounded(&style, LV_STATE_DEFAULT, true);
#if LV_USE_LINE
    /*Create an object with the new style*/
    lv_obj_t* obj = lv_line_create(lv_scr_act(), NULL);
    lv_obj_add_style(obj, LV_LINE_PART_MAIN, &style);

    static lv_point_t p[] = { {0, 0}, {30, 30}, {60, 0} };
    lv_line_set_points(obj, p, 3);

    lv_obj_align(obj, NULL, LV_ALIGN_CENTER, 0, 0);
#endif
}

void lvgl_style_image_properties_test(void)
{
    static lv_style_t style;
    lv_style_init(&style);

    /*Set a background color and a radius*/
    lv_style_set_radius(&style, LV_STATE_DEFAULT, 5);
    lv_style_set_bg_opa(&style, LV_STATE_DEFAULT, LV_OPA_COVER);
    lv_style_set_bg_color(&style, LV_STATE_DEFAULT, LV_COLOR_SILVER);
    lv_style_set_border_width(&style, LV_STATE_DEFAULT, 2);
    lv_style_set_border_color(&style, LV_STATE_DEFAULT, LV_COLOR_BLUE);

    lv_style_set_pad_top(&style, LV_STATE_DEFAULT, 10);
    lv_style_set_pad_bottom(&style, LV_STATE_DEFAULT, 10);
    lv_style_set_pad_left(&style, LV_STATE_DEFAULT, 10);
    lv_style_set_pad_right(&style, LV_STATE_DEFAULT, 10);

    lv_style_set_image_recolor(&style, LV_STATE_DEFAULT, LV_COLOR_RED);
    lv_style_set_image_recolor_opa(&style, LV_STATE_DEFAULT, LV_OPA_50);

#if LV_USE_IMG
    /*Create an object with the new style*/
    lv_obj_t* obj = lv_img_create(lv_scr_act(), NULL);
    lv_obj_add_style(obj, LV_IMG_PART_MAIN, &style);
    LV_IMG_DECLARE(img_cogwheel_argb);
    lv_img_set_src(obj, &img_cogwheel_argb);
    lv_obj_align(obj, NULL, LV_ALIGN_CENTER, 0, 0);
#endif
}

/********************************************************************************************/
void lvgl_style_transition_properties_test(void)
{
    static lv_style_t style;
    lv_style_init(&style);

    /*Set a background color and a radius*/
    lv_style_set_radius(&style, LV_STATE_DEFAULT, 5);
    lv_style_set_bg_opa(&style, LV_STATE_DEFAULT, LV_OPA_COVER);
    lv_style_set_bg_color(&style, LV_STATE_DEFAULT, LV_COLOR_SILVER);

    /*Set different background color in pressed state*/
    lv_style_set_bg_color(&style, LV_STATE_PRESSED, LV_COLOR_RED);

    /*Set different transition time in default and pressed state
     *fast press, slower revert to default*/
    lv_style_set_transition_time(&style, LV_STATE_DEFAULT, 500);
    lv_style_set_transition_time(&style, LV_STATE_PRESSED, 200);

    /*Small delay to make transition more visible*/
    lv_style_set_transition_delay(&style, LV_STATE_DEFAULT, 100);

    /*Add `bg_color` to transitioned properties*/
    lv_style_set_transition_prop_1(&style, LV_STATE_DEFAULT, LV_STYLE_BG_COLOR);

    /*Create an object with the new style*/
    lv_obj_t* obj = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_add_style(obj, LV_OBJ_PART_MAIN, &style);
    lv_obj_align(obj, NULL, LV_ALIGN_CENTER, 0, 0);
}

/********************************************************************************************/
void lvgl_style_scale_properties_test(void)
{
    static lv_style_t style;
    lv_style_init(&style);

    /*Set a background color and a radius*/
    lv_style_set_radius(&style, LV_STATE_DEFAULT, 5);
    lv_style_set_bg_opa(&style, LV_STATE_DEFAULT, LV_OPA_COVER);
    lv_style_set_bg_color(&style, LV_STATE_DEFAULT, LV_COLOR_SILVER);

    /*Set some paddings*/
    lv_style_set_pad_inner(&style, LV_STATE_DEFAULT, 20);
    lv_style_set_pad_top(&style, LV_STATE_DEFAULT, 20);
    lv_style_set_pad_left(&style, LV_STATE_DEFAULT, 5);
    lv_style_set_pad_right(&style, LV_STATE_DEFAULT, 5);

    lv_style_set_scale_end_color(&style, LV_STATE_DEFAULT, LV_COLOR_RED);
    lv_style_set_line_color(&style, LV_STATE_DEFAULT, LV_COLOR_WHITE);
    lv_style_set_scale_grad_color(&style, LV_STATE_DEFAULT, LV_COLOR_BLUE);
    lv_style_set_line_width(&style, LV_STATE_DEFAULT, 2);
    lv_style_set_scale_end_line_width(&style, LV_STATE_DEFAULT, 4);
    lv_style_set_scale_end_border_width(&style, LV_STATE_DEFAULT, 4);

    /*Gauge has a needle but for simplicity its style is not initialized here*/
#if LV_USE_GAUGE
    /*Create an object with the new style*/
    lv_obj_t* obj = lv_gauge_create(lv_scr_act(), NULL);
    lv_obj_add_style(obj, LV_GAUGE_PART_MAIN, &style);
    lv_obj_align(obj, NULL, LV_ALIGN_CENTER, 0, 0);
#endif
}

/********************************************************************************************/
void lvgl_basic_obj_test(void)
{
    lv_obj_t* obj1;
    obj1 = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_set_size(obj1, 100, 50);
    lv_obj_align(obj1, NULL, LV_ALIGN_CENTER, -60, -30);

    /*Copy the previous object and enable drag*/
    lv_obj_t* obj2;
    obj2 = lv_obj_create(lv_scr_act(), obj1);
    lv_obj_align(obj2, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_drag(obj2, true);

    static lv_style_t style_shadow;
    lv_style_init(&style_shadow);
    lv_style_set_shadow_width(&style_shadow, LV_STATE_DEFAULT, 10);
    lv_style_set_shadow_spread(&style_shadow, LV_STATE_DEFAULT, 5);
    lv_style_set_shadow_color(&style_shadow, LV_STATE_DEFAULT, LV_COLOR_BLUE);

    /*Copy the previous object (drag is already enabled)*/
    lv_obj_t* obj3;
    obj3 = lv_obj_create(lv_scr_act(), obj2);
    lv_obj_add_style(obj3, LV_OBJ_PART_MAIN, &style_shadow);
    lv_obj_align(obj3, NULL, LV_ALIGN_CENTER, 60, 30);
}



/********************************************************************************************/
void lvgl_arc_test1(void)
{
    /*Create an Arc*/
    lv_obj_t* arc = lv_arc_create(lv_scr_act(), NULL);
    lv_arc_set_end_angle(arc, 300); /* 这个是从3点方向顺时针算起的角度，所以6点就是90度，12点就是270度 */
    lv_obj_set_size(arc, 300, 300);
    lv_obj_align(arc, NULL, LV_ALIGN_CENTER, 0, 0);
}



/********************************************************************************************/
/**
 * An `lv_task` to call periodically to set the angles of the arc
 * @param t
 */
static void arc_loader(lv_task_t* t)
{
    static int16_t a = 270;

    a += 5;

    lv_arc_set_end_angle(t->user_data, a);

    if (a >= 270 + 360) {
        lv_task_del(t);
        return;
    }
}

/**
 * Create an arc which acts as a loader.
 */
void lvgl_arc_test2(void)
{
    /*Create an Arc*/
    lv_obj_t* arc = lv_arc_create(lv_scr_act(), NULL);
    lv_arc_set_bg_angles(arc, 0, 360);
    lv_arc_set_angles(arc, 270, 270);
    lv_obj_set_size(arc, 300, 300);
    lv_obj_align(arc, NULL, LV_ALIGN_CENTER, 0, 0);

    /* Create an `lv_task` to update the arc.
     * Store the `arc` in the user data*/
    lv_task_create(arc_loader, 20, LV_TASK_PRIO_LOWEST, arc);
}

/********************************************************************************************/
void lvgl_arc_angle_test(void)
{
    /*Create an Arc*/
    lv_obj_t* arc = lv_arc_create(lv_scr_act(), NULL);
    lv_arc_set_bg_angles(arc,180,360);
    lv_arc_set_angles(arc, 180, 270);
    lv_obj_set_size(arc, 200, 200);
    lv_obj_align(arc, NULL, LV_ALIGN_CENTER, 0, 0);
}

/********************************************************************************************/
void lvgl_arc_rotation_test(void)
{
    /*Create an Arc*/
    lv_obj_t* arc = lv_arc_create(lv_scr_act(), NULL);
    lv_arc_set_bg_angles(arc, 180, 360);
    lv_arc_set_angles(arc, 180, 270);
    lv_arc_set_rotation(arc, 180);
    lv_obj_set_size(arc, 200, 200);
    lv_obj_align(arc, NULL, LV_ALIGN_CENTER, 0, 0);
}

/********************************************************************************************/
void lvgl_arc_range_value_test(void)
{
    /*Create an Arc*/
    lv_obj_t* arc = lv_arc_create(lv_scr_act(), NULL);
    lv_arc_set_range(arc, 0, 100);
    lv_arc_set_value(arc, 90);
    lv_obj_set_size(arc, 200, 200);
    lv_obj_align(arc, NULL, LV_ALIGN_CENTER, 0, 0);
}

/********************************************************************************************/
static void arc_event_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_VALUE_CHANGED)
    {
        uint16_t angle = lv_arc_get_angle_end(obj);
        printf("arc_event_handler current %d\n", angle);
    }
}

void lvgl_arc_event_test(void)
{
    /*Create an Arc*/
    lv_obj_t* arc = lv_arc_create(lv_scr_act(), NULL);
    lv_arc_set_range(arc, 0, 100);
    lv_arc_set_value(arc, 0);
    lv_obj_set_size(arc, 200, 200);
    lv_obj_align(arc, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_arc_set_adjustable(arc, true);
    lv_obj_set_event_cb(arc, arc_event_handler);
}

/********************************************************************************************/
void lvgl_bar_test(void)
{
    lv_obj_t* bar1 = lv_bar_create(lv_scr_act(), NULL);
    lv_obj_set_size(bar1, 200, 20);
    lv_obj_align(bar1, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_bar_set_anim_time(bar1, 10000); /* 填充满的时间 */
    lv_bar_set_value(bar1, 100, LV_ANIM_ON);
}

/********************************************************************************************/
void lvgl_bar_style_test(void)
{
    lv_obj_t* bar1 = lv_bar_create(lv_scr_act(), NULL);
    lv_obj_set_size(bar1, 200, 20);
    lv_obj_align(bar1, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_bar_set_value(bar1, 50, LV_ANIM_OFF);
    lv_obj_set_style_local_bg_color(bar1, LV_BAR_PART_BG, LV_STATE_DEFAULT, LV_COLOR_BLACK);
    lv_obj_set_style_local_bg_color(bar1, LV_BAR_PART_INDIC, LV_STATE_DEFAULT, LV_COLOR_ORANGE);
}

/********************************************************************************************/
void lvgl_bar_rang_value_test(void)
{
    lv_obj_t* bar1 = lv_bar_create(lv_scr_act(), NULL);
    lv_obj_set_size(bar1, 200, 20);
    lv_bar_set_range(bar1, 0, 10000);
    lv_obj_set_pos(bar1, 50, 300);
    lv_bar_set_value(bar1, 9000, LV_ANIM_OFF);


    lv_obj_t* bar2 = lv_bar_create(lv_scr_act(), NULL);
    lv_obj_set_size(bar2, 200, 20);
    lv_bar_set_range(bar2, 0, 10000);
    lv_obj_set_pos(bar2, 300, 300);
    lv_bar_set_anim_time(bar2, 5000); /* 填充满的时间 */
    lv_bar_set_value(bar2, 9000, LV_ANIM_ON);
    
}

/********************************************************************************************/
void lvgl_bar_mode_test(void)
{
    lv_obj_t* bar1 = lv_bar_create(lv_scr_act(), NULL);
    lv_obj_set_size(bar1, 200, 20);
    lv_bar_set_range(bar1, 0, 10000);
    lv_obj_set_pos(bar1, 50, 300);
    lv_bar_set_value(bar1, 9000, LV_ANIM_OFF);
    lv_bar_set_type(bar1, LV_BAR_TYPE_SYMMETRICAL);


    lv_obj_t* bar2 = lv_bar_create(lv_scr_act(), NULL);
    lv_obj_set_size(bar2, 200, 20);
    lv_bar_set_range(bar2, 0, 10000);
    lv_obj_set_pos(bar2, 300, 300);
    lv_bar_set_anim_time(bar2, 5000); /* 填充满的时间 */
    lv_bar_set_value(bar2, 9000, LV_ANIM_ON);
    lv_bar_set_type(bar2, LV_BAR_TYPE_CUSTOM);
}


/********************************************************************************************/
static void event_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_CLICKED) {
        printf("Clicked\n");
    }
    else if (event == LV_EVENT_VALUE_CHANGED) {
        printf("Toggled\n");
    }
}

void lvgl_button_test1(void)
{
    lv_obj_t* label;

    lv_obj_t* btn1 = lv_btn_create(lv_scr_act(), NULL);
    lv_obj_set_event_cb(btn1, event_handler);
    lv_obj_align(btn1, NULL, LV_ALIGN_CENTER, 0, -40);

    label = lv_label_create(btn1, NULL);
    lv_label_set_text(label, "Button");

    lv_obj_t* btn2 = lv_btn_create(lv_scr_act(), NULL);
    lv_obj_set_event_cb(btn2, event_handler);
    lv_obj_align(btn2, NULL, LV_ALIGN_CENTER, 0, 40);
    lv_btn_set_checkable(btn2, true);
    lv_btn_toggle(btn2);
    lv_btn_set_fit2(btn2, LV_FIT_NONE, LV_FIT_TIGHT);

    label = lv_label_create(btn2, NULL);
    lv_label_set_text(label, "Toggled");
}

/********************************************************************************************/
void lvgl_button2_test2(void)
{
    static lv_anim_path_t path_overshoot;
    lv_anim_path_init(&path_overshoot);
    lv_anim_path_set_cb(&path_overshoot, lv_anim_path_overshoot);

    static lv_anim_path_t path_ease_out;
    lv_anim_path_init(&path_ease_out);
    lv_anim_path_set_cb(&path_ease_out, lv_anim_path_ease_out);

    static lv_anim_path_t path_ease_in_out;
    lv_anim_path_init(&path_ease_in_out);
    lv_anim_path_set_cb(&path_ease_in_out, lv_anim_path_ease_in_out);

    /*Gum-like button*/
    static lv_style_t style_gum;
    lv_style_init(&style_gum);
    lv_style_set_transform_width(&style_gum, LV_STATE_PRESSED, 10);
    lv_style_set_transform_height(&style_gum, LV_STATE_PRESSED, -10);
    lv_style_set_value_letter_space(&style_gum, LV_STATE_PRESSED, 5);
    lv_style_set_transition_path(&style_gum, LV_STATE_DEFAULT, &path_overshoot);
    lv_style_set_transition_path(&style_gum, LV_STATE_PRESSED, &path_ease_in_out);
    lv_style_set_transition_time(&style_gum, LV_STATE_DEFAULT, 250);
    lv_style_set_transition_delay(&style_gum, LV_STATE_DEFAULT, 100);
    lv_style_set_transition_prop_1(&style_gum, LV_STATE_DEFAULT, LV_STYLE_TRANSFORM_WIDTH);
    lv_style_set_transition_prop_2(&style_gum, LV_STATE_DEFAULT, LV_STYLE_TRANSFORM_HEIGHT);
    lv_style_set_transition_prop_3(&style_gum, LV_STATE_DEFAULT, LV_STYLE_VALUE_LETTER_SPACE);

    lv_obj_t* btn1 = lv_btn_create(lv_scr_act(), NULL);
    lv_obj_align(btn1, NULL, LV_ALIGN_CENTER, 0, -80);
    lv_obj_add_style(btn1, LV_BTN_PART_MAIN, &style_gum);

    /*Instead of creating a label add a values string*/
    lv_obj_set_style_local_value_str(btn1, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, "Gum");

    /*Halo on press*/
    static lv_style_t style_halo;
    lv_style_init(&style_halo);
    lv_style_set_transition_time(&style_halo, LV_STATE_PRESSED, 400);
    lv_style_set_transition_time(&style_halo, LV_STATE_DEFAULT, 0);
    lv_style_set_transition_delay(&style_halo, LV_STATE_DEFAULT, 200);
    lv_style_set_outline_width(&style_halo, LV_STATE_DEFAULT, 0);
    lv_style_set_outline_width(&style_halo, LV_STATE_PRESSED, 20);
    lv_style_set_outline_opa(&style_halo, LV_STATE_DEFAULT, LV_OPA_COVER);
    lv_style_set_outline_opa(&style_halo, LV_STATE_FOCUSED, LV_OPA_COVER);   /*Just to be sure, the theme might use it*/
    lv_style_set_outline_opa(&style_halo, LV_STATE_PRESSED, LV_OPA_TRANSP);
    lv_style_set_transition_prop_1(&style_halo, LV_STATE_DEFAULT, LV_STYLE_OUTLINE_OPA);
    lv_style_set_transition_prop_2(&style_halo, LV_STATE_DEFAULT, LV_STYLE_OUTLINE_WIDTH);

    lv_obj_t* btn2 = lv_btn_create(lv_scr_act(), NULL);
    lv_obj_align(btn2, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_obj_add_style(btn2, LV_BTN_PART_MAIN, &style_halo);
    lv_obj_set_style_local_value_str(btn2, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, "Halo");

    /*Ripple on press*/
    static lv_style_t style_ripple;
    lv_style_init(&style_ripple);
    lv_style_set_transition_time(&style_ripple, LV_STATE_PRESSED, 300);
    lv_style_set_transition_time(&style_ripple, LV_STATE_DEFAULT, 0);
    lv_style_set_transition_delay(&style_ripple, LV_STATE_DEFAULT, 300);
    lv_style_set_bg_opa(&style_ripple, LV_STATE_DEFAULT, 0);
    lv_style_set_bg_opa(&style_ripple, LV_STATE_PRESSED, LV_OPA_80);
    lv_style_set_border_width(&style_ripple, LV_STATE_DEFAULT, 0);
    lv_style_set_outline_width(&style_ripple, LV_STATE_DEFAULT, 0);
    lv_style_set_transform_width(&style_ripple, LV_STATE_DEFAULT, -20);
    lv_style_set_transform_height(&style_ripple, LV_STATE_DEFAULT, -20);
    lv_style_set_transform_width(&style_ripple, LV_STATE_PRESSED, 0);
    lv_style_set_transform_height(&style_ripple, LV_STATE_PRESSED, 0);

    lv_style_set_transition_path(&style_ripple, LV_STATE_DEFAULT, &path_ease_out);
    lv_style_set_transition_prop_1(&style_ripple, LV_STATE_DEFAULT, LV_STYLE_BG_OPA);
    lv_style_set_transition_prop_2(&style_ripple, LV_STATE_DEFAULT, LV_STYLE_TRANSFORM_WIDTH);
    lv_style_set_transition_prop_3(&style_ripple, LV_STATE_DEFAULT, LV_STYLE_TRANSFORM_HEIGHT);

    lv_obj_t* btn3 = lv_btn_create(lv_scr_act(), NULL);
    lv_obj_align(btn3, NULL, LV_ALIGN_CENTER, 0, 80);
    lv_obj_add_style(btn3, LV_BTN_PART_MAIN, &style_ripple);
    lv_obj_set_style_local_value_str(btn3, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, "Ripple");
}


void lvgl_button_checkable_test(void)
{
    lv_obj_t* btn1 = lv_btn_create(lv_scr_act(), NULL);
    lv_obj_align(btn1, NULL, LV_ALIGN_CENTER, 0, -80);
    lv_btn_set_checkable(btn1,true);

    lv_obj_t* btn2= lv_btn_create(lv_scr_act(), NULL);
    lv_obj_align(btn2, NULL, LV_ALIGN_CENTER, 0, 80);
}


/********************************************************************************************/
void lvgl_button_style_test(void)
{
    static lv_anim_path_t path_overshoot;
    lv_anim_path_init(&path_overshoot);
    lv_anim_path_set_cb(&path_overshoot, lv_anim_path_overshoot);

    static lv_anim_path_t path_ease_out;
    lv_anim_path_init(&path_ease_out);
    lv_anim_path_set_cb(&path_ease_out, lv_anim_path_ease_out);

    static lv_anim_path_t path_ease_in_out;
    lv_anim_path_init(&path_ease_in_out);
    lv_anim_path_set_cb(&path_ease_in_out, lv_anim_path_ease_in_out);

    /*Gum-like button*/
    static lv_style_t style_gum;
    lv_style_init(&style_gum);
    lv_style_set_transform_width(&style_gum, LV_STATE_PRESSED, 10);
    lv_style_set_transform_height(&style_gum, LV_STATE_PRESSED, -10);
    lv_style_set_value_letter_space(&style_gum, LV_STATE_PRESSED, 5);
    lv_style_set_transition_path(&style_gum, LV_STATE_DEFAULT, &path_overshoot);
    lv_style_set_transition_path(&style_gum, LV_STATE_PRESSED, &path_ease_in_out);
    lv_style_set_transition_time(&style_gum, LV_STATE_DEFAULT, 250);
    lv_style_set_transition_delay(&style_gum, LV_STATE_DEFAULT, 100);
    lv_style_set_transition_prop_1(&style_gum, LV_STATE_DEFAULT, LV_STYLE_TRANSFORM_WIDTH);
    lv_style_set_transition_prop_2(&style_gum, LV_STATE_DEFAULT, LV_STYLE_TRANSFORM_HEIGHT);
    lv_style_set_transition_prop_3(&style_gum, LV_STATE_DEFAULT, LV_STYLE_VALUE_LETTER_SPACE);

    lv_obj_t* btn1 = lv_btn_create(lv_scr_act(), NULL);
    lv_obj_align(btn1, NULL, LV_ALIGN_CENTER, 0, -80);
    lv_obj_add_style(btn1, LV_BTN_PART_MAIN, &style_gum);

    /*Instead of creating a label add a values string*/
    lv_obj_set_style_local_value_str(btn1, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, "Gum");

    /*Halo on press*/
    static lv_style_t style_halo;
    lv_style_init(&style_halo);
    lv_style_set_transition_time(&style_halo, LV_STATE_PRESSED, 400);
    lv_style_set_transition_time(&style_halo, LV_STATE_DEFAULT, 0);
    lv_style_set_transition_delay(&style_halo, LV_STATE_DEFAULT, 200);
    lv_style_set_outline_width(&style_halo, LV_STATE_DEFAULT, 0);
    lv_style_set_outline_width(&style_halo, LV_STATE_PRESSED, 20);
    lv_style_set_outline_opa(&style_halo, LV_STATE_DEFAULT, LV_OPA_COVER);
    lv_style_set_outline_opa(&style_halo, LV_STATE_FOCUSED, LV_OPA_COVER);   /*Just to be sure, the theme might use it*/
    lv_style_set_outline_opa(&style_halo, LV_STATE_PRESSED, LV_OPA_TRANSP);
    lv_style_set_transition_prop_1(&style_halo, LV_STATE_DEFAULT, LV_STYLE_OUTLINE_OPA);
    lv_style_set_transition_prop_2(&style_halo, LV_STATE_DEFAULT, LV_STYLE_OUTLINE_WIDTH);

    lv_obj_t* btn2 = lv_btn_create(lv_scr_act(), NULL);
    lv_obj_align(btn2, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_obj_add_style(btn2, LV_BTN_PART_MAIN, &style_halo);
    lv_obj_set_style_local_value_str(btn2, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, "Halo");

    /*Ripple on press*/
    static lv_style_t style_ripple;
    lv_style_init(&style_ripple);
    lv_style_set_transition_time(&style_ripple, LV_STATE_PRESSED, 300);
    lv_style_set_transition_time(&style_ripple, LV_STATE_DEFAULT, 0);
    lv_style_set_transition_delay(&style_ripple, LV_STATE_DEFAULT, 300);
    lv_style_set_bg_opa(&style_ripple, LV_STATE_DEFAULT, 0);
    lv_style_set_bg_opa(&style_ripple, LV_STATE_PRESSED, LV_OPA_80);
    lv_style_set_border_width(&style_ripple, LV_STATE_DEFAULT, 0);
    lv_style_set_outline_width(&style_ripple, LV_STATE_DEFAULT, 0);
    lv_style_set_transform_width(&style_ripple, LV_STATE_DEFAULT, -20);
    lv_style_set_transform_height(&style_ripple, LV_STATE_DEFAULT, -20);
    lv_style_set_transform_width(&style_ripple, LV_STATE_PRESSED, 0);
    lv_style_set_transform_height(&style_ripple, LV_STATE_PRESSED, 0);

    lv_style_set_transition_path(&style_ripple, LV_STATE_DEFAULT, &path_ease_out);
    lv_style_set_transition_prop_1(&style_ripple, LV_STATE_DEFAULT, LV_STYLE_BG_OPA);
    lv_style_set_transition_prop_2(&style_ripple, LV_STATE_DEFAULT, LV_STYLE_TRANSFORM_WIDTH);
    lv_style_set_transition_prop_3(&style_ripple, LV_STATE_DEFAULT, LV_STYLE_TRANSFORM_HEIGHT);

    lv_obj_t* btn3 = lv_btn_create(lv_scr_act(), NULL);
    lv_obj_align(btn3, NULL, LV_ALIGN_CENTER, 0, 80);
    lv_obj_add_style(btn3, LV_BTN_PART_MAIN, &style_ripple);
    lv_obj_set_style_local_value_str(btn3, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, "Ripple");
}


/********************************************************************************************/
static void button_event_handler(lv_obj_t* obj, lv_event_t event)
{
    switch (event)
    {
    case LV_EVENT_PRESSED:
        printf("LV_EVENT_PRESSED\n");
        break;
    case LV_EVENT_PRESSING:
        printf("LV_EVENT_PRESSING\n");
        break;
    case LV_EVENT_PRESS_LOST:
        printf("LV_EVENT_PRESS_LOST\n");
        break;
    case LV_EVENT_SHORT_CLICKED:
        printf("LV_EVENT_SHORT_CLICKED\n");
        break;
    case LV_EVENT_LONG_PRESSED:
        printf("LV_EVENT_LONG_PRESSED\n");
        break;
    case LV_EVENT_LONG_PRESSED_REPEAT:
        printf("LV_EVENT_LONG_PRESSED_REPEAT\n");
        break;
    case LV_EVENT_CLICKED:
        printf("LV_EVENT_CLICKED\n");
        break;
    case LV_EVENT_RELEASED:
        printf("LV_EVENT_RELEASED\n");
        break;
    case LV_EVENT_DRAG_BEGIN:
        printf("LV_EVENT_DRAG_BEGIN\n");
        break;
    case LV_EVENT_DRAG_END:
        printf("LV_EVENT_DRAG_END\n");
        break;
    case LV_EVENT_DRAG_THROW_BEGIN:
        printf("LV_EVENT_DRAG_THROW_BEGIN\n");
        break;
    case LV_EVENT_GESTURE:
        printf("LV_EVENT_GESTURE\n");
        break;
    case LV_EVENT_KEY:
        printf("LV_EVENT_KEY\n");
        break;
    case LV_EVENT_FOCUSED:
        printf("LV_EVENT_FOCUSED\n");
        break;
    case LV_EVENT_DEFOCUSED:
        printf("LV_EVENT_DEFOCUSED\n");
        break;
    case LV_EVENT_LEAVE:
        printf("LV_EVENT_LEAVE\n");
        break;
    case LV_EVENT_VALUE_CHANGED:
        printf("LV_EVENT_VALUE_CHANGED\n");
        break;
    case LV_EVENT_INSERT:
        printf("LV_EVENT_INSERT\n");
        break;
    case LV_EVENT_REFRESH:
        printf("LV_EVENT_REFRESH\n");
        break;

    }

}

void lvgl_button_event_test(void)
{
    lv_obj_t* button1 = lv_btn_create(lv_scr_act(), NULL);
    lv_obj_set_event_cb(button1, button_event_handler);
    lv_obj_align(button1, NULL, LV_ALIGN_CENTER, -80, 0);

    lv_obj_t* button2 = lv_btn_create(lv_scr_act(), NULL);
    lv_obj_align(button2, NULL, LV_ALIGN_CENTER, 80, 0);
    lv_btn_set_checkable(button2, true);
    lv_obj_set_event_cb(button2, button_event_handler);
}


/********************************************************************************************/
static void button_matrix_event_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_VALUE_CHANGED) {
        const char* txt = lv_btnmatrix_get_active_btn_text(obj);

        printf("%s was pressed\n", txt);
    }
}


static const char* btnm_map[] = { "1", "2", "3", "4", "5", "\n",
                                  "6", "7", "8", "9", "0", "\n",
                                  "Action1", "Action2", "" };

void lvgl_button_matrix_test(void)
{
    lv_obj_t* btnm1 = lv_btnmatrix_create(lv_scr_act(), NULL);
    lv_btnmatrix_set_map(btnm1, btnm_map);
    lv_btnmatrix_set_btn_width(btnm1, 10, 2);        /*Make "Action1" twice as wide as "Action2"*/
    lv_btnmatrix_set_btn_ctrl(btnm1, 10, LV_BTNMATRIX_CTRL_CHECKABLE);
    lv_btnmatrix_set_btn_ctrl(btnm1, 11, LV_BTNMATRIX_CTRL_CHECK_STATE);
    lv_obj_align(btnm1, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_event_cb(btnm1, button_matrix_event_handler);
}


/********************************************************************************************/
void lvgl_button_matrix_text_test(void)
{
    static const char* btnm_text[] = { "TEST1", "TEST2", "TEST3", "\n",
                                   "TEST4", "TEST5","TEST6","" };
    lv_obj_t* btnm1 = lv_btnmatrix_create(lv_scr_act(), NULL);
    lv_btnmatrix_set_map(btnm1, btnm_text);
    lv_obj_align(btnm1, NULL, LV_ALIGN_CENTER, 0, 0);
}

/********************************************************************************************/
void lvgl_button_matrix_control_test(void)
{
    static const char* btnm_text[] = { "ID0", "ID1", "ID2", "\n",
                                   "ID3", "ID4","ID5","" };
    lv_obj_t* btnm1 = lv_btnmatrix_create(lv_scr_act(), NULL);
    lv_btnmatrix_set_map(btnm1, btnm_text);
    lv_btnmatrix_set_btn_width(btnm1, 0, 2);
    lv_btnmatrix_set_btn_ctrl(btnm1,3, LV_BTNMATRIX_CTRL_HIDDEN);
    lv_btnmatrix_set_btn_ctrl(btnm1, 4, LV_BTNMATRIX_CTRL_DISABLED);
    lv_btnmatrix_set_btn_ctrl(btnm1, 5, LV_BTNMATRIX_CTRL_CHECKABLE);
    lv_obj_align(btnm1, NULL, LV_ALIGN_CENTER, 0, 0);
}

/********************************************************************************************/
void lvgl_button_matrix_one_check_test(void)
{
    static const char* btnm_text[] = { "ID0", "ID1", "ID2", "\n",
                                    "ID3", "ID4","ID5","" };
    lv_obj_t* btnm1 = lv_btnmatrix_create(lv_scr_act(), NULL);
    lv_btnmatrix_set_map(btnm1, btnm_text);
    lv_obj_align(btnm1, NULL, LV_ALIGN_CENTER, 0, 0);

    lv_btnmatrix_set_btn_ctrl(btnm1, 0, LV_BTNMATRIX_CTRL_CHECKABLE);
    lv_btnmatrix_set_btn_ctrl(btnm1, 1, LV_BTNMATRIX_CTRL_CHECKABLE);
    lv_btnmatrix_set_btn_ctrl(btnm1, 2, LV_BTNMATRIX_CTRL_CHECKABLE);
    lv_btnmatrix_set_btn_ctrl(btnm1, 3, LV_BTNMATRIX_CTRL_CHECKABLE);
    lv_btnmatrix_set_btn_ctrl(btnm1, 4, LV_BTNMATRIX_CTRL_CHECKABLE);
    lv_btnmatrix_set_btn_ctrl(btnm1, 5, LV_BTNMATRIX_CTRL_CHECKABLE);
    lv_btnmatrix_set_one_check(btnm1, true);  
}


/********************************************************************************************/
static void buttonm_event_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_VALUE_CHANGED) {
        uint16_t id = lv_btnmatrix_get_active_btn(obj);
        const char* txt = lv_btnmatrix_get_active_btn_text(obj);

        printf("ID:%d press,text:%s\n", id,txt);
    }
}
void lvgl_button_matrix_event_test(void)
{
    static const char* btnm_text[] = { "ID0", "ID1", "ID2", "\n",
                                    "ID3", "ID4","ID5","" };
    lv_obj_t* btnm1 = lv_btnmatrix_create(lv_scr_act(), NULL);
    lv_btnmatrix_set_map(btnm1, btnm_text);
    lv_obj_align(btnm1, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_event_cb(btnm1, buttonm_event_handler);
}



/********************************************************************************************/
static void calendar_event_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_VALUE_CHANGED) {
        lv_calendar_date_t* date = lv_calendar_get_pressed_date(obj);
        if (date) {
            printf("Clicked date: %02d.%02d.%d\n", date->day, date->month, date->year);
        }
    }
}

void lvgl_calendar_test(void)
{
    lv_obj_t* calendar = lv_calendar_create(lv_scr_act(), NULL);
    lv_obj_set_size(calendar, 235, 235);
    lv_obj_align(calendar, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_event_cb(calendar, calendar_event_handler);

    /*Make the date number smaller to be sure they fit into their area*/
    lv_obj_set_style_local_text_font(calendar, LV_CALENDAR_PART_DATE, LV_STATE_DEFAULT, lv_theme_get_font_small());

    /*Set today's date*/
    lv_calendar_date_t today;
    today.year = 2018;
    today.month = 10;
    today.day = 23;

    lv_calendar_set_today_date(calendar, &today);
    lv_calendar_set_showed_date(calendar, &today);

    /*Highlight a few days*/
    static lv_calendar_date_t highlighted_days[3];       /*Only its pointer will be saved so should be static*/
    highlighted_days[0].year = 2018;
    highlighted_days[0].month = 10;
    highlighted_days[0].day = 6;

    highlighted_days[1].year = 2018;
    highlighted_days[1].month = 10;
    highlighted_days[1].day = 11;

    highlighted_days[2].year = 2018;
    highlighted_days[2].month = 11;
    highlighted_days[2].day = 22;

    lv_calendar_set_highlighted_dates(calendar, highlighted_days, 3);
}

/********************************************************************************************/
void lvgl_calendar_current_data_test(void)
{
    lv_calendar_date_t today;
    lv_calendar_date_t *today_get;
    today.year = 2021;
    today.month = 2;
    today.day = 20;

    lv_obj_t* calendar = lv_calendar_create(lv_scr_act(), NULL);
    lv_obj_set_size(calendar, 300, 300);
    lv_obj_align(calendar, NULL, LV_ALIGN_CENTER, 0, 0);
    
    lv_calendar_set_today_date(calendar, &today);
    today_get = lv_calendar_get_today_date(calendar);
    printf("Y/M/D:%04d/%02d/%02d\n", today_get->year, today_get->month, today_get->day);
}

/********************************************************************************************/
void lvgl_calendar_show_data_test(void)
{
    lv_calendar_date_t today;
    today.year = 2021;
    today.month = 2;
    today.day = 20;

    lv_obj_t* calendar = lv_calendar_create(lv_scr_act(), NULL);
    lv_obj_set_size(calendar, 300, 300);
    lv_obj_align(calendar, NULL, LV_ALIGN_CENTER, 0, 0);

    lv_calendar_set_today_date(calendar, &today);
    lv_calendar_set_showed_date(calendar, &today);
}

void lvgl_calendar_highlight_data_test(void)
{
    lv_calendar_date_t today;
    static lv_calendar_date_t highlighted_days[3];       /*Only its pointer will be saved so should be static*/
    today.year = 2021;
    today.month = 2;
    today.day = 20;

    lv_obj_t* calendar = lv_calendar_create(lv_scr_act(), NULL);
    lv_obj_set_size(calendar, 300, 300);
    lv_obj_align(calendar, NULL, LV_ALIGN_CENTER, 0, 0);

    lv_calendar_set_today_date(calendar, &today);
    lv_calendar_set_showed_date(calendar, &today);

    /*Highlight a few days*/
    
    highlighted_days[0].year = 2021;
    highlighted_days[0].month = 2;
    highlighted_days[0].day = 14;

    highlighted_days[1].year = 2021;
    highlighted_days[1].month = 2;
    highlighted_days[1].day = 15;

    highlighted_days[2].year = 2021;
    highlighted_days[2].month = 2;
    highlighted_days[2].day = 16;

    lv_calendar_set_highlighted_dates(calendar, highlighted_days, 3);
}

/********************************************************************************************/
static const char* days_name[7] = { "1", "2", "3", "4", "5", "6", "7" };
void lvgl_calendar_name_day_test(void)
{
    lv_obj_t* calendar1 = lv_calendar_create(lv_scr_act(), NULL);
    lv_obj_set_size(calendar1, 300, 300);
    lv_obj_align(calendar1, NULL, LV_ALIGN_CENTER, -160, 0);

  
    lv_obj_t* calendar2 = lv_calendar_create(lv_scr_act(), NULL);
    lv_obj_set_size(calendar2, 300, 300);
    lv_obj_align(calendar2, NULL, LV_ALIGN_CENTER, 160, 0);
    lv_calendar_set_day_names(calendar2, days_name);
}

/********************************************************************************************/
static const char* months_name[12] = { "1", "2", "3", "4", "5", "6", "7" , "8" , "9" , "10" , "11" , "12" };
void lvgl_calendar_name_month_test(void)
{
    lv_obj_t* calendar1 = lv_calendar_create(lv_scr_act(), NULL);
    lv_obj_set_size(calendar1, 300, 300);
    lv_obj_align(calendar1, NULL, LV_ALIGN_CENTER, -160, 0);


    lv_obj_t* calendar2 = lv_calendar_create(lv_scr_act(), NULL);
    lv_obj_set_size(calendar2, 300, 300);
    lv_obj_align(calendar2, NULL, LV_ALIGN_CENTER, 160, 0);
    lv_calendar_set_month_names(calendar2, months_name);
}

/********************************************************************************************/

static void calendar_event_test_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_VALUE_CHANGED) {
        lv_calendar_date_t* date = lv_calendar_get_pressed_date(obj);
        if (date) {
            printf("Clicked date: %02d.%02d.%d\n",date->year,date->month, date->day);
        }
    }
}

void lvgl_calendar_event_test(void)
{
    lv_obj_t* calendar1 = lv_calendar_create(lv_scr_act(), NULL);
    lv_obj_set_size(calendar1, 300, 300);
    lv_obj_align(calendar1, NULL, LV_ALIGN_CENTER, -160, 0);
    lv_obj_set_event_cb(calendar1, calendar_event_test_handler);
}

/********************************************************************************************/
#define CANVAS_WIDTH  200
#define CANVAS_HEIGHT  150
void lvgl_canvas_test1(void)
{
    lv_draw_rect_dsc_t rect_dsc;
    lv_draw_rect_dsc_init(&rect_dsc);
    rect_dsc.radius = 10;
    rect_dsc.bg_opa = LV_OPA_COVER;
    rect_dsc.bg_grad_dir = LV_GRAD_DIR_HOR;
    rect_dsc.bg_color = LV_COLOR_RED;
    rect_dsc.bg_grad_color = LV_COLOR_BLUE;
    rect_dsc.border_width = 2;
    rect_dsc.border_opa = LV_OPA_90;
    rect_dsc.border_color = LV_COLOR_WHITE;
    rect_dsc.shadow_width = 5;
    rect_dsc.shadow_ofs_x = 5;
    rect_dsc.shadow_ofs_y = 5;

    lv_draw_label_dsc_t label_dsc;
    lv_draw_label_dsc_init(&label_dsc);
    label_dsc.color = LV_COLOR_YELLOW;

    static lv_color_t cbuf[LV_CANVAS_BUF_SIZE_TRUE_COLOR(CANVAS_WIDTH, CANVAS_HEIGHT)];

    lv_obj_t* canvas = lv_canvas_create(lv_scr_act(), NULL);
    lv_canvas_set_buffer(canvas, cbuf, CANVAS_WIDTH, CANVAS_HEIGHT, LV_IMG_CF_TRUE_COLOR);
    lv_obj_align(canvas, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_canvas_fill_bg(canvas, LV_COLOR_SILVER, LV_OPA_COVER);

    lv_canvas_draw_rect(canvas, 70, 60, 100, 70, &rect_dsc);

    lv_canvas_draw_text(canvas, 40, 20, 100, &label_dsc, "Some text on text canvas", LV_LABEL_ALIGN_LEFT);

    /* Test the rotation. It requires an other buffer where the orignal image is stored.
     * So copy the current image to buffer and rotate it to the canvas */
    static lv_color_t cbuf_tmp[CANVAS_WIDTH * CANVAS_HEIGHT];
    memcpy(cbuf_tmp, cbuf, sizeof(cbuf_tmp));
    lv_img_dsc_t img;
    img.data = (void*)cbuf_tmp;
    img.header.cf = LV_IMG_CF_TRUE_COLOR;
    img.header.w = CANVAS_WIDTH;
    img.header.h = CANVAS_HEIGHT;

    lv_canvas_fill_bg(canvas, LV_COLOR_SILVER, LV_OPA_COVER);
    lv_canvas_transform(canvas, &img, 30, LV_IMG_ZOOM_NONE, 0, 0, CANVAS_WIDTH / 2, CANVAS_HEIGHT / 2, true);
}



/********************************************************************************************/
#define CANVAS_WIDTH  50
#define CANVAS_HEIGHT  50
void lvgl_canvas_test2(void)
{
    /*Create a button to better see the transparency*/
    lv_btn_create(lv_scr_act(), NULL);

    /*Create a buffer for the canvas*/
    static lv_color_t cbuf[LV_CANVAS_BUF_SIZE_INDEXED_1BIT(CANVAS_WIDTH, CANVAS_HEIGHT)];

    /*Create a canvas and initialize its the palette*/
    lv_obj_t* canvas = lv_canvas_create(lv_scr_act(), NULL);
    lv_canvas_set_buffer(canvas, cbuf, CANVAS_WIDTH, CANVAS_HEIGHT, LV_IMG_CF_INDEXED_1BIT);
    lv_canvas_set_palette(canvas, 0, LV_COLOR_TRANSP);
    lv_canvas_set_palette(canvas, 1, LV_COLOR_RED);

    /*Create colors with the indices of the palette*/
    lv_color_t c0;
    lv_color_t c1;

    c0.full = 0;
    c1.full = 1;

    /*Transparent background*/
    lv_canvas_fill_bg(canvas, c1, LV_OPA_TRANSP);

    /*Create hole on the canvas*/
    uint32_t x;
    uint32_t y;
    for (y = 10; y < 30; y++) {
        for (x = 5; x < 20; x++) {
            lv_canvas_set_px(canvas, x, y, c0);
        }
    }
}


/********************************************************************************************/
static void check_box_event_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_VALUE_CHANGED) {
        printf("State: %s\n", lv_checkbox_is_checked(obj) ? "Checked" : "Unchecked");
    }
}

void lvgl_check_box_test(void)
{
    lv_obj_t* cb = lv_checkbox_create(lv_scr_act(), NULL);
    lv_checkbox_set_text(cb, "I agree to terms and conditions.");
    lv_obj_align(cb, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_event_cb(cb, check_box_event_handler);
}

/********************************************************************************************/
void lvgl_check_box_part_test(void)
{
    lv_obj_t* cb1 = lv_checkbox_create(lv_scr_act(), NULL);
    lv_checkbox_set_text(cb1, "Check Box 1");
    lv_obj_align(cb1, NULL, LV_ALIGN_CENTER, 0, -40);

    
    lv_obj_t* cb2 = lv_checkbox_create(lv_scr_act(), NULL);
    lv_checkbox_set_text(cb2, "Check Box 2");
    lv_obj_align(cb2, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_local_bg_color(cb2, LV_CHECKBOX_PART_BG, LV_STATE_DEFAULT, LV_COLOR_RED);

    lv_obj_t* cb3 = lv_checkbox_create(lv_scr_act(), NULL);
    lv_checkbox_set_text(cb3, "Check Box 3");
    lv_obj_align(cb3, NULL, LV_ALIGN_CENTER, 0, 40);
    lv_obj_set_style_local_bg_color(cb3, LV_CHECKBOX_PART_BULLET, LV_STATE_DEFAULT, LV_COLOR_BLUE);
}

/********************************************************************************************/
void lvgl_check_box_text_test(void)
{
    lv_obj_t* cb1 = lv_checkbox_create(lv_scr_act(), NULL);
    lv_checkbox_set_text(cb1, "This check Box 1");
    lv_obj_align(cb1, NULL, LV_ALIGN_CENTER, 0, -40);


    lv_obj_t* cb2 = lv_checkbox_create(lv_scr_act(), NULL);
    lv_checkbox_set_text(cb2, "This check Box 2");
    lv_obj_align(cb2, NULL, LV_ALIGN_CENTER, 0, 0);


    lv_obj_t* cb3 = lv_checkbox_create(lv_scr_act(), NULL);
    lv_checkbox_set_text(cb3, "This check Box 3");
    lv_obj_align(cb3, NULL, LV_ALIGN_CENTER, 0, 40);
}

/********************************************************************************************/
void lvgl_check_box_check_test(void)
{
    lv_obj_t* cb1 = lv_checkbox_create(lv_scr_act(), NULL);
    lv_checkbox_set_text(cb1, "This check Box 1");
    lv_obj_align(cb1, NULL, LV_ALIGN_CENTER, 0, -40);


    lv_obj_t* cb2 = lv_checkbox_create(lv_scr_act(), NULL);
    lv_checkbox_set_text(cb2, "This check Box 2");
    lv_obj_align(cb2, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_checkbox_set_checked(cb2,true);
}
/********************************************************************************************/
void lvgl_check_box_disable_test(void)
{
    lv_obj_t* cb1 = lv_checkbox_create(lv_scr_act(), NULL);
    lv_checkbox_set_text(cb1, "This check Box 1");
    lv_obj_align(cb1, NULL, LV_ALIGN_CENTER, 0, -40);


    lv_obj_t* cb2 = lv_checkbox_create(lv_scr_act(), NULL);
    lv_checkbox_set_text(cb2, "This check Box 2");
    lv_obj_align(cb2, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_checkbox_set_disabled(cb2);

    lv_obj_t* cb3 = lv_checkbox_create(lv_scr_act(), NULL);
    lv_checkbox_set_text(cb3, "This check Box 3");
    lv_obj_align(cb3, NULL, LV_ALIGN_CENTER, 0, 40);
    lv_checkbox_set_disabled(cb3);
    lv_checkbox_set_checked(cb3, true);
}

/********************************************************************************************/
void lvgl_chart_test(void)
{
    lv_coord_t pos_array[] = { 10,10,20,20,30,30 };
    /*Create a chart*/
    lv_obj_t* chart = lv_chart_create(lv_scr_act(), NULL);
    lv_obj_set_size(chart, 200, 150);
    lv_obj_align(chart, NULL, LV_ALIGN_CENTER, -150, 0);
    lv_chart_set_type(chart, LV_CHART_TYPE_LINE);   /*Show lines and points too*/

    /*Add two data series*/
    lv_chart_series_t* ser1 = lv_chart_add_series(chart, LV_COLOR_RED);
    lv_chart_series_t* ser2 = lv_chart_add_series(chart, LV_COLOR_GREEN);
    lv_chart_series_t* ser3 = lv_chart_add_series(chart, LV_COLOR_BLACK);

    /*Set the next points on 'ser1'*/
    lv_chart_set_next(chart, ser1, 10);
    lv_chart_set_next(chart, ser1, 10);
    lv_chart_set_next(chart, ser1, 10);
    lv_chart_set_next(chart, ser1, 10);
    lv_chart_set_next(chart, ser1, 10);
    lv_chart_set_next(chart, ser1, 10);
    lv_chart_set_next(chart, ser1, 10);
    lv_chart_set_next(chart, ser1, 30);
    lv_chart_set_next(chart, ser1, 70);
    lv_chart_set_next(chart, ser1, 90);

    /*Directly set points on 'ser2'*/
    ser2->points[0] = 90;
    ser2->points[1] = 70;
    ser2->points[2] = 65;
    ser2->points[3] = 65;
    ser2->points[4] = 65;
    ser2->points[5] = 65;
    ser2->points[6] = 65;
    ser2->points[7] = 65;
    ser2->points[8] = 65;
    ser2->points[9] = 65;

    
    lv_chart_set_points(chart, ser3, pos_array);

    lv_chart_refresh(chart); /*Required after direct set*/


    /*Create a chart*/
    lv_obj_t* chart2 = lv_chart_create(lv_scr_act(), NULL);
    lv_obj_set_size(chart2, 200, 150);
    lv_obj_align(chart2, NULL, LV_ALIGN_CENTER, 150, 0);
    lv_chart_set_type(chart2, LV_CHART_TYPE_COLUMN);   /*Show lines and points too*/
    lv_chart_series_t* chart2_ser1 = lv_chart_add_series(chart2, LV_COLOR_RED);
    lv_chart_set_points(chart2, chart2_ser1, pos_array);

    lv_chart_refresh(chart2); /*Required after direct set*/
}

/********************************************************************************************/
void lvgl_chart_test1(void)
{
    /*Create a chart*/
    lv_obj_t* chart;
    chart = lv_chart_create(lv_scr_act(), NULL);
    lv_obj_set_size(chart, 200, 150);
    lv_obj_align(chart, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_chart_set_type(chart, LV_CHART_TYPE_LINE);   /*Show lines and points too*/

    /*Add two data series*/
    lv_chart_series_t* ser1 = lv_chart_add_series(chart, LV_COLOR_RED);
    lv_chart_series_t* ser2 = lv_chart_add_series(chart, LV_COLOR_GREEN);

    /*Set the next points on 'ser1'*/
    lv_chart_set_next(chart, ser1, 10);
    lv_chart_set_next(chart, ser1, 10);
    lv_chart_set_next(chart, ser1, 10);
    lv_chart_set_next(chart, ser1, 10);
    lv_chart_set_next(chart, ser1, 10);
    lv_chart_set_next(chart, ser1, 10);
    lv_chart_set_next(chart, ser1, 10);
    lv_chart_set_next(chart, ser1, 30);
    lv_chart_set_next(chart, ser1, 70);
    lv_chart_set_next(chart, ser1, 90);

    /*Directly set points on 'ser2'*/
    ser2->points[0] = 90;
    ser2->points[1] = 70;
    ser2->points[2] = 65;
    ser2->points[3] = 65;
    ser2->points[4] = 65;
    ser2->points[5] = 65;
    ser2->points[6] = 65;
    ser2->points[7] = 65;
    ser2->points[8] = 65;
    ser2->points[9] = 65;

    lv_chart_refresh(chart); /*Required after direct set*/
}


/********************************************************************************************/
void lvgl_chart_test2(void)
{
    /*Create a chart*/
    lv_obj_t* chart;
    chart = lv_chart_create(lv_scr_act(), NULL);
    lv_obj_set_size(chart, 200, 150);
    lv_obj_align(chart, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_chart_set_type(chart, LV_CHART_TYPE_LINE);   /*Show lines and points too*/

    /*Add a faded are effect*/
    lv_obj_set_style_local_bg_opa(chart, LV_CHART_PART_SERIES, LV_STATE_DEFAULT, LV_OPA_50); /*Max. opa.*/
    lv_obj_set_style_local_bg_grad_dir(chart, LV_CHART_PART_SERIES, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
    lv_obj_set_style_local_bg_main_stop(chart, LV_CHART_PART_SERIES, LV_STATE_DEFAULT, 255);    /*Max opa on the top*/
    lv_obj_set_style_local_bg_grad_stop(chart, LV_CHART_PART_SERIES, LV_STATE_DEFAULT, 0);      /*Transparent on the bottom*/


    /*Add two data series*/
    lv_chart_series_t* ser1 = lv_chart_add_series(chart, LV_COLOR_RED);
    lv_chart_series_t* ser2 = lv_chart_add_series(chart, LV_COLOR_GREEN);

    /*Set the next points on 'ser1'*/
    lv_chart_set_next(chart, ser1, 31);
    lv_chart_set_next(chart, ser1, 66);
    lv_chart_set_next(chart, ser1, 10);
    lv_chart_set_next(chart, ser1, 89);
    lv_chart_set_next(chart, ser1, 63);
    lv_chart_set_next(chart, ser1, 56);
    lv_chart_set_next(chart, ser1, 32);
    lv_chart_set_next(chart, ser1, 35);
    lv_chart_set_next(chart, ser1, 57);
    lv_chart_set_next(chart, ser1, 85);

    /*Directly set points on 'ser2'*/
    ser2->points[0] = 92;
    ser2->points[1] = 71;
    ser2->points[2] = 61;
    ser2->points[3] = 15;
    ser2->points[4] = 21;
    ser2->points[5] = 35;
    ser2->points[6] = 35;
    ser2->points[7] = 58;
    ser2->points[8] = 31;
    ser2->points[9] = 53;

    lv_chart_refresh(chart); /*Required after direct set*/
}

/********************************************************************************************/
void lvgl_chart_style_test(void)
{
    /*Create a chart*/
    lv_obj_t* chart = lv_chart_create(lv_scr_act(), NULL);
    lv_obj_set_size(chart, 200, 150);
    lv_obj_align(chart, NULL, LV_ALIGN_CENTER, -150, 0);
    lv_chart_set_type(chart, LV_CHART_TYPE_LINE);   /*Show lines and points too*/

    /*Add a faded are effect*/
    lv_obj_set_style_local_bg_opa(chart, LV_CHART_PART_SERIES, LV_STATE_DEFAULT, LV_OPA_50); /*Max. opa.*/
    lv_obj_set_style_local_bg_grad_dir(chart, LV_CHART_PART_SERIES, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
    lv_obj_set_style_local_bg_main_stop(chart, LV_CHART_PART_SERIES, LV_STATE_DEFAULT, 255);    /*Max opa on the top*/
    lv_obj_set_style_local_bg_grad_stop(chart, LV_CHART_PART_SERIES, LV_STATE_DEFAULT, 0);      /*Transparent on the bottom*/

    /*Add two data series*/
    lv_chart_series_t* ser1 = lv_chart_add_series(chart, LV_COLOR_GREEN);

    /*Set the next points on 'ser1'*/
    lv_chart_set_next(chart, ser1, 31);
    lv_chart_set_next(chart, ser1, 66);
    lv_chart_set_next(chart, ser1, 10);
    lv_chart_set_next(chart, ser1, 89);
    lv_chart_set_next(chart, ser1, 63);
    lv_chart_set_next(chart, ser1, 56);
    lv_chart_set_next(chart, ser1, 32);
    lv_chart_set_next(chart, ser1, 35);
    lv_chart_set_next(chart, ser1, 57);
    lv_chart_set_next(chart, ser1, 85);

    lv_chart_refresh(chart); /*Required after direct set*/

    lv_obj_t* chart2 = lv_chart_create(lv_scr_act(), NULL);
    lv_obj_set_size(chart2, 200, 150);
    lv_obj_align(chart2, NULL, LV_ALIGN_CENTER, 150, 0);
    lv_chart_set_type(chart2, LV_CHART_TYPE_LINE);   /*Show lines and points too*/
    lv_obj_set_style_local_bg_color(chart2, LV_CHART_PART_BG, LV_STATE_DEFAULT, LV_COLOR_RED);

    lv_chart_series_t* chart2_ser1 = lv_chart_add_series(chart2, LV_COLOR_GREEN);
    /*Set the next points on 'ser1'*/
    lv_chart_set_next(chart2, chart2_ser1, 31);
    lv_chart_set_next(chart2, chart2_ser1, 66);
    lv_chart_set_next(chart2, chart2_ser1, 10);
    lv_chart_set_next(chart2, chart2_ser1, 89);
    lv_chart_set_next(chart2, chart2_ser1, 63);
    lv_chart_set_next(chart2, chart2_ser1, 56);
    lv_chart_set_next(chart2, chart2_ser1, 32);
    lv_chart_set_next(chart2, chart2_ser1, 35);
    lv_chart_set_next(chart2, chart2_ser1, 57);
    lv_chart_set_next(chart2, chart2_ser1, 85);
    //lv_chart_refresh(chart2); /*Required after direct set*/
}

/********************************************************************************************/
void lvgl_chart_ovwrite_startp_test(void)
{
    lv_coord_t pos_array[] = {10,10,20,20,30,30 };
    lv_obj_t* chart = lv_chart_create(lv_scr_act(), NULL);
    lv_obj_set_size(chart, 200, 150);
    lv_obj_align(chart, NULL, LV_ALIGN_CENTER, -150, 0);
    lv_chart_set_type(chart, LV_CHART_TYPE_LINE);   /*Show lines and points too*/

    lv_chart_series_t* ser1 = lv_chart_add_series(chart, LV_COLOR_GREEN);
    lv_chart_set_points(chart, ser1, pos_array);
    lv_chart_refresh(chart); /*Required after direct set*/


    lv_obj_t* chart2 = lv_chart_create(lv_scr_act(), NULL);
    lv_obj_set_size(chart2, 200, 150);
    lv_obj_align(chart2, NULL, LV_ALIGN_CENTER, 150, 0);
    lv_chart_set_type(chart2, LV_CHART_TYPE_LINE);   /*Show lines and points too*/

    lv_chart_series_t* chart2_ser1 = lv_chart_add_series(chart2, LV_COLOR_GREEN);
    lv_chart_set_points(chart2, chart2_ser1, pos_array);
    lv_chart_set_x_start_point(chart2, chart2_ser1, 1);
    lv_chart_refresh(chart2); /*Required after direct set*/
}
/********************************************************************************************/
void lvgl_chart_ex_array_test(void)
{
    static lv_coord_t pos_array[] = { 10,10,20,20,30,30 };
    lv_obj_t* chart = lv_chart_create(lv_scr_act(), NULL);
    lv_obj_set_size(chart, 200, 150);
    lv_obj_align(chart, NULL, LV_ALIGN_CENTER, -150, 0);
    lv_chart_set_type(chart, LV_CHART_TYPE_LINE);   /*Show lines and points too*/

    lv_chart_series_t* ser1 = lv_chart_add_series(chart, LV_COLOR_GREEN);
    lv_chart_set_ext_array(chart, ser1, pos_array,sizeof(pos_array)/sizeof(lv_coord_t));
    lv_chart_refresh(chart); /*Required after direct set*/

}

/********************************************************************************************/
void lvgl_chart_point_test(void)
{
    lv_coord_t pos_array[] = { 10,10,20,20,30,30 };
    lv_obj_t* chart = lv_chart_create(lv_scr_act(), NULL);
    lv_obj_set_size(chart, 200, 150);
    lv_obj_align(chart, NULL, LV_ALIGN_CENTER, -150, 0);
    lv_chart_set_type(chart, LV_CHART_TYPE_LINE);   /*Show lines and points too*/

    lv_chart_series_t* ser1 = lv_chart_add_series(chart, LV_COLOR_GREEN);
    lv_chart_set_points(chart, ser1, pos_array);
    lv_chart_refresh(chart); /*Required after direct set*/


    lv_obj_t* chart2 = lv_chart_create(lv_scr_act(), NULL);
    lv_obj_set_size(chart2, 200, 150);
    lv_obj_align(chart2, NULL, LV_ALIGN_CENTER, 150, 0);
    lv_chart_set_type(chart2, LV_CHART_TYPE_LINE);   /*Show lines and points too*/

    lv_chart_series_t* chart2_ser1 = lv_chart_add_series(chart2, LV_COLOR_GREEN);
    lv_chart_set_points(chart2, chart2_ser1, pos_array);
    lv_chart_set_point_count(chart2,sizeof(pos_array)/sizeof(lv_coord_t));
    lv_chart_refresh(chart2); /*Required after direct set*/
}

void lvgl_chart_ver_range_test(void)
{
    lv_coord_t pos_array[] = { 10,10,20,20,30,30 };
    lv_obj_t* chart = lv_chart_create(lv_scr_act(), NULL);
    lv_obj_set_size(chart, 200, 150);
    lv_obj_align(chart, NULL, LV_ALIGN_CENTER, -150, 0);
    lv_chart_set_type(chart, LV_CHART_TYPE_LINE);   /*Show lines and points too*/

    lv_chart_series_t* ser1 = lv_chart_add_series(chart, LV_COLOR_GREEN);
    lv_chart_set_points(chart, ser1, pos_array);
    lv_chart_set_point_count(chart, sizeof(pos_array) / sizeof(lv_coord_t));
    lv_chart_refresh(chart); /*Required after direct set*/


    lv_obj_t* chart2 = lv_chart_create(lv_scr_act(), NULL);
    lv_obj_set_size(chart2, 200, 150);
    lv_obj_align(chart2, NULL, LV_ALIGN_CENTER, 150, 0);
    lv_chart_set_type(chart2, LV_CHART_TYPE_LINE);   /*Show lines and points too*/

    lv_chart_series_t* chart2_ser1 = lv_chart_add_series(chart2, LV_COLOR_GREEN);
    lv_chart_set_points(chart2, chart2_ser1, pos_array);
    lv_chart_set_point_count(chart2, sizeof(pos_array) / sizeof(lv_coord_t));
    lv_chart_set_range(chart2,0,50);
    lv_chart_refresh(chart2); /*Required after direct set*/
}

void lvgl_chart_division_lines_test(void)
{
    lv_coord_t pos_array[] = { 10,20,30,40,50,60,70,80,90,100};
    lv_obj_t* chart = lv_chart_create(lv_scr_act(), NULL);
    lv_obj_set_size(chart, 400, 400);
    lv_obj_align(chart, NULL, LV_ALIGN_CENTER,0, 0);
    lv_chart_set_type(chart, LV_CHART_TYPE_LINE);   /*Show lines and points too*/

    lv_chart_series_t* ser1 = lv_chart_add_series(chart, LV_COLOR_GREEN);
    lv_chart_set_points(chart, ser1, pos_array);
    lv_chart_set_div_line_count(chart,5, 5);
    lv_chart_refresh(chart); /*Required after direct set*/
}

void lvgl_chart_tick_label_test(void)
{
    lv_coord_t pos_array[] = { 10,20,30,40,50,60,70,80,90,100 };
    lv_obj_t* chart = lv_chart_create(lv_scr_act(), NULL);
    lv_obj_set_size(chart, 300, 300);
    lv_obj_align(chart, NULL, LV_ALIGN_CENTER, -170, 0);
    lv_chart_set_type(chart, LV_CHART_TYPE_LINE);   /*Show lines and points too*/

    lv_chart_series_t* ser1 = lv_chart_add_series(chart, LV_COLOR_GREEN);
    lv_chart_set_points(chart, ser1, pos_array);
    lv_obj_set_style_local_pad_left(chart, LV_CHART_PART_BG, LV_STATE_DEFAULT, 80);
    lv_obj_set_style_local_pad_bottom(chart, LV_CHART_PART_BG, LV_STATE_DEFAULT, 80);
    lv_chart_set_y_tick_texts(chart, "100\n80\n60\n40\n20", 0, LV_CHART_AXIS_DRAW_LAST_TICK);
    lv_chart_set_x_tick_texts(chart, "1\n2\n3\n4\n5\n6\n7\n8\n9\n10", 0, LV_CHART_AXIS_DRAW_LAST_TICK);
    lv_chart_refresh(chart); /*Required after direct set*/


    lv_obj_t* chart2 = lv_chart_create(lv_scr_act(), NULL);
    lv_obj_set_size(chart2, 300, 300);
    lv_obj_align(chart2, NULL, LV_ALIGN_CENTER, 170, 0);
    lv_chart_set_type(chart2, LV_CHART_TYPE_LINE);   /*Show lines and points too*/

    lv_chart_series_t* chart2_ser1 = lv_chart_add_series(chart2, LV_COLOR_GREEN);
    lv_chart_set_points(chart2, chart2_ser1, pos_array);
    lv_obj_set_style_local_pad_left(chart2, LV_CHART_PART_BG, LV_STATE_DEFAULT, 80);
    lv_obj_set_style_local_pad_bottom(chart2, LV_CHART_PART_BG, LV_STATE_DEFAULT, 80);
    lv_chart_set_y_tick_length(chart2, 0, 0);
    lv_chart_set_x_tick_length(chart2, 0, 0);
    lv_chart_set_y_tick_texts(chart2, "100\n80\n60\n40\n20", 0, LV_CHART_AXIS_DRAW_LAST_TICK);
    lv_chart_set_x_tick_texts(chart2, "1\n2\n3\n4\n5\n6\n7\n8\n9\n10", 0, LV_CHART_AXIS_DRAW_LAST_TICK);
    lv_chart_refresh(chart2); /*Required after direct set*/
}

/********************************************************************************************/
void lvgl_contain_test(void)
{
    lv_obj_t* cont;

    cont = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_set_auto_realign(cont, true);                    /*Auto realign when the size changes*/
    lv_obj_align_origo(cont, NULL, LV_ALIGN_CENTER, 0, 0);  /*This parametrs will be sued when realigned*/
    lv_cont_set_fit(cont, LV_FIT_TIGHT);
    lv_cont_set_layout(cont, LV_LAYOUT_COLUMN_MID);

    lv_obj_t* label;
    label = lv_label_create(cont, NULL);
    lv_label_set_text(label, "Short text");

    /*Refresh and pause here for a while to see how `fit` works*/
    uint32_t t;
    lv_refr_now(NULL);
    t = lv_tick_get();
    while (lv_tick_elaps(t) < 500);

    label = lv_label_create(cont, NULL);
    lv_label_set_text(label, "It is a long text");

    /*Wait here too*/
    lv_refr_now(NULL);
    t = lv_tick_get();
    while (lv_tick_elaps(t) < 500);

    label = lv_label_create(cont, NULL);
    lv_label_set_text(label, "Here is an even longer text");
}

/********************************************************************************************/
void lvgl_contain_layout_centor_test(void)
{
    lv_obj_t* cont1 = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_set_pos(cont1, 100, 100);
    lv_obj_set_size(cont1, 400, 400);
    lv_cont_set_layout(cont1, LV_LAYOUT_OFF);
    lv_obj_t* cont1_bn1 = lv_btn_create(cont1, NULL);
    lv_obj_t* cont1_bn2 = lv_btn_create(cont1, NULL);


    lv_obj_t* cont2 = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_set_pos(cont2,500,100);
    lv_obj_set_size(cont2, 400, 400);
    lv_cont_set_layout(cont2, LV_LAYOUT_CENTER);
    lv_obj_t* cont2_bn1 = lv_btn_create(cont2, NULL);
    lv_obj_t* cont2_bn2 = lv_btn_create(cont2, NULL);
  
}

void lvgl_contain_layout_coloum_test(void)
{
    lv_obj_t* cont2 = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_set_pos(cont2, 0, 0);
    lv_obj_set_size(cont2, 350, 500);
    lv_cont_set_layout(cont2, LV_LAYOUT_COLUMN_LEFT);
    lv_obj_t* cont2_bn1 = lv_btn_create(cont2, NULL);
    lv_obj_t* cont2_bn2 = lv_btn_create(cont2, NULL);

    lv_obj_t* cont3 = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_set_pos(cont3, 350, 0);
    lv_obj_set_size(cont3, 350, 500);
    lv_cont_set_layout(cont3, LV_LAYOUT_COLUMN_MID);
    lv_obj_t* cont3_bn1 = lv_btn_create(cont3, NULL);
    lv_obj_t* cont3_bn2 = lv_btn_create(cont3, NULL);

    lv_obj_t* cont4 = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_set_pos(cont4, 700, 0);
    lv_obj_set_size(cont4, 350, 500);
    lv_cont_set_layout(cont4, LV_LAYOUT_COLUMN_RIGHT);
    lv_obj_t* cont4_bn1 = lv_btn_create(cont4, NULL);
    lv_obj_t* cont4_bn2 = lv_btn_create(cont4, NULL);
}


void lvgl_contain_layout_raw_test(void)
{
    lv_obj_t* cont2 = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_set_pos(cont2, 0, 0);
    lv_obj_set_size(cont2, 350, 500);
    lv_cont_set_layout(cont2, LV_LAYOUT_ROW_TOP);
    lv_obj_t* cont2_bn1 = lv_btn_create(cont2, NULL);
    lv_obj_t* cont2_bn2 = lv_btn_create(cont2, NULL);

    lv_obj_t* cont3 = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_set_pos(cont3, 350, 0);
    lv_obj_set_size(cont3, 350, 500);
    lv_cont_set_layout(cont3, LV_LAYOUT_ROW_MID);
    lv_obj_t* cont3_bn1 = lv_btn_create(cont3, NULL);
    lv_obj_t* cont3_bn2 = lv_btn_create(cont3, NULL);

    lv_obj_t* cont4 = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_set_pos(cont4, 700, 0);
    lv_obj_set_size(cont4, 350, 500);
    lv_cont_set_layout(cont4, LV_LAYOUT_ROW_BOTTOM);
    lv_obj_t* cont4_bn1 = lv_btn_create(cont4, NULL);
    lv_obj_t* cont4_bn2 = lv_btn_create(cont4, NULL);
}

void lvgl_contain_layout_pretty_test(void)
{
    lv_obj_t* cont2 = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_set_pos(cont2, 0, 0);
    lv_obj_set_size(cont2, 350, 500);
    lv_cont_set_layout(cont2, LV_LAYOUT_PRETTY_TOP);
    lv_obj_t* cont2_bn1 = lv_btn_create(cont2, NULL);
    lv_obj_t* cont2_bn2 = lv_btn_create(cont2, NULL);
    lv_obj_set_size(cont2_bn1, 100, 50);
    lv_obj_set_size(cont2_bn2, 100, 100);

    lv_obj_t* cont3 = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_set_pos(cont3, 350, 0);
    lv_obj_set_size(cont3, 350, 500);
    lv_cont_set_layout(cont3, LV_LAYOUT_PRETTY_MID);
    lv_obj_t* cont3_bn1 = lv_btn_create(cont3, NULL);
    lv_obj_t* cont3_bn2 = lv_btn_create(cont3, NULL);
    lv_obj_set_size(cont3_bn1, 100, 50);
    lv_obj_set_size(cont3_bn2, 100, 100);

    lv_obj_t* cont4 = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_set_pos(cont4, 700, 0);
    lv_obj_set_size(cont4, 350, 500);
    lv_cont_set_layout(cont4, LV_LAYOUT_PRETTY_BOTTOM);
    lv_obj_t* cont4_bn1 = lv_btn_create(cont4, NULL);
    lv_obj_t* cont4_bn2 = lv_btn_create(cont4, NULL);
    lv_obj_set_size(cont4_bn1, 100, 50);
    lv_obj_set_size(cont4_bn2, 100, 100);
}


void lvgl_contain_fit_test(void)
{
#if 0
    lv_obj_t* cont1 = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_align(cont1, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_obj_t* cont1_bn1 = lv_btn_create(cont1, NULL);
    lv_cont_set_fit(cont1, LV_FIT_NONE);
#endif

    lv_obj_t* cont2 = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_align(cont2, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_obj_t* cont2_bn1 = lv_btn_create(cont2, NULL);
    lv_cont_set_fit(cont2, LV_FIT_PARENT);
#if 0
    lv_obj_t* cont3 = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_t* cont3_bn1 = lv_btn_create(cont3, NULL);
    lv_obj_set_pos(cont3, 0, 300);
    lv_cont_set_fit(cont3, LV_FIT_PARENT);

    lv_obj_t* cont4 = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_set_pos(cont4, 0, 450);
    lv_obj_t* cont4_bn1 = lv_btn_create(cont4, NULL);
    lv_cont_set_fit(cont4, LV_FIT_MAX);
#endif

}

/********************************************************************************************/
void lvgl_color_picker_test(void)
{
    lv_obj_t* cpicker;

    cpicker = lv_cpicker_create(lv_scr_act(), NULL);
    lv_obj_set_size(cpicker, 200, 200);
    lv_obj_align(cpicker, NULL, LV_ALIGN_CENTER, 0, 0);
}

void lvgl_cpicker_type_test(void)
{

    lv_obj_t* cpicker1 = lv_cpicker_create(lv_scr_act(), NULL);
    lv_obj_set_size(cpicker1, 200, 200);
    lv_obj_set_pos(cpicker1, 100, 100);

    lv_obj_t* cpicker2 = lv_cpicker_create(lv_scr_act(), NULL);
    lv_obj_set_size(cpicker2, 200, 200);
    lv_obj_set_pos(cpicker2, 400, 100);
    lv_cpicker_set_type(cpicker2, LV_CPICKER_TYPE_RECT);

    lv_obj_t* cpicker3 = lv_cpicker_create(lv_scr_act(), NULL);
    lv_obj_set_size(cpicker3, 200, 200);
    lv_obj_set_pos(cpicker3, 700, 100);
    lv_cpicker_set_type(cpicker3, LV_CPICKER_TYPE_DISC);

}

void lvgl_cpicker_set_color_test(void)
{
    lv_obj_t* cpicker1 = lv_cpicker_create(lv_scr_act(), NULL);
    lv_obj_set_size(cpicker1, 200, 200);
    lv_obj_set_pos(cpicker1, 100, 100);

    lv_obj_t* cpicker2 = lv_cpicker_create(lv_scr_act(), NULL);
    lv_obj_set_size(cpicker2, 200, 200);
    lv_obj_set_pos(cpicker2, 400, 100);
    lv_cpicker_set_color(cpicker2,LV_COLOR_BLUE);

    lv_obj_t* cpicker3 = lv_cpicker_create(lv_scr_act(), NULL);
    lv_obj_set_size(cpicker3, 200, 200);
    lv_obj_set_pos(cpicker3, 700, 100);
    lv_cpicker_set_color(cpicker3, LV_COLOR_BLACK);

}

void lvgl_cpicker_knob_test(void)
{
    lv_obj_t* cpicker1 = lv_cpicker_create(lv_scr_act(), NULL);
    lv_obj_set_size(cpicker1, 200, 200);
    lv_obj_set_pos(cpicker1, 100, 100);
    lv_cpicker_set_knob_colored(cpicker1, true);
}

static void cpicker_event_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_VALUE_CHANGED) {
        lv_color_t current_color = lv_cpicker_get_color(obj);
        printf("LV_EVENT_VALUE_CHANGED R(%d):G(%d):B(%d)\n", current_color.ch.red, current_color.ch.green, current_color.ch.blue);
    }
}
void lvgl_cpicker_event_test(void)
{
    lv_obj_t* cpicker1 = lv_cpicker_create(lv_scr_act(), NULL);
    lv_obj_set_size(cpicker1, 200, 200);
    lv_obj_set_pos(cpicker1, 100, 100);
    lv_cpicker_set_knob_colored(cpicker1, true);
    lv_obj_set_event_cb(cpicker1, cpicker_event_handler);
}

/********************************************************************************************/
static void droup_list_event_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_dropdown_get_selected_str(obj, buf, sizeof(buf));
        printf("Option: %s\n", buf);
    }
}

void lvgl_drop_list_test1(void)
{

    /*Create a normal drop down list*/
    lv_obj_t* ddlist = lv_dropdown_create(lv_scr_act(), NULL);
    lv_dropdown_set_options(ddlist, "Apple\n"
        "Banana\n"
        "Orange\n"
        "Melon\n"
        "Grape\n"
        "Raspberry");

    lv_obj_align(ddlist, NULL, LV_ALIGN_IN_TOP_MID, 0, 20);
    lv_obj_set_event_cb(ddlist, droup_list_event_handler);
}



/********************************************************************************************/
void lvgl_drop_list_test2(void)
{
    /*Create a drop down list*/
    lv_obj_t* ddlist = lv_dropdown_create(lv_scr_act(), NULL);
    lv_dropdown_set_options(ddlist, "Apple\n"
        "Banana\n"
        "Orange\n"
        "Melon\n"
        "Grape\n"
        "Raspberry");

    lv_dropdown_set_dir(ddlist, LV_DROPDOWN_DIR_LEFT);
    lv_dropdown_set_symbol(ddlist, NULL);
    lv_dropdown_set_show_selected(ddlist, false);
    lv_dropdown_set_text(ddlist, "Fruits");
    /*It will be called automatically when the size changes*/
    lv_obj_align(ddlist, NULL, LV_ALIGN_IN_TOP_RIGHT, 0, 20);

    /*Copy the drop LEFT list*/
    ddlist = lv_dropdown_create(lv_scr_act(), ddlist);
    lv_obj_align(ddlist, NULL, LV_ALIGN_IN_TOP_RIGHT, 0, 100);
}

void lvgl_dlist_set_option_test(void)
{
    lv_obj_t* ddlist1 = lv_dropdown_create(lv_scr_act(), NULL);
    lv_dropdown_set_options(ddlist1, "0\n1\n2\n3");
    lv_obj_set_pos(ddlist1,100,100);
    lv_dropdown_set_selected(ddlist1,0);

    lv_obj_t* ddlist2 = lv_dropdown_create(lv_scr_act(), NULL);
    lv_dropdown_add_option(ddlist2,"0",0);
    lv_dropdown_add_option(ddlist2, "1", 1);
    lv_dropdown_add_option(ddlist2, "2", 2);
    lv_dropdown_add_option(ddlist2, "3", 3);
    lv_dropdown_set_selected(ddlist2, 1);
    lv_obj_set_pos(ddlist2, 300, 100);

    lv_obj_t* ddlist3 = lv_dropdown_create(lv_scr_act(), NULL);
    lv_obj_set_pos(ddlist3, 500, 100);
}

void lvgl_dlist_direct_test(void)
{
    lv_obj_t* ddlist1 = lv_dropdown_create(lv_scr_act(), NULL);
    lv_obj_set_pos(ddlist1, 100, 300);
    lv_dropdown_set_dir(ddlist1, LV_DROPDOWN_DIR_DOWN);

    lv_obj_t* ddlist2 = lv_dropdown_create(lv_scr_act(), NULL);
    lv_obj_set_pos(ddlist2, 300, 300);
    lv_dropdown_set_dir(ddlist2, LV_DROPDOWN_DIR_UP);

    lv_obj_t* ddlist3 = lv_dropdown_create(lv_scr_act(), NULL);
    lv_obj_set_pos(ddlist3, 500, 300);
    lv_dropdown_set_dir(ddlist3, LV_DROPDOWN_DIR_LEFT);

    lv_obj_t* ddlist4 = lv_dropdown_create(lv_scr_act(), NULL);
    lv_obj_set_pos(ddlist4, 700, 300);
    lv_dropdown_set_dir(ddlist4, LV_DROPDOWN_DIR_RIGHT);
}

void lvgl_dlist_symbol_test(void)
{
    lv_obj_t* ddlist1 = lv_dropdown_create(lv_scr_act(), NULL);
    lv_dropdown_set_options(ddlist1, "0\n1\n2\n3");
    lv_obj_set_pos(ddlist1, 100, 300);
    lv_dropdown_set_dir(ddlist1, LV_DROPDOWN_DIR_DOWN);
    lv_dropdown_set_symbol(ddlist1, LV_SYMBOL_DOWN);

    lv_obj_t* ddlist2 = lv_dropdown_create(lv_scr_act(), NULL);
    lv_dropdown_set_options(ddlist2, "0\n1\n2\n3");
    lv_obj_set_pos(ddlist2, 300, 300);
    lv_dropdown_set_dir(ddlist2, LV_DROPDOWN_DIR_UP);
    lv_dropdown_set_symbol(ddlist2, LV_SYMBOL_UP);

    lv_obj_t* ddlist3 = lv_dropdown_create(lv_scr_act(), NULL);
    lv_dropdown_set_options(ddlist3, "0\n1\n2\n3");
    lv_obj_set_pos(ddlist3, 500, 300);
    lv_dropdown_set_dir(ddlist3, LV_DROPDOWN_DIR_LEFT);
    lv_dropdown_set_symbol(ddlist3, LV_SYMBOL_LEFT);

    lv_obj_t* ddlist4 = lv_dropdown_create(lv_scr_act(), NULL);
    lv_dropdown_set_options(ddlist4, "0\n1\n2\n3");
    lv_obj_set_pos(ddlist4, 700, 300);
    lv_dropdown_set_dir(ddlist4, LV_DROPDOWN_DIR_RIGHT);
    lv_dropdown_set_symbol(ddlist4, LV_SYMBOL_RIGHT);
}


void lvgl_dlist_max_height_test(void)
{
    lv_obj_t* ddlist1 = lv_dropdown_create(lv_scr_act(), NULL);
    lv_dropdown_set_options(ddlist1, "0\n1\n2\n3");
    lv_obj_set_pos(ddlist1, 100, 300);
    

    lv_obj_t* ddlist2 = lv_dropdown_create(lv_scr_act(), NULL);
    lv_dropdown_set_options(ddlist2, "0\n1\n2\n3");
    lv_obj_set_pos(ddlist2, 300, 300);
    lv_dropdown_set_max_height(ddlist2, 300);

}

void lvgl_dlist_ani_test(void)
{
    lv_obj_t* ddlist1 = lv_dropdown_create(lv_scr_act(), NULL);
    lv_obj_set_pos(ddlist1, 100, 300);


    lv_obj_t* ddlist2 = lv_dropdown_create(lv_scr_act(), NULL);
    lv_obj_set_pos(ddlist2, 300, 300);
    //lv_dropdown_set_anim_time(ddlist2,1000);
}


/********************************************************************************************/
void lvgl_guage_test1(void)
{
    /*Describe the color for the needles*/
    static lv_color_t needle_colors[3];
    needle_colors[0] = LV_COLOR_BLUE;
    needle_colors[1] = LV_COLOR_ORANGE;
    needle_colors[2] = LV_COLOR_PURPLE;

    /*Create a gauge*/
    lv_obj_t* gauge1 = lv_gauge_create(lv_scr_act(), NULL);
    lv_gauge_set_needle_count(gauge1, 3, needle_colors);
    lv_obj_set_size(gauge1, 200, 200);
    lv_obj_align(gauge1, NULL, LV_ALIGN_CENTER, 0, 0);

    /*Set the values*/
    lv_gauge_set_value(gauge1, 0, 10);
    lv_gauge_set_value(gauge1, 1, 20);
    lv_gauge_set_value(gauge1, 2, 30);
}


/********************************************************************************************/
void lvgl_guage_test2(void)
{
    /*Describe the color for the needles*/
    static lv_color_t needle_colors[3];
    needle_colors[0] = LV_COLOR_BLUE;
    needle_colors[1] = LV_COLOR_ORANGE;
    needle_colors[2] = LV_COLOR_PURPLE;

    LV_IMG_DECLARE(img_hand);

    /*Create a gauge*/
    lv_obj_t* gauge1 = lv_gauge_create(lv_scr_act(), NULL);
    lv_gauge_set_needle_count(gauge1, 3, needle_colors);
    lv_obj_set_size(gauge1, 200, 200);
    lv_obj_align(gauge1, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_gauge_set_needle_img(gauge1, &img_hand, 4, 4);
    /*Allow recoloring of the images according to the needles' color*/
    lv_obj_set_style_local_image_recolor_opa(gauge1, LV_GAUGE_PART_NEEDLE, LV_STATE_DEFAULT, LV_OPA_COVER);

    /*Set the values*/
    lv_gauge_set_value(gauge1, 0, 10);
    lv_gauge_set_value(gauge1, 1, 20);
    lv_gauge_set_value(gauge1, 2, 30);
}

void lvgl_guage_value_needle_test(void)
{
    static lv_color_t needle_colors[3];
    needle_colors[0] = LV_COLOR_BLUE;
    needle_colors[1] = LV_COLOR_ORANGE;
    needle_colors[2] = LV_COLOR_PURPLE;

    /*Create a gauge*/
    lv_obj_t* gauge1 = lv_gauge_create(lv_scr_act(), NULL);
    lv_gauge_set_needle_count(gauge1, 3, needle_colors);

    lv_gauge_set_value(gauge1, 0, 10);
    lv_gauge_set_value(gauge1, 1, 20);
    lv_gauge_set_value(gauge1, 2, 30);
}


void lvgl_guage_scale_test(void)
{
    /*Create a gauge*/
    lv_obj_t* gauge1 = lv_gauge_create(lv_scr_act(), NULL);
    lv_obj_set_pos(gauge1, 100, 200);

    /*Create a gauge*/
    lv_obj_t* gauge2 = lv_gauge_create(lv_scr_act(), NULL);
    lv_obj_set_pos(gauge2, 400, 200);
    lv_gauge_set_scale(gauge2,270,11,11);
    
}

void lvgl_guage_range_test(void)
{
    /*Create a gauge*/
    lv_obj_t* gauge1 = lv_gauge_create(lv_scr_act(), NULL);
    lv_obj_set_pos(gauge1, 100, 200);

    /*Create a gauge*/
    lv_obj_t* gauge2 = lv_gauge_create(lv_scr_act(), NULL);
    lv_obj_set_pos(gauge2, 400, 200);
    lv_gauge_set_range(gauge2, 0, 180);
}

void lvgl_guage_needle_image_test(void)
{
    LV_IMG_DECLARE(img_hand);
    /*Create a gauge*/
    lv_obj_t* gauge1 = lv_gauge_create(lv_scr_act(), NULL);
    lv_obj_set_pos(gauge1, 100, 200);
    lv_gauge_set_needle_img(gauge1, &img_hand, 0, 0);

    lv_obj_t* gauge2 = lv_gauge_create(lv_scr_act(), NULL);
    lv_obj_set_pos(gauge2, 400, 200);
    lv_gauge_set_needle_img(gauge2, &img_hand, 40, 40);
}

void lvgl_guage_critical_test(void)
{
    /*Create a gauge*/
    lv_obj_t* gauge1 = lv_gauge_create(lv_scr_act(), NULL);
    lv_obj_set_pos(gauge1, 100, 200);

    lv_obj_t* gauge2 = lv_gauge_create(lv_scr_act(), NULL);
    lv_obj_set_pos(gauge2, 400, 200);
    lv_gauge_set_critical_value(gauge2,90);
}

/********************************************************************************************/
/* Find the image here: https://github.com/lvgl/lv_examples/tree/master/assets */
LV_IMG_DECLARE(img_cogwheel_argb);
void lvgl_image1_test1(void)
{
    lv_obj_t* img1 = lv_img_create(lv_scr_act(), NULL);
    lv_img_set_src(img1, &img_cogwheel_argb);
    lv_obj_align(img1, NULL, LV_ALIGN_CENTER, 0, -20);

    lv_obj_t* img2 = lv_img_create(lv_scr_act(), NULL);
    lv_img_set_src(img2, LV_SYMBOL_OK "Accept");
    lv_obj_align(img2, img1, LV_ALIGN_OUT_BOTTOM_MID, 0, 20);
}


/********************************************************************************************/
#define SLIDER_WIDTH 20

static void create_sliders(void);
static void slider_event_cb(lv_obj_t* slider, lv_event_t event);

static lv_obj_t* red_slider, * green_slider, * blue_slider, * intense_slider;
static lv_obj_t* img1;
LV_IMG_DECLARE(img_cogwheel_argb);

void lvgl_image2_test2(void)
{
    /*Create 4 sliders to adjust RGB color and re-color intensity*/
    create_sliders();

    /* Now create the actual image */
    img1 = lv_img_create(lv_scr_act(), NULL);
    lv_img_set_src(img1, &img_cogwheel_argb);
    lv_obj_align(img1, NULL, LV_ALIGN_IN_RIGHT_MID, -20, 0);
}


void lvgl_image_source_test(void)
{
    LV_IMG_DECLARE(logo);
    lv_obj_t* img1 = lv_img_create(lv_scr_act(), NULL);
    lv_img_set_src(img1, &logo);
    lv_obj_align(img1, NULL, LV_ALIGN_CENTER, 0, -20);

    lv_obj_t* img2 = lv_img_create(lv_scr_act(), NULL);
    lv_img_set_src(img2, LV_SYMBOL_OK "Accept");
    lv_obj_align(img2, img1, LV_ALIGN_OUT_BOTTOM_MID, 0, 20);
}

static void slider_event_cb(lv_obj_t* slider, lv_event_t event)
{
    if (event == LV_EVENT_VALUE_CHANGED) {
        /* Recolor the image based on the sliders' values */
        lv_color_t color = lv_color_make(lv_slider_get_value(red_slider), lv_slider_get_value(green_slider), lv_slider_get_value(blue_slider));
        lv_opa_t intense = lv_slider_get_value(intense_slider);
        lv_obj_set_style_local_image_recolor_opa(img1, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, intense);
        lv_obj_set_style_local_image_recolor(img1, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, color);
    }
}

static void create_sliders(void)
{
    /* Create a set of RGB sliders */
    /* Use the red one as a base for all the settings */
    red_slider = lv_slider_create(lv_scr_act(), NULL);
    lv_slider_set_range(red_slider, 0, 255);
    lv_obj_set_size(red_slider, SLIDER_WIDTH, 200); /* Be sure it's a vertical slider */
    lv_obj_set_style_local_bg_color(red_slider, LV_SLIDER_PART_INDIC, LV_STATE_DEFAULT, LV_COLOR_RED);
    lv_obj_set_event_cb(red_slider, slider_event_cb);

    /* Copy it for the other three sliders */
    green_slider = lv_slider_create(lv_scr_act(), red_slider);
    lv_obj_set_style_local_bg_color(green_slider, LV_SLIDER_PART_INDIC, LV_STATE_DEFAULT, LV_COLOR_LIME);

    blue_slider = lv_slider_create(lv_scr_act(), red_slider);
    lv_obj_set_style_local_bg_color(blue_slider, LV_SLIDER_PART_INDIC, LV_STATE_DEFAULT, LV_COLOR_BLUE);

    intense_slider = lv_slider_create(lv_scr_act(), red_slider);
    lv_obj_set_style_local_bg_color(intense_slider, LV_SLIDER_PART_INDIC, LV_STATE_DEFAULT, LV_COLOR_GRAY);
    lv_slider_set_value(intense_slider, 255, LV_ANIM_OFF);

    lv_obj_align(red_slider, NULL, LV_ALIGN_IN_LEFT_MID, 20, 0);
    lv_obj_align(green_slider, red_slider, LV_ALIGN_OUT_RIGHT_MID, 20, 0);
    lv_obj_align(blue_slider, green_slider, LV_ALIGN_OUT_RIGHT_MID, 20, 0);
    lv_obj_align(intense_slider, blue_slider, LV_ALIGN_OUT_RIGHT_MID, 20, 0);
}


/********************************************************************************************/
void lvgl_image_button_test(void)
{
    LV_IMG_DECLARE(imgbtn_green);
    LV_IMG_DECLARE(imgbtn_blue);

    /*Darken the button when pressed*/
    static lv_style_t style;
    lv_style_init(&style);
    lv_style_set_image_recolor_opa(&style, LV_STATE_PRESSED, LV_OPA_30);
    lv_style_set_image_recolor(&style, LV_STATE_PRESSED, LV_COLOR_BLACK);
    lv_style_set_text_color(&style, LV_STATE_DEFAULT, LV_COLOR_WHITE);

    /*Create an Image button*/
    lv_obj_t* imgbtn1 = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_imgbtn_set_src(imgbtn1, LV_BTN_STATE_RELEASED, &imgbtn_green);
    lv_imgbtn_set_src(imgbtn1, LV_BTN_STATE_PRESSED, &imgbtn_green);
    lv_imgbtn_set_src(imgbtn1, LV_BTN_STATE_CHECKED_RELEASED, &imgbtn_blue);
    lv_imgbtn_set_src(imgbtn1, LV_BTN_STATE_CHECKED_PRESSED, &imgbtn_blue);
    lv_imgbtn_set_checkable(imgbtn1, true);
    lv_obj_add_style(imgbtn1, LV_IMGBTN_PART_MAIN, &style);
    lv_obj_align(imgbtn1, NULL, LV_ALIGN_CENTER, 0, -40);

    /*Create a label on the Image button*/
    lv_obj_t* label = lv_label_create(imgbtn1, NULL);
    lv_label_set_text(label, "Button");
}


void lvgl_image_button_source_test(void)
{
    LV_IMG_DECLARE(logo);
    LV_IMG_DECLARE(imgbtn_green);
    lv_obj_t* imgbtn1 = lv_imgbtn_create(lv_scr_act(), NULL);
    lv_obj_set_size(imgbtn1, logo.header.w, logo.header.h);
    lv_obj_set_pos(imgbtn1,100,100);
    lv_imgbtn_set_src(imgbtn1, LV_BTN_STATE_RELEASED, &imgbtn_green);
    lv_imgbtn_set_src(imgbtn1, LV_BTN_STATE_PRESSED, &logo);
}



/********************************************************************************************/
static lv_obj_t* kb;
static lv_obj_t* ta;
static void kb_event_cb(lv_obj_t* keyboard, lv_event_t e)
{
    lv_keyboard_def_event_cb(kb, e);
    if (e == LV_EVENT_CANCEL) {
        lv_keyboard_set_textarea(kb, NULL);
        lv_obj_del(kb);
        kb = NULL;
    }
}

static void kb_create(void)
{
    kb = lv_keyboard_create(lv_scr_act(), NULL);
    lv_keyboard_set_cursor_manage(kb, true);
    lv_obj_set_event_cb(kb, kb_event_cb);
    lv_keyboard_set_textarea(kb, ta);

}

static void ta_event_cb(lv_obj_t* ta_local, lv_event_t e)
{
    if (e == LV_EVENT_CLICKED && kb == NULL) {
        kb_create();
    }
}

void lvgl_keyboard_test(void)
{

    /*Create a text area. The keyboard will write here*/
    ta = lv_textarea_create(lv_scr_act(), NULL);
    lv_obj_align(ta, NULL, LV_ALIGN_IN_TOP_MID, 0, LV_DPI / 16);
    lv_obj_set_event_cb(ta, ta_event_cb);
    lv_textarea_set_text(ta, "");
    lv_coord_t max_h = LV_VER_RES / 2 - LV_DPI / 8;
    if (lv_obj_get_height(ta) > max_h) lv_obj_set_height(ta, max_h);

    kb_create();
}

void lvgl_keyboard_mode_test(void)
{
    lv_obj_t* keyboard1 = lv_keyboard_create(lv_scr_act(), NULL);
    lv_obj_set_size(keyboard1,600,140);
    lv_obj_set_pos(keyboard1,0,0);
    lv_keyboard_set_mode(keyboard1, LV_KEYBOARD_MODE_TEXT_LOWER);

    lv_obj_t* keyboard2 = lv_keyboard_create(lv_scr_act(), NULL);
    lv_obj_set_size(keyboard2, 600, 140);
    lv_obj_set_pos(keyboard2, 0, 150);
    lv_keyboard_set_mode(keyboard2, LV_KEYBOARD_MODE_TEXT_UPPER);

    lv_obj_t* keyboard3 = lv_keyboard_create(lv_scr_act(), NULL);
    lv_obj_set_size(keyboard3, 600, 140);
    lv_obj_set_pos(keyboard3, 0, 300);
    lv_keyboard_set_mode(keyboard3, LV_KEYBOARD_MODE_SPECIAL);

    lv_obj_t* keyboard4 = lv_keyboard_create(lv_scr_act(), NULL);
    lv_obj_set_size(keyboard4, 600, 140);
    lv_obj_set_pos(keyboard4, 0, 450);
    lv_keyboard_set_mode(keyboard4, LV_KEYBOARD_MODE_NUM);
}




/********************************************************************************************/
void lvgl_label_test1(void)
{
    lv_obj_t* label1 = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_long_mode(label1, LV_LABEL_LONG_BREAK);     /*Break the long lines*/
    lv_label_set_recolor(label1, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label1, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/
    lv_label_set_text(label1, "#0000ff Re-color# #ff00ff words# #ff0000 of a# label "
        "and  wrap long text automatically.");
    lv_obj_set_width(label1, 150);
    lv_obj_align(label1, NULL, LV_ALIGN_CENTER, 0, -30);

    lv_obj_t* label2 = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_long_mode(label2, LV_LABEL_LONG_SROLL_CIRC);     /*Circular scroll*/
    lv_obj_set_width(label2, 150);
    lv_label_set_text(label2, "It is a circularly scrolling text. ");
    lv_obj_align(label2, NULL, LV_ALIGN_CENTER, 0, 30);
}


/********************************************************************************************/
void lvgl_label_test2(void)
{
    /* Create a style for the shadow*/
    static lv_style_t label_shadow_style;
    lv_style_init(&label_shadow_style);
    lv_style_set_text_opa(&label_shadow_style, LV_STATE_DEFAULT, LV_OPA_50);
    lv_style_set_text_color(&label_shadow_style, LV_STATE_DEFAULT, LV_COLOR_RED);

    /*Create a label for the shadow first (it's in the background) */
    lv_obj_t* shadow_label = lv_label_create(lv_scr_act(), NULL);
    lv_obj_add_style(shadow_label, LV_LABEL_PART_MAIN, &label_shadow_style);

    /* Create the main label */
    lv_obj_t* main_label = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_text(main_label, "A simple method to create\n"
        "shadows on text\n"
        "It even works with\n\n"
        "newlines     and spaces.");

    /*Set the same text for the shadow label*/
    lv_label_set_text(shadow_label, lv_label_get_text(main_label));

    /* Position the main label */
    lv_obj_align(main_label, NULL, LV_ALIGN_CENTER, 0, 0);

    /* Shift the second label down and to the right by 2 pixel */
    lv_obj_align(shadow_label, main_label, LV_ALIGN_IN_TOP_LEFT, 1, 1);
}


/********************************************************************************************/
static void text_changer(lv_task_t* t);

lv_obj_t* labels[3];

/**
 * Create three labels to demonstrate the alignments.
 */
void lvgl_label_test3(void)
{
    /*`lv_label_set_align` is not required to align the object itslef.
     * It's used only when the text has multiple lines*/

     /* Create a label on the top.
      * No additional alignment so it will be the reference*/
    labels[0] = lv_label_create(lv_scr_act(), NULL);
    lv_obj_align(labels[0], NULL, LV_ALIGN_IN_TOP_MID, 0, 5);
    lv_label_set_align(labels[0], LV_LABEL_ALIGN_CENTER);

    /* Create a label in the middle.
     * `lv_obj_align` will be called every time the text changes
     * to keep the middle position */
    labels[1] = lv_label_create(lv_scr_act(), NULL);
    lv_obj_align(labels[1], NULL, LV_ALIGN_CENTER, 0, 0);
    lv_label_set_align(labels[1], LV_LABEL_ALIGN_CENTER);

    /* Create a label in the bottom.
     * Enable auto realign. */
    labels[2] = lv_label_create(lv_scr_act(), NULL);
    lv_obj_set_auto_realign(labels[2], true);
    lv_obj_align(labels[2], NULL, LV_ALIGN_IN_BOTTOM_MID, 0, -5);
    lv_label_set_align(labels[2], LV_LABEL_ALIGN_CENTER);

    lv_task_t* t = lv_task_create(text_changer, 1000, LV_TASK_PRIO_MID, NULL);
    lv_task_ready(t);
}


void lvgl_label_text_test(void)
{
    lv_obj_t* label1 = lv_label_create(lv_scr_act(), NULL);
    lv_obj_set_pos(label1,100,100);
    lv_label_set_text(label1, "Label Text");

    lv_obj_t* label2 = lv_label_create(lv_scr_act(), NULL);
    lv_obj_set_pos(label2, 100, 200);
    lv_label_set_text_fmt(label2, "Label Text %d",2);
}

void lvgl_label_line_test(void)
{
    lv_obj_t* label1 = lv_label_create(lv_scr_act(), NULL);
    lv_obj_set_pos(label1, 100, 100);
    lv_label_set_text(label1, "line1\nline2\n\nline4");

}

void lvgl_label_lm_test(void)
{
    lv_obj_t* label1 = lv_label_create(lv_scr_act(), NULL);
    lv_obj_set_pos(label1,100,100);
    lv_obj_set_size(label1, 100, 100);
    lv_label_set_long_mode(label1, LV_LABEL_LONG_SROLL_CIRC);
    lv_label_set_text(label1, "It is a circularly scrolling text. ");
    
}

static void text_changer(lv_task_t* t)
{
    const char* texts[] = { "Text", "A very long text", "A text with\nmultiple\nlines", NULL };
    static uint8_t i = 0;

    lv_label_set_text(labels[0], texts[i]);
    lv_label_set_text(labels[1], texts[i]);
    lv_label_set_text(labels[2], texts[i]);

    /*Manually realaign `labels[1]`*/
    lv_obj_align(labels[1], NULL, LV_ALIGN_CENTER, 0, 0);

    i++;
    if (texts[i] == NULL) i = 0;
}


/********************************************************************************************/
void lvgl_led_test(void)
{
    /*Create a LED and switch it OFF*/
    lv_obj_t* led1 = lv_led_create(lv_scr_act(), NULL);
    lv_obj_align(led1, NULL, LV_ALIGN_CENTER, -80, 0);
    lv_led_off(led1);

    /*Copy the previous LED and set a brightness*/
    lv_obj_t* led2 = lv_led_create(lv_scr_act(), led1);
    lv_obj_align(led2, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_led_set_bright(led2, 190);

    /*Copy the previous LED and switch it ON*/
    lv_obj_t* led3 = lv_led_create(lv_scr_act(), led1);
    lv_obj_align(led3, NULL, LV_ALIGN_CENTER, 80, 0);
    lv_led_on(led3);
}

/********************************************************************************************/
static bool led_status = false;
lv_obj_t* led1;

static void led_bright_event_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_VALUE_CHANGED) {
        lv_led_set_bright(led1, lv_slider_get_value(obj));
    }
}

static void led_event_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_CLICKED)
    {
        printf("led_status %d\n", led_status);
        if (led_status)
        {   
            lv_led_off(led1);
            led_status = false;
        }  
        else
        {
            lv_led_on(led1);
            led_status = true;
        }
    }
}
void lvgl_led_test1(void)
{
    led1 = lv_led_create(lv_scr_act(), 0);
    lv_obj_align(led1, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_led_off(led1);

    lv_obj_t* btn_ctl = lv_btn_create(lv_scr_act(), 0);
    lv_obj_align(btn_ctl, led1, LV_ALIGN_OUT_BOTTOM_MID, 0, 20);
    lv_obj_set_event_cb(btn_ctl, led_event_handler);

    /*Create a slider*/
    lv_obj_t* slider = lv_slider_create(lv_scr_act(), NULL);
    lv_slider_set_range(slider, 0, 255);
    lv_obj_align(slider, btn_ctl, LV_ALIGN_OUT_BOTTOM_MID, 0, 20);
    lv_obj_set_event_cb(slider, led_bright_event_handler);
 
}



/********************************************************************************************/
void lvgl_line_test(void)
{
    /*Create an array for the points of the line*/
    static lv_point_t line_points[] = { {5, 5}, {70, 70}, {120, 10}, {180, 60}, {240, 10} };

    /*Create style*/
    static lv_style_t style_line;
    lv_style_init(&style_line);
    lv_style_set_line_width(&style_line, LV_STATE_DEFAULT, 8);
    lv_style_set_line_color(&style_line, LV_STATE_DEFAULT, LV_COLOR_BLUE);
    lv_style_set_line_rounded(&style_line, LV_STATE_DEFAULT, true);

    /*Create a line and apply the new style*/
    lv_obj_t* line1;
    line1 = lv_line_create(lv_scr_act(), NULL);
    lv_line_set_points(line1, line_points, 5);     /*Set the points*/
    lv_obj_add_style(line1, LV_LINE_PART_MAIN, &style_line);     /*Set the points*/
    lv_obj_align(line1, NULL, LV_ALIGN_CENTER, 0, 0);
}

/********************************************************************************************/
void lvgl_line_set_point_test(void)
{
    /*Create style*/
    static lv_style_t style_line;
    lv_style_init(&style_line);
    lv_style_set_line_width(&style_line, LV_STATE_DEFAULT, 8);

    /*Create an array for the points of the line*/
    static lv_point_t line_points[] = { {5, 5}, {70, 70}, {120, 10}, {180, 60}, {240, 10} };
    lv_obj_t* line1 = lv_line_create(lv_scr_act(), NULL);
    lv_obj_add_style(line1, LV_LINE_PART_MAIN, &style_line);     /*Set the points*/
    lv_line_set_points(line1, line_points, /*sizeof(line_points)/sizeof(lv_point_t)*/5);     /*Set the points*/
    lv_obj_align(line1, NULL, LV_ALIGN_CENTER, 0, 0);
}

void lvgl_line_auto_size_test(void)
{
    /*Create style*/
    static lv_style_t style_line;
    lv_style_init(&style_line);
    lv_style_set_line_width(&style_line, LV_STATE_DEFAULT, 8);

    /*Create an array for the points of the line*/
    static lv_point_t line_points[] = { {5, 5}, {70, 70}, {120, 10}, {180, 60}, {240, 10} };
    lv_obj_t* line1 = lv_line_create(lv_scr_act(), NULL);
    lv_obj_add_style(line1, LV_LINE_PART_MAIN, &style_line);     /*Set the points*/
    lv_line_set_auto_size(line1,true);
    lv_line_set_points(line1, line_points, /*sizeof(line_points)/sizeof(lv_point_t)*/5);     /*Set the points*/
    lv_obj_align(line1, NULL, LV_ALIGN_CENTER, 0, 0);
}

void lvgl_line_inverty_test(void)
{
    /*Create style*/
    static lv_style_t style_line;
    lv_style_init(&style_line);
    lv_style_set_line_width(&style_line, LV_STATE_DEFAULT, 8);

    /*Create an array for the points of the line*/
    static lv_point_t line_points[] = { {5, 5}, {70, 70}, {120, 10}, {180, 60}, {240, 10} };
    lv_obj_t* line1 = lv_line_create(lv_scr_act(), NULL);
    lv_obj_add_style(line1, LV_LINE_PART_MAIN, &style_line);     /*Set the points*/
    lv_line_set_points(line1, line_points, /*sizeof(line_points)/sizeof(lv_point_t)*/5);     /*Set the points*/
    lv_obj_align(line1, NULL, LV_ALIGN_CENTER, 0, -100);

    lv_obj_t* line2 = lv_line_create(lv_scr_act(), NULL);
    lv_line_set_y_invert(line2,true);
    lv_obj_add_style(line2, LV_LINE_PART_MAIN, &style_line);     /*Set the points*/
    lv_line_set_points(line2, line_points, /*sizeof(line_points)/sizeof(lv_point_t)*/5);     /*Set the points*/
    lv_obj_align(line2, NULL, LV_ALIGN_CENTER, 0, 100);
}



/********************************************************************************************/
static void list_event_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_CLICKED) {
        printf("Clicked: %s\n", lv_list_get_btn_text(obj));
    }
}

void lvgl_list_test(void)
{
    /*Create a list*/
    lv_obj_t* list1 = lv_list_create(lv_scr_act(), NULL);
    lv_obj_set_size(list1, 160, 200);
    lv_obj_align(list1, NULL, LV_ALIGN_CENTER, 0, 0);

    /*Add buttons to the list*/
    lv_obj_t* list_btn;

    list_btn = lv_list_add_btn(list1, LV_SYMBOL_FILE, "New");
    lv_obj_set_event_cb(list_btn, list_event_handler);

    list_btn = lv_list_add_btn(list1, LV_SYMBOL_DIRECTORY, "Open");
    lv_obj_set_event_cb(list_btn, list_event_handler);

    list_btn = lv_list_add_btn(list1, LV_SYMBOL_CLOSE, "Delete");
    lv_obj_set_event_cb(list_btn, list_event_handler);

    list_btn = lv_list_add_btn(list1, LV_SYMBOL_EDIT, "Edit");
    lv_obj_set_event_cb(list_btn, list_event_handler);

    list_btn = lv_list_add_btn(list1, LV_SYMBOL_SAVE, "Save");
    lv_obj_set_event_cb(list_btn, list_event_handler);

    list_btn = lv_list_add_btn(list1, LV_SYMBOL_BELL, "Notify");
    lv_obj_set_event_cb(list_btn, list_event_handler);

    list_btn = lv_list_add_btn(list1, LV_SYMBOL_BATTERY_FULL, "Battery");
    lv_obj_set_event_cb(list_btn, list_event_handler);
}

/********************************************************************************************/
void lvgl_list_add_button_test(void)
{
    lv_obj_t* list1 = lv_list_create(lv_scr_act(), NULL);
    lv_obj_set_size(list1, 160, 200);
    lv_obj_align(list1, NULL, LV_ALIGN_CENTER, 0, 0);

    /*Add buttons to the list*/
    lv_obj_t* list_btn;

    list_btn = lv_list_add_btn(list1, NULL, "Open");
    list_btn = lv_list_add_btn(list1, LV_SYMBOL_CLOSE, "Close");
    list_btn = lv_list_add_btn(list1, NULL, "Edit");
}

/********************************************************************************************/
lv_obj_t* list_navig;
lv_obj_t* list_button;

static void list_navig_up_event_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_CLICKED) {
        
        lv_list_up(list_navig);

        
    }
}

static void list_navig_down_event_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_CLICKED) {
        lv_list_down(list_navig);

    }
}
void lvgl_list_navig_test(void)
{
    list_navig = lv_list_create(lv_scr_act(), NULL);
    lv_obj_set_size(list_navig, 160, 200);
    lv_obj_align(list_navig, NULL, LV_ALIGN_CENTER, 0, 0);

    /*Add buttons to the list*/
    

    list_button = lv_list_add_btn(list_navig, NULL, "Open");
    list_button = lv_list_add_btn(list_navig, NULL, "Close");
    list_button = lv_list_add_btn(list_navig, NULL, "Edit");
    lv_list_focus(list_button, LV_ANIM_ON);

    lv_obj_t* bn_up = lv_btn_create(lv_scr_act(),NULL);
    lv_obj_t* bn_down = lv_btn_create(lv_scr_act(), NULL);
    lv_obj_set_style_local_value_str(bn_up, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, "UP");
    lv_obj_set_style_local_value_str(bn_down, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, "DOWND");
    lv_obj_align(bn_up, list_navig, LV_ALIGN_OUT_BOTTOM_MID, 0, 10);
    lv_obj_align(bn_down, bn_up, LV_ALIGN_OUT_BOTTOM_MID, 0, 10);
    lv_obj_set_event_cb(bn_up, list_navig_up_event_handler);
    lv_obj_set_event_cb(bn_down, list_navig_down_event_handler);
}

void lvgl_list_layout_test(void)
{
    lv_obj_t* list1 = lv_list_create(lv_scr_act(), NULL);
    lv_obj_set_size(list1, 160, 200);
    lv_obj_align(list1, NULL, LV_ALIGN_CENTER, 0, 0);

    /*Add buttons to the list*/
    lv_obj_t* list_button;
    list_button = lv_list_add_btn(list1, NULL, "Open");
    list_button = lv_list_add_btn(list1, NULL, "Close");
    list_button = lv_list_add_btn(list1, NULL, "Edit");

    lv_obj_t* list2 = lv_list_create(lv_scr_act(), NULL);
    lv_obj_set_size(list2, 160, 200);
    lv_obj_align(list2, list1, LV_ALIGN_OUT_BOTTOM_MID, 0, 10);

    /*Add buttons to the list*/
    list_button = lv_list_add_btn(list2, NULL, "Open");
    list_button = lv_list_add_btn(list2, NULL, "Close");
    list_button = lv_list_add_btn(list2, NULL, "Edit");
    lv_list_set_layout(list2, LV_LAYOUT_ROW_MID);
}



/********************************************************************************************/
void lvgl_line_meter_test(void)
{
    /*Create a line meter */
    lv_obj_t* lmeter;
    lmeter = lv_linemeter_create(lv_scr_act(), NULL);
    lv_linemeter_set_range(lmeter, 0, 100);                   /*Set the range*/
    lv_linemeter_set_value(lmeter, 80);                       /*Set the current value*/
    lv_linemeter_set_scale(lmeter, 240, 21);                  /*Set the angle and number of lines*/
    lv_obj_set_size(lmeter, 150, 150);
    lv_obj_align(lmeter, NULL, LV_ALIGN_CENTER, 0, 0);
}

void lvgl_line_meter_set_value_test(void)
{
    /*Create a line meter */
    lv_obj_t* lmeter1 = lv_linemeter_create(lv_scr_act(), NULL);
    lv_obj_set_pos(lmeter1, 150, 150);

    lv_obj_t* lmeter2 = lv_linemeter_create(lv_scr_act(), NULL);
    lv_obj_set_pos(lmeter2, 400, 150);
    lv_linemeter_set_value(lmeter2, 80);
}

void lvgl_line_meter_range_angle_test(void)
{
    /*Create a line meter */
    lv_obj_t* lmeter1 = lv_linemeter_create(lv_scr_act(), NULL);
    lv_obj_set_pos(lmeter1, 150, 150);

    lv_obj_t* lmeter2 = lv_linemeter_create(lv_scr_act(), NULL);
    lv_obj_set_pos(lmeter2, 400, 150);
    lv_linemeter_set_range(lmeter2, 0, 200);
    lv_linemeter_set_value(lmeter2, 80);

    lv_obj_t* lmeter3 = lv_linemeter_create(lv_scr_act(), NULL);
    lv_linemeter_set_scale(lmeter3, 360, 36);
    lv_obj_set_pos(lmeter3, 650, 150);
    lv_linemeter_set_value(lmeter3, 80);

}


void lvgl_line_meter_angle_offset_test(void)
{
    /*Create a line meter */
    lv_obj_t* lmeter1 = lv_linemeter_create(lv_scr_act(), NULL);
    lv_obj_set_pos(lmeter1, 150, 150);
    lv_linemeter_set_value(lmeter1, 80);

    lv_obj_t* lmeter2 = lv_linemeter_create(lv_scr_act(), NULL);
    lv_obj_set_pos(lmeter2, 400, 150);
    lv_linemeter_set_value(lmeter2, 80);
    lv_linemeter_set_angle_offset(lmeter2,90);
}

void lvgl_line_meter_mirror_test(void)
{
    /*Create a line meter */
    lv_obj_t* lmeter1 = lv_linemeter_create(lv_scr_act(), NULL);
    lv_obj_set_pos(lmeter1, 150, 150);
    lv_linemeter_set_value(lmeter1, 80);

    lv_obj_t* lmeter2 = lv_linemeter_create(lv_scr_act(), NULL);
    lv_obj_set_pos(lmeter2, 400, 150);
    lv_linemeter_set_value(lmeter2, 80);
    lv_linemeter_set_mirror(lmeter2, true);
}




/********************************************************************************************/
static void msgbox_event_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_VALUE_CHANGED) {
        printf("Button: %s\n", lv_msgbox_get_active_btn_text(obj));
    }
}

void lvgl_msgbox_test1(void)
{
    static const char* btns[] = { "Apply", "Close", "" };

    lv_obj_t* mbox1 = lv_msgbox_create(lv_scr_act(), NULL);
    lv_msgbox_set_text(mbox1, "A message box with two buttons.");
    lv_msgbox_add_btns(mbox1, btns);
    lv_obj_set_width(mbox1, 200);
    lv_obj_set_event_cb(mbox1, msgbox_event_handler);
    lv_obj_align(mbox1, NULL, LV_ALIGN_CENTER, 0, 0); /*Align to the corner*/
}



/********************************************************************************************/
static void mbox_event_cb(lv_obj_t* obj, lv_event_t evt);
static void btn_event_cb(lv_obj_t* btn, lv_event_t evt);
static void opa_anim(void* bg, lv_anim_value_t v);

static lv_obj_t* mbox, * info;
static lv_style_t style_modal;

static const char welcome_info[] = "Welcome to the modal message box demo!\n"
"Press the button to display a message box.";

static const char in_msg_info[] = "Notice that you cannot touch "
"the button again while the message box is open.";

void lvgl_msgbox_test2(void)
{
    lv_style_init(&style_modal);
    lv_style_set_bg_color(&style_modal, LV_STATE_DEFAULT, LV_COLOR_BLACK);

    /* Create a button, then set its position and event callback */
    lv_obj_t* btn = lv_btn_create(lv_scr_act(), NULL);
    lv_obj_set_size(btn, 200, 60);
    lv_obj_set_event_cb(btn, btn_event_cb);
    lv_obj_align(btn, NULL, LV_ALIGN_IN_TOP_LEFT, 20, 20);

    /* Create a label on the button */
    lv_obj_t* label = lv_label_create(btn, NULL);
    lv_label_set_text(label, "Display a message box!");

    /* Create an informative label on the screen */
    info = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_text(info, welcome_info);
    lv_label_set_long_mode(info, LV_LABEL_LONG_BREAK); /* Make sure text will wrap */
    lv_obj_set_width(info, LV_HOR_RES - 10);
    lv_obj_align(info, NULL, LV_ALIGN_IN_BOTTOM_LEFT, 5, -5);

}

void lvgl_msgbox_set_text_test(void)
{
    lv_obj_t* mbox1 = lv_msgbox_create(lv_scr_act(), NULL);
    lv_msgbox_set_text(mbox1, "Message Box Text");
    lv_obj_align(mbox1, NULL, LV_ALIGN_CENTER, 0, 0);
}

void lvgl_msgbox_add_button_test(void)
{
    static const char* btn_str[] = { "OK", "Cancel", "" };
    lv_obj_t* mbox1 = lv_msgbox_create(lv_scr_act(), NULL);
    lv_msgbox_set_text(mbox1, "Message Box Text");
    lv_msgbox_add_btns(mbox1, btn_str);
    lv_obj_align(mbox1, NULL, LV_ALIGN_CENTER, 0, 0);
}

void lvgl_msgbox_auto_close_test(void)
{
    static const char* btn_str[] = { "OK", "Cancel", "" };
    lv_obj_t* mbox1 = lv_msgbox_create(lv_scr_act(), NULL);
    lv_msgbox_set_text(mbox1, "Message Box Text1");
    lv_msgbox_add_btns(mbox1, btn_str);
    lv_msgbox_set_anim_time(mbox1, 1000);
    lv_obj_set_pos(mbox1,0,100);

    lv_obj_t* mbox2 = lv_msgbox_create(lv_scr_act(), NULL);
    lv_msgbox_set_text(mbox2, "Message Box Text2");
    lv_msgbox_add_btns(mbox2, btn_str);
    lv_msgbox_start_auto_close(mbox2, 1000);
    lv_obj_set_pos(mbox2, 350, 100);

    lv_obj_t* mbox3 = lv_msgbox_create(lv_scr_act(), NULL);
    lv_msgbox_set_text(mbox3, "Message Box Text3");
    lv_msgbox_add_btns(mbox3, btn_str);
    lv_msgbox_stop_auto_close(mbox3);
    lv_obj_set_pos(mbox3, 700, 100);

}

static void msgbox_event_test_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_VALUE_CHANGED) {
        printf("Button: ID:%d TEXT:%s\n", lv_msgbox_get_active_btn(obj), lv_msgbox_get_active_btn_text(obj));
    }
}

void lvgl_msgbox_event_test(void)
{
    static const char* btn_str[] = { "OK", "Cancel", "" };
    lv_obj_t* mbox1 = lv_msgbox_create(lv_scr_act(), NULL);
    lv_msgbox_set_text(mbox1, "Message Box Text");
    lv_msgbox_add_btns(mbox1, btn_str);
    lv_obj_set_pos(mbox1, 0, 100);
    lv_obj_set_event_cb(mbox1, msgbox_event_test_handler);
}



 

static void mbox_event_cb(lv_obj_t* obj, lv_event_t evt)
{
    if (evt == LV_EVENT_DELETE && obj == mbox) {
        /* Delete the parent modal background */
        lv_obj_del_async(lv_obj_get_parent(mbox));
        mbox = NULL; /* happens before object is actually deleted! */
        lv_label_set_text(info, welcome_info);
    }
    else if (evt == LV_EVENT_VALUE_CHANGED) {
        /* A button was clicked */
        lv_msgbox_start_auto_close(mbox, 0);
    }
}

static void btn_event_cb(lv_obj_t* btn, lv_event_t evt)
{
    if (evt == LV_EVENT_CLICKED) {
        /* Create a full-screen background */

        /* Create a base object for the modal background */
        lv_obj_t* obj = lv_obj_create(lv_scr_act(), NULL);
        lv_obj_reset_style_list(obj, LV_OBJ_PART_MAIN);
        lv_obj_add_style(obj, LV_OBJ_PART_MAIN, &style_modal);
        lv_obj_set_pos(obj, 0, 0);
        lv_obj_set_size(obj, LV_HOR_RES, LV_VER_RES);

        static const char* btns2[] = { "Ok", "Cancel", "" };

        /* Create the message box as a child of the modal background */
        mbox = lv_msgbox_create(obj, NULL);
        lv_msgbox_add_btns(mbox, btns2);
        lv_msgbox_set_text(mbox, "Hello world!");
        lv_obj_align(mbox, NULL, LV_ALIGN_CENTER, 0, 0);
        lv_obj_set_event_cb(mbox, mbox_event_cb);

        /* Fade the message box in with an animation */
        lv_anim_t a;
        lv_anim_init(&a);
        lv_anim_set_var(&a, obj);
        lv_anim_set_time(&a, 500);
        lv_anim_set_values(&a, LV_OPA_TRANSP, LV_OPA_50);
        lv_anim_set_exec_cb(&a, (lv_anim_exec_xcb_t)opa_anim);
        lv_anim_start(&a);

        lv_label_set_text(info, in_msg_info);
        lv_obj_align(info, NULL, LV_ALIGN_IN_BOTTOM_LEFT, 5, -5);
    }
}

static void opa_anim(void* bg, lv_anim_value_t v)
{
    lv_obj_set_style_local_bg_opa(bg, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, v);
}


/********************************************************************************************/
void lvgl_obj_mask_test1(void)
{
    /*Set a very visible color for the screen to clearly see what happens*/
    lv_obj_set_style_local_bg_color(lv_scr_act(), LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_hex3(0xf33));

    lv_obj_t* om = lv_objmask_create(lv_scr_act(), NULL);
    lv_obj_set_size(om, 200, 200);
    lv_obj_align(om, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_obj_t* label = lv_label_create(om, NULL);
    lv_label_set_long_mode(label, LV_LABEL_LONG_BREAK);
    lv_label_set_align(label, LV_LABEL_ALIGN_CENTER);
    lv_obj_set_width(label, 180);
    lv_label_set_text(label, "This label will be masked out. See how it works.");
    lv_obj_align(label, NULL, LV_ALIGN_IN_TOP_MID, 0, 20);

    lv_obj_t* cont = lv_cont_create(om, NULL);
    lv_obj_set_size(cont, 180, 100);
    lv_obj_set_drag(cont, true);
    lv_obj_align(cont, NULL, LV_ALIGN_IN_BOTTOM_MID, 0, -10);

    lv_obj_t* btn = lv_btn_create(cont, NULL);
    lv_obj_align(btn, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_local_value_str(btn, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, "Button");
    uint32_t t;

    lv_refr_now(NULL);
    t = lv_tick_get();
    while (lv_tick_elaps(t) < 1000);

    lv_area_t a;
    lv_draw_mask_radius_param_t r1;

    a.x1 = 10;
    a.y1 = 10;
    a.x2 = 190;
    a.y2 = 190;
    lv_draw_mask_radius_init(&r1, &a, LV_RADIUS_CIRCLE, false);
    lv_objmask_add_mask(om, &r1);

    lv_refr_now(NULL);
    t = lv_tick_get();
    while (lv_tick_elaps(t) < 1000);

    a.x1 = 100;
    a.y1 = 100;
    a.x2 = 150;
    a.y2 = 150;
    lv_draw_mask_radius_init(&r1, &a, LV_RADIUS_CIRCLE, true);
    lv_objmask_add_mask(om, &r1);

    lv_refr_now(NULL);
    t = lv_tick_get();
    while (lv_tick_elaps(t) < 1000);

    lv_draw_mask_line_param_t l1;
    lv_draw_mask_line_points_init(&l1, 0, 0, 100, 200, LV_DRAW_MASK_LINE_SIDE_TOP);
    lv_objmask_add_mask(om, &l1);

    lv_refr_now(NULL);
    t = lv_tick_get();
    while (lv_tick_elaps(t) < 1000);

    lv_draw_mask_fade_param_t f1;
    a.x1 = 100;
    a.y1 = 0;
    a.x2 = 200;
    a.y2 = 200;
    lv_draw_mask_fade_init(&f1, &a, LV_OPA_TRANSP, 0, LV_OPA_COVER, 150);
    lv_objmask_add_mask(om, &f1);
}



/********************************************************************************************/
#define MASK_WIDTH 100
#define MASK_HEIGHT 50
void lvgl_obj_mask_test2(void)
{
    /* Create the mask of a text by drawing it to a canvas*/
    static lv_opa_t mask_map[MASK_WIDTH * MASK_HEIGHT];

    /*Create a "8 bit alpha" canvas and clear it*/
    lv_obj_t* canvas = lv_canvas_create(lv_scr_act(), NULL);
    lv_canvas_set_buffer(canvas, mask_map, MASK_WIDTH, MASK_HEIGHT, LV_IMG_CF_ALPHA_8BIT);
    lv_canvas_fill_bg(canvas, LV_COLOR_BLACK, LV_OPA_TRANSP);

    /*Draw a label to the canvas. The result "image" will be used as mask*/
    lv_draw_label_dsc_t label_dsc;
    lv_draw_label_dsc_init(&label_dsc);
    label_dsc.color = LV_COLOR_WHITE;
    lv_canvas_draw_text(canvas, 5, 5, MASK_WIDTH, &label_dsc, "Text with gradient", LV_LABEL_ALIGN_CENTER);

    /*The mask is reads the canvas is not required anymore*/
    lv_obj_del(canvas);

    /*Create an object mask which will use the created mask*/
    lv_obj_t* om = lv_objmask_create(lv_scr_act(), NULL);
    lv_obj_set_size(om, MASK_WIDTH, MASK_HEIGHT);
    lv_obj_align(om, NULL, LV_ALIGN_CENTER, 0, 0);

    /*Add the created mask map to the object mask*/
    lv_draw_mask_map_param_t m;
    lv_area_t a;
    a.x1 = 0;
    a.y1 = 0;
    a.x2 = MASK_WIDTH - 1;
    a.y2 = MASK_HEIGHT - 1;
    lv_draw_mask_map_init(&m, &a, mask_map);
    lv_objmask_add_mask(om, &m);

    /*Create a style with gradient*/
    static lv_style_t style_bg;
    lv_style_init(&style_bg);
    lv_style_set_bg_opa(&style_bg, LV_STATE_DEFAULT, LV_OPA_COVER);
    lv_style_set_bg_color(&style_bg, LV_STATE_DEFAULT, LV_COLOR_RED);
    lv_style_set_bg_grad_color(&style_bg, LV_STATE_DEFAULT, LV_COLOR_BLUE);
    lv_style_set_bg_grad_dir(&style_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_HOR);

    /* Create and object with the gradient style on the object mask.
     * The text will be masked from the gradient*/
    lv_obj_t* bg = lv_obj_create(om, NULL);
    lv_obj_reset_style_list(bg, LV_OBJ_PART_MAIN);
    lv_obj_add_style(bg, LV_OBJ_PART_MAIN, &style_bg);
    lv_obj_set_size(bg, MASK_WIDTH, MASK_HEIGHT);
}


/********************************************************************************************/
void lvgl_page_test(void)
{
    /*Create a page*/
    lv_obj_t* page = lv_page_create(lv_scr_act(), NULL);
    lv_obj_set_size(page, 150, 200);
    lv_obj_align(page, NULL, LV_ALIGN_CENTER, 0, 0);

    /*Create a label on the page*/
    lv_obj_t* label = lv_label_create(page, NULL);
    lv_label_set_long_mode(label, LV_LABEL_LONG_BREAK);            /*Automatically break long lines*/
    lv_obj_set_width(label, lv_page_get_width_fit(page));          /*Set the label width to max value to not show hor. scroll bars*/
    lv_label_set_text(label, "Lorem ipsum dolor sit amet, consectetur adipiscing elit,\n"
        "sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.\n"
        "Ut enim ad minim veniam, quis nostrud exercitation ullamco\n"
        "laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure\n"
        "dolor in reprehenderit in voluptate velit esse cillum dolore\n"
        "eu fugiat nulla pariatur.\n"
        "Excepteur sint occaecat cupidatat non proident, sunt in culpa\n"
        "qui officia deserunt mollit anim id est laborum.");
}



/********************************************************************************************/
static void roller_event_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_roller_get_selected_str(obj, buf, sizeof(buf));
        printf("Selected month: %s\n", buf);
    }
}


void lvgl_roller_test(void)
{
    lv_obj_t* roller1 = lv_roller_create(lv_scr_act(), NULL);
    lv_roller_set_options(roller1,
        "January\n"
        "February\n"
        "March\n"
        "April\n"
        "May\n"
        "June\n"
        "July\n"
        "August\n"
        "September\n"
        "October\n"
        "November\n"
        "December",
        LV_ROLLER_MODE_INFINITE);

    lv_roller_set_visible_row_count(roller1, 4);
    lv_obj_align(roller1, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_event_cb(roller1, roller_event_handler);
}

void lvgl_roller_set_option_test(void)
{
    lv_obj_t* roller1 = lv_roller_create(lv_scr_act(), NULL);
    lv_roller_set_options(roller1,
        "January\n"
        "February\n"
        "March\n"
        "April\n"
        "May\n"
        "June\n"
        "July\n"
        "August\n"
        "September\n"
        "October\n"
        "November\n"
        "December",
        LV_ROLLER_MODE_INFINITE);
    lv_obj_align(roller1, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_roller_set_selected(roller1, 5, LV_ANIM_ON);
}

void lvgl_roller_visible_raw_test(void)
{
    lv_obj_t* roller1 = lv_roller_create(lv_scr_act(), NULL);
    lv_roller_set_options(roller1,
        "January\n"
        "February\n"
        "March\n"
        "April\n"
        "May\n"
        "June\n"
        "July\n"
        "August\n"
        "September\n"
        "October\n"
        "November\n"
        "December",
        LV_ROLLER_MODE_INFINITE);
    lv_obj_align(roller1, NULL, LV_ALIGN_CENTER, -100, -200);

    lv_obj_t* roller2 = lv_roller_create(lv_scr_act(), NULL);
    lv_roller_set_options(roller2,
        "January\n"
        "February\n"
        "March\n"
        "April\n"
        "May\n"
        "June\n"
        "July\n"
        "August\n"
        "September\n"
        "October\n"
        "November\n"
        "December",
        LV_ROLLER_MODE_INFINITE);
    lv_obj_align(roller2, NULL, LV_ALIGN_CENTER, 100, -200);
    lv_roller_set_visible_row_count(roller2,10);
}


static void roller_event_test_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_roller_get_selected_str(obj, buf, sizeof(buf));
        printf("Selected month: ID:%d Text:%s\n", lv_roller_get_selected(obj), buf);
    }
}


void lvgl_roller_event_test(void)
{
    lv_obj_t* roller1 = lv_roller_create(lv_scr_act(), NULL);
    lv_roller_set_options(roller1,
        "January\n"
        "February\n"
        "March\n"
        "April\n"
        "May\n"
        "June\n"
        "July\n"
        "August\n"
        "September\n"
        "October\n"
        "November\n"
        "December",
        LV_ROLLER_MODE_INFINITE);

    lv_roller_set_visible_row_count(roller1, 4);
    lv_obj_align(roller1, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_event_cb(roller1, roller_event_test_handler);
}


/********************************************************************************************/
static void slider_event_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_VALUE_CHANGED) {
        printf("Value: %d\n", lv_slider_get_value(obj));
    }
}

void lvgl_slider_test1(void)
{
    /*Create a slider*/
    lv_obj_t* slider = lv_slider_create(lv_scr_act(), NULL);
    lv_obj_align(slider, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_event_cb(slider, slider_event_handler);
}



/********************************************************************************************/
static lv_obj_t* slider_label;

static void slider_test_event_cb(lv_obj_t* slider, lv_event_t event)
{
    if (event == LV_EVENT_VALUE_CHANGED) {
        static char buf[4]; /* max 3 bytes for number plus 1 null terminating byte */
        snprintf(buf, 4, "%u", lv_slider_get_value(slider));
        lv_label_set_text(slider_label, buf);
    }
}

void lvgl_slider_test2(void)
{
    /* Create a slider in the center of the display */
    lv_obj_t* slider = lv_slider_create(lv_scr_act(), NULL);
    lv_obj_set_width(slider, LV_DPI * 2);
    lv_obj_align(slider, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_event_cb(slider, slider_test_event_cb);
    lv_slider_set_range(slider, 0, 100);

    /* Create a label below the slider */
    slider_label = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_text(slider_label, "0");
    lv_obj_set_auto_realign(slider_label, true);
    lv_obj_align(slider_label, slider, LV_ALIGN_OUT_BOTTOM_MID, 0, 10);

    /* Create an informative label */
    lv_obj_t* info = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_text(info, "Welcome to the slider+label demo!\n"
        "Move the slider and see that the label\n"
        "updates to match it.");
    lv_obj_align(info, NULL, LV_ALIGN_IN_TOP_LEFT, 10, 10);
}

void lvgl_slider_value_range_test(void)
{
    lv_obj_t* slider1 = lv_slider_create(lv_scr_act(), NULL);
    lv_obj_set_pos(slider1,100,100);
    lv_slider_set_value(slider1, 80, LV_ANIM_OFF);

    lv_obj_t* slider2 = lv_slider_create(lv_scr_act(), NULL);
    lv_obj_set_pos(slider2, 100, 200);
    lv_slider_set_range(slider2,0,200);
    lv_slider_set_value(slider2, 80, LV_ANIM_ON);

    lv_obj_t* slider3 = lv_slider_create(lv_scr_act(), NULL);
    lv_obj_set_pos(slider3, 100, 300);
    lv_slider_set_anim_time(slider3, 5000);
    lv_slider_set_value(slider3, 80, LV_ANIM_ON);
    
}

void lvgl_slider_knob_only_test(void)
{
    lv_obj_t* slider1 = lv_slider_create(lv_scr_act(), NULL);
    lv_obj_set_pos(slider1, 100, 100);
    lv_slider_set_value(slider1, 80, LV_ANIM_OFF);

    lv_obj_t* slider2 = lv_slider_create(lv_scr_act(), NULL);
    lv_obj_set_pos(slider2, 100, 200);
    lv_slider_set_value(slider2, 80, LV_ANIM_OFF);
    lv_obj_set_adv_hittest(slider2, true);
}



/********************************************************************************************/
static lv_obj_t* spinbox;


static void lv_spinbox_increment_event_cb(lv_obj_t* btn, lv_event_t e)
{
    if (e == LV_EVENT_SHORT_CLICKED || e == LV_EVENT_LONG_PRESSED_REPEAT) {
        lv_spinbox_increment(spinbox);
    }
}

static void lv_spinbox_decrement_event_cb(lv_obj_t* btn, lv_event_t e)
{
    if (e == LV_EVENT_SHORT_CLICKED || e == LV_EVENT_LONG_PRESSED_REPEAT) {
        lv_spinbox_decrement(spinbox);
    }
}


void lvgl_spinbox_test(void)
{
    spinbox = lv_spinbox_create(lv_scr_act(), NULL);
    lv_spinbox_set_range(spinbox, -1000, 90000);
    lv_spinbox_set_digit_format(spinbox, 5, 2);
    lv_spinbox_step_prev(spinbox);
    lv_obj_set_width(spinbox, 100);
    lv_obj_align(spinbox, NULL, LV_ALIGN_CENTER, 0, 0);

    lv_coord_t h = lv_obj_get_height(spinbox);
    lv_obj_t* btn = lv_btn_create(lv_scr_act(), NULL);
    lv_obj_set_size(btn, h, h);
    lv_obj_align(btn, spinbox, LV_ALIGN_OUT_RIGHT_MID, 5, 0);
    lv_theme_apply(btn, LV_THEME_SPINBOX_BTN);
    lv_obj_set_style_local_value_str(btn, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_SYMBOL_PLUS);
    lv_obj_set_event_cb(btn, lv_spinbox_increment_event_cb);

    btn = lv_btn_create(lv_scr_act(), btn);
    lv_obj_align(btn, spinbox, LV_ALIGN_OUT_LEFT_MID, -5, 0);
    lv_obj_set_event_cb(btn, lv_spinbox_decrement_event_cb);
    lv_obj_set_style_local_value_str(btn, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_SYMBOL_MINUS);
}

void lvgl_spinbox_set_format_test(void)
{
    lv_obj_t* spinbox1 = lv_spinbox_create(lv_scr_act(), NULL);
    lv_obj_align(spinbox1, NULL, LV_ALIGN_CENTER, 0, -100);

    lv_obj_t* spinbox2 = lv_spinbox_create(lv_scr_act(), NULL);
    lv_spinbox_set_digit_format(spinbox2, 5, 2);
    lv_obj_align(spinbox2, NULL, LV_ALIGN_CENTER, 0, 0);

    lv_obj_t* spinbox3 = lv_spinbox_create(lv_scr_act(), NULL);
    lv_spinbox_set_digit_format(spinbox3, 6, 4);
    lv_obj_align(spinbox3, NULL, LV_ALIGN_CENTER, 0, 100);

    lv_obj_t* spinbox4 = lv_spinbox_create(lv_scr_act(), NULL);
    lv_obj_align(spinbox4, NULL, LV_ALIGN_CENTER, 0, 200);
    lv_spinbox_set_padding_left(spinbox4, 10);
}


/********************************************************************************************/
void lvgl_spinner_test(void)
{
    /*Create a Preloader object*/
    lv_obj_t* preload = lv_spinner_create(lv_scr_act(), NULL);
    lv_obj_set_size(preload, 100, 100);
    lv_obj_align(preload, NULL, LV_ALIGN_CENTER, 0, 0);
}

/********************************************************************************************/
void lvgl_spinner_arc_length_test(void)
{
    /*Create a Preloader object*/
    lv_obj_t* preload1 = lv_spinner_create(lv_scr_act(), NULL);
    lv_obj_set_size(preload1, 100, 100);
    lv_obj_align(preload1, NULL, LV_ALIGN_CENTER, 0, -100);
    
    /*Create a Preloader object*/
    lv_obj_t* preload2 = lv_spinner_create(lv_scr_act(), NULL);
    lv_obj_set_size(preload2, 100, 100);
    lv_obj_align(preload2, NULL, LV_ALIGN_CENTER, 0, 100);
    lv_spinner_set_arc_length(preload2,270);
}

void lvgl_spinner_spin_speed_test(void)
{
    /*Create a Preloader object*/
    lv_obj_t* preload1 = lv_spinner_create(lv_scr_act(), NULL);
    lv_obj_set_size(preload1, 100, 100);
    lv_obj_align(preload1, NULL, LV_ALIGN_CENTER, 0, -100);

    /*Create a Preloader object*/
    lv_obj_t* preload2 = lv_spinner_create(lv_scr_act(), NULL);
    lv_obj_set_size(preload2, 100, 100);
    lv_obj_align(preload2, NULL, LV_ALIGN_CENTER, 0, 100);
    lv_spinner_set_spin_time(preload2, 50);
}

void lvgl_spinner_spin_type_test(void)
{
    /*Create a Preloader object*/
    lv_obj_t* preload1 = lv_spinner_create(lv_scr_act(), NULL);
    lv_obj_set_size(preload1, 100, 100);
    lv_obj_align(preload1, NULL, LV_ALIGN_CENTER, -100, 0);
    lv_spinner_set_type(preload1, LV_SPINNER_TYPE_SPINNING_ARC);

    /*Create a Preloader object*/
    lv_obj_t* preload2 = lv_spinner_create(lv_scr_act(), NULL);
    lv_obj_set_size(preload2, 100, 100);
    lv_obj_align(preload2, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_spinner_set_type(preload2, LV_SPINNER_TYPE_FILLSPIN_ARC);

    /*Create a Preloader object*/
    lv_obj_t* preload3 = lv_spinner_create(lv_scr_act(), NULL);
    lv_obj_set_size(preload3, 100, 100);
    lv_obj_align(preload3, NULL, LV_ALIGN_CENTER, 100, 0);
    lv_spinner_set_type(preload3, LV_SPINNER_TYPE_CONSTANT_ARC);
}

void lvgl_spinner_spin_dir_test(void)
{
    /*Create a Preloader object*/
    lv_obj_t* preload1 = lv_spinner_create(lv_scr_act(), NULL);
    lv_obj_set_size(preload1, 100, 100);
    lv_obj_align(preload1, NULL, LV_ALIGN_CENTER, -100, 0);
    lv_spinner_set_dir(preload1, LV_SPINNER_DIR_FORWARD);

    /*Create a Preloader object*/
    lv_obj_t* preload2 = lv_spinner_create(lv_scr_act(), NULL);
    lv_obj_set_size(preload2, 100, 100);
    lv_obj_align(preload2, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_spinner_set_dir(preload2, LV_SPINNER_DIR_BACKWARD);
}


/********************************************************************************************/
static void switch_event_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_VALUE_CHANGED) {
        printf("State: %s\n", lv_switch_get_state(obj) ? "On" : "Off");
    }
}

void lvgl_switch_test(void)
{
    /*Create a switch and apply the styles*/
    lv_obj_t* sw1 = lv_switch_create(lv_scr_act(), NULL);
    lv_obj_align(sw1, NULL, LV_ALIGN_CENTER, 0, -50);
    lv_obj_set_event_cb(sw1, switch_event_handler);

    /*Copy the first switch and turn it ON*/
    lv_obj_t* sw2 = lv_switch_create(lv_scr_act(), sw1);
    lv_switch_on(sw2, LV_ANIM_ON);
    lv_obj_align(sw2, NULL, LV_ALIGN_CENTER, 0, 50);
}

void lvgl_switch_ani_test(void)
{
    /*Create a switch and apply the styles*/
    lv_obj_t* sw1 = lv_switch_create(lv_scr_act(), NULL);
    lv_obj_align(sw1, NULL, LV_ALIGN_CENTER, 0, -50);

    lv_obj_t* sw2 = lv_switch_create(lv_scr_act(), sw1);
    lv_switch_on(sw2, LV_ANIM_ON);
    lv_obj_align(sw2, NULL, LV_ALIGN_CENTER, 0, 50);
    lv_switch_set_anim_time(sw2,2000);
}

static void switch_event_test_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_VALUE_CHANGED) {
        printf("State: %s\n", lv_switch_get_state(obj) ? "On" : "Off");
    }
}

void lvgl_switch_event_test(void)
{
    /*Create a switch and apply the styles*/
    lv_obj_t* sw1 = lv_switch_create(lv_scr_act(), NULL);
    lv_obj_set_pos(sw1,10,10);
    lv_obj_set_event_cb(sw1, switch_event_test_handler);
}

/********************************************************************************************/
void lvgl_table_test(void)
{
    lv_obj_t* table = lv_table_create(lv_scr_act(), NULL);
    lv_table_set_col_cnt(table, 2);
    lv_table_set_row_cnt(table, 4);
    lv_obj_align(table, NULL, LV_ALIGN_CENTER, 0, 0);

    /*Make the cells of the first row center aligned */
    lv_table_set_cell_align(table, 0, 0, LV_LABEL_ALIGN_CENTER);
    lv_table_set_cell_align(table, 0, 1, LV_LABEL_ALIGN_CENTER);

    /*Align the price values to the right in the 2nd column*/
    lv_table_set_cell_align(table, 1, 1, LV_LABEL_ALIGN_RIGHT);
    lv_table_set_cell_align(table, 2, 1, LV_LABEL_ALIGN_RIGHT);
    lv_table_set_cell_align(table, 3, 1, LV_LABEL_ALIGN_RIGHT);

    lv_table_set_cell_type(table, 0, 0, 2);
    lv_table_set_cell_type(table, 0, 1, 2);


    /*Fill the first column*/
    lv_table_set_cell_value(table, 0, 0, "Name");
    lv_table_set_cell_value(table, 1, 0, "Apple");
    lv_table_set_cell_value(table, 2, 0, "Banana");
    lv_table_set_cell_value(table, 3, 0, "Citron");

    /*Fill the second column*/
    lv_table_set_cell_value(table, 0, 1, "Price");
    lv_table_set_cell_value(table, 1, 1, "$7");
    lv_table_set_cell_value(table, 2, 1, "$4");
    lv_table_set_cell_value(table, 3, 1, "$6");

    lv_table_ext_t* ext = lv_obj_get_ext_attr(table);
    ext->row_h[0] = 20;
}

void lvgl_table_row_col_test(void)
{
    lv_obj_t* table = lv_table_create(lv_scr_act(), NULL);
    lv_table_set_row_cnt(table, 4);
    lv_table_set_col_cnt(table, 2);
    lv_obj_align(table, NULL, LV_ALIGN_CENTER, 0, 0);
}

void lvgl_table_value_test(void)
{
    lv_obj_t* table = lv_table_create(lv_scr_act(), NULL);
    lv_table_set_row_cnt(table, 4);
    lv_table_set_col_cnt(table, 2);
    lv_obj_align(table, NULL, LV_ALIGN_CENTER, 0, 0);

    /*Fill the first column*/
    lv_table_set_cell_value(table, 0, 0, "Name");
    lv_table_set_cell_value(table, 1, 0, "Jorden");
    lv_table_set_cell_value(table, 2, 0, "Jame");
    lv_table_set_cell_value(table, 3, 0, "Kobe");

    /*Fill the second column*/
    lv_table_set_cell_value(table, 0, 1, "Age");
    lv_table_set_cell_value(table, 1, 1, "52");
    lv_table_set_cell_value(table, 2, 1, "36");
    lv_table_set_cell_value(table, 3, 1, "40");

}

void lvgl_table_cell_type_test(void)
{
    lv_obj_t* table = lv_table_create(lv_scr_act(), NULL);
    lv_table_set_row_cnt(table, 4);
    lv_table_set_col_cnt(table, 2);
    lv_obj_align(table, NULL, LV_ALIGN_CENTER, 0, 0);

    /*Fill the first column*/
    lv_table_set_cell_value(table, 0, 0, "Name");
    lv_table_set_cell_value(table, 1, 0, "Jorden");
    lv_table_set_cell_value(table, 2, 0, "Jame");
    lv_table_set_cell_value(table, 3, 0, "Kobe");

    /*Fill the second column*/
    lv_table_set_cell_value(table, 0, 1, "Age");
    lv_table_set_cell_value(table, 1, 1, "52");
    lv_table_set_cell_value(table, 2, 1, "36");
    lv_table_set_cell_value(table, 3, 1, "40");

    lv_table_set_cell_type(table, 0, 0, 2);
    lv_table_set_cell_type(table, 0, 1, 2);
}

/********************************************************************************************/
void lvgl_tabview_test(void)
{
    /*Create a Tab view object*/
    lv_obj_t* tabview;
    tabview = lv_tabview_create(lv_scr_act(), NULL);

    /*Add 3 tabs (the tabs are page (lv_page) and can be scrolled*/
    lv_obj_t* tab1 = lv_tabview_add_tab(tabview, "Tab 1");
    lv_obj_t* tab2 = lv_tabview_add_tab(tabview, "Tab 2");
    lv_obj_t* tab3 = lv_tabview_add_tab(tabview, "Tab 3");


    /*Add content to the tabs*/
    lv_obj_t* label = lv_label_create(tab1, NULL);
    lv_label_set_text(label, "This the first tab\n\n"
        "If the content\n"
        "of a tab\n"
        "become too long\n"
        "the it \n"
        "automatically\n"
        "become\n"
        "scrollable.");

    label = lv_label_create(tab2, NULL);
    lv_label_set_text(label, "Second tab");

    label = lv_label_create(tab3, NULL);
    lv_label_set_text(label, "Third tab");
}

/********************************************************************************************/
lv_obj_t* ta1;
static void text_area_event_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_INSERT)
    {
        printf("LV_EVENT_INSERT\n");
    }
    if (event == LV_EVENT_VALUE_CHANGED) {
        printf("Value: %s\n", lv_textarea_get_text(obj));
    }
    else if (event == LV_EVENT_LONG_PRESSED_REPEAT) {
        /*For simple test: Long press the Text are to add the text below*/
        const char* txt = "\n\nYou can scroll it if the text is long enough.\n";
        static uint16_t i = 0;
        if (txt[i] != '\0') {
            lv_textarea_add_char(ta1, txt[i]);
            i++;
        }
    }
}

void lvgl_text_area_test1(void)
{
    ta1 = lv_textarea_create(lv_scr_act(), NULL);
    lv_obj_set_size(ta1, 200, 100);
    lv_obj_align(ta1, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_textarea_set_text(ta1, "A text in a Text Area");    /*Set an initial text*/
    lv_obj_set_event_cb(ta1, text_area_event_handler);
}



/********************************************************************************************/
static void text_area2_event_cb(lv_obj_t* ta, lv_event_t event);

static lv_obj_t* kb;

void lvgl_text_area_test2(void)
{
    /* Create the password box */
    lv_obj_t* pwd_ta = lv_textarea_create(lv_scr_act(), NULL);
    lv_textarea_set_text(pwd_ta, "");
    lv_textarea_set_pwd_mode(pwd_ta, true);
    lv_textarea_set_one_line(pwd_ta, true);
    lv_textarea_set_cursor_hidden(pwd_ta, true);
    lv_obj_set_width(pwd_ta, LV_HOR_RES / 2 - 20);
    lv_obj_set_pos(pwd_ta, 5, 20);
    lv_obj_set_event_cb(pwd_ta, text_area2_event_cb);

    /* Create a label and position it above the text box */
    lv_obj_t* pwd_label = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_text(pwd_label, "Password:");
    lv_obj_align(pwd_label, pwd_ta, LV_ALIGN_OUT_TOP_LEFT, 0, 0);

    /* Create the one-line mode text area */
    lv_obj_t* oneline_ta = lv_textarea_create(lv_scr_act(), pwd_ta);
    lv_textarea_set_pwd_mode(oneline_ta, false);
    lv_textarea_set_cursor_hidden(oneline_ta, true);
    lv_obj_align(oneline_ta, NULL, LV_ALIGN_IN_TOP_RIGHT, -5, 20);


    /* Create a label and position it above the text box */
    lv_obj_t* oneline_label = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_text(oneline_label, "Text:");
    lv_obj_align(oneline_label, oneline_ta, LV_ALIGN_OUT_TOP_LEFT, 0, 0);

    /* Create a keyboard */
    kb = lv_keyboard_create(lv_scr_act(), NULL);
    lv_obj_set_size(kb, LV_HOR_RES, LV_VER_RES / 2);

    lv_keyboard_set_textarea(kb, pwd_ta); /* Focus it on one of the text areas to start */
    lv_keyboard_set_cursor_manage(kb, true); /* Automatically show/hide cursors on text areas */
}

static void text_area2_event_cb(lv_obj_t* ta, lv_event_t event)
{
    if (event == LV_EVENT_CLICKED) {
        /* Focus on the clicked text area */
        if (kb != NULL)
            lv_keyboard_set_textarea(kb, ta);
    }

    else if (event == LV_EVENT_INSERT) {
        const char* str = lv_event_get_data();
        if (str[0] == '\n') {
            printf("Ready\n");
        }
    }
}


/********************************************************************************************/
static void text_area3_event_cb(lv_obj_t* ta, lv_event_t event);

static lv_obj_t* kb;

/**
 * Automatically format text like a clock. E.g. "12:34"
 * Add the ':' automatically.
 */
void lvgl_text_area_test3(void)
{
    /* Create the text area */
    lv_obj_t* ta = lv_textarea_create(lv_scr_act(), NULL);
    lv_obj_set_event_cb(ta, text_area3_event_cb);
    lv_textarea_set_accepted_chars(ta, "0123456789:");
    lv_textarea_set_max_length(ta, 5);
    lv_textarea_set_one_line(ta, true);
    lv_textarea_set_text(ta, "");


    /*Create a custom map for the keyboard*/

    static const char* kb_map[] = {
              "1","2", "3", " ","\n",
              "4", "5", "6", " ", "\n",
              "7", "8", "9", LV_SYMBOL_BACKSPACE ,"\n",
              "0",LV_SYMBOL_LEFT,LV_SYMBOL_RIGHT," ",""
    };

    static const lv_btnmatrix_ctrl_t kb_ctrl[] = {
           LV_BTNMATRIX_CTRL_NO_REPEAT, LV_BTNMATRIX_CTRL_NO_REPEAT, LV_BTNMATRIX_CTRL_NO_REPEAT, LV_BTNMATRIX_CTRL_HIDDEN,
           LV_BTNMATRIX_CTRL_NO_REPEAT, LV_BTNMATRIX_CTRL_NO_REPEAT, LV_BTNMATRIX_CTRL_NO_REPEAT, LV_BTNMATRIX_CTRL_HIDDEN,
           LV_BTNMATRIX_CTRL_NO_REPEAT, LV_BTNMATRIX_CTRL_NO_REPEAT, LV_BTNMATRIX_CTRL_NO_REPEAT, LV_BTNMATRIX_CTRL_NO_REPEAT,
           LV_BTNMATRIX_CTRL_NO_REPEAT, LV_BTNMATRIX_CTRL_NO_REPEAT, LV_BTNMATRIX_CTRL_NO_REPEAT, LV_BTNMATRIX_CTRL_HIDDEN,
    };

    /* Create a keyboard*/
    kb = lv_keyboard_create(lv_scr_act(), NULL);
    lv_obj_set_size(kb, LV_HOR_RES, LV_VER_RES / 2);
    lv_keyboard_set_mode(kb, LV_KEYBOARD_MODE_NUM);
    lv_keyboard_set_map(kb, LV_KEYBOARD_MODE_NUM, kb_map);
    lv_keyboard_set_ctrl_map(kb, LV_KEYBOARD_MODE_NUM, kb_ctrl);
    lv_keyboard_set_textarea(kb, ta);
}

static void text_area3_event_cb(lv_obj_t* ta, lv_event_t event)
{
    if (event == LV_EVENT_VALUE_CHANGED) {
        const char* txt = lv_textarea_get_text(ta);
        if (txt[3] == ':') {
            lv_textarea_del_char(ta);
        }
        else if (txt[0] >= '0' && txt[0] <= '9' &&
            txt[1] >= '0' && txt[1] <= '9' &&
            txt[2] != ':')
        {
            lv_textarea_set_cursor_pos(ta, 2);
            lv_textarea_add_char(ta, ':');
        }
    }
}

/********************************************************************************************/
void lvgl_title_view_test(void)
{
    static lv_point_t valid_pos[] = { {0,0}, {0, 1}, {1,1} };
    lv_obj_t* tileview;
    tileview = lv_tileview_create(lv_scr_act(), NULL);
    lv_tileview_set_valid_positions(tileview, valid_pos, 3);
    lv_tileview_set_edge_flash(tileview, true);

    lv_obj_t* tile1 = lv_obj_create(tileview, NULL);
    lv_obj_set_size(tile1, LV_HOR_RES, LV_VER_RES);
    lv_tileview_add_element(tileview, tile1);

    /*Tile1: just a label*/
    lv_obj_t* label = lv_label_create(tile1, NULL);
    lv_label_set_text(label, "Scroll down");
    lv_obj_align(label, NULL, LV_ALIGN_CENTER, 0, 0);

    /*Tile2: a list*/
    lv_obj_t* list = lv_list_create(tileview, NULL);
    lv_obj_set_size(list, LV_HOR_RES, LV_VER_RES);
    lv_obj_set_pos(list, 0, LV_VER_RES);
    lv_list_set_scroll_propagation(list, true);
    lv_list_set_scrollbar_mode(list, LV_SCROLLBAR_MODE_OFF);

    lv_list_add_btn(list, NULL, "One");
    lv_list_add_btn(list, NULL, "Two");
    lv_list_add_btn(list, NULL, "Three");
    lv_list_add_btn(list, NULL, "Four");
    lv_list_add_btn(list, NULL, "Five");
    lv_list_add_btn(list, NULL, "Six");
    lv_list_add_btn(list, NULL, "Seven");
    lv_list_add_btn(list, NULL, "Eight");

    /*Tile3: a button*/
    lv_obj_t* tile3 = lv_obj_create(tileview, tile1);
    lv_obj_set_pos(tile3, LV_HOR_RES, LV_VER_RES);
    lv_tileview_add_element(tileview, tile3);

    lv_obj_t* btn = lv_btn_create(tile3, NULL);
    lv_obj_align(btn, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_tileview_add_element(tileview, btn);
    label = lv_label_create(btn, NULL);
    lv_label_set_text(label, "No scroll up");
}

/********************************************************************************************/
void lvgl_window_test(void)
{
    /*Create a window*/
    lv_obj_t* win = lv_win_create(lv_scr_act(), NULL);
    lv_win_set_title(win, "Window title");                        /*Set the title*/


    /*Add control button to the header*/
    lv_obj_t* close_btn = lv_win_add_btn(win, LV_SYMBOL_CLOSE);           /*Add close button and use built-in close action*/
    lv_obj_set_event_cb(close_btn, lv_win_close_event_cb);
    lv_win_add_btn(win, LV_SYMBOL_SETTINGS);        /*Add a setup button*/

    /*Add some dummy content*/
    lv_obj_t* txt = lv_label_create(win, NULL);
    lv_label_set_text(txt, "This is the content of the window\n\n"
        "You can add control buttons to\n"
        "the window header\n\n"
        "The content area becomes\n"
        "automatically scrollable is it's \n"
        "large enough.\n\n"
        " You can scroll the content\n"
        "See the scroll bar on the right!");
}







