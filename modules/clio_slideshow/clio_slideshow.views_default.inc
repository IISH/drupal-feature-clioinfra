<?php
/**
 * @file
 * clio_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function clio_slideshow_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Slideshow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_height_1' => 0,
    'field_height_2' => 0,
    'field_bar_1' => 0,
    'field_text_1' => 0,
    'field_bar_2' => 0,
    'field_text_2' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'field_height_1' => 0,
    'field_height_2' => 0,
    'field_bar_1' => 0,
    'field_text_1' => 0,
    'field_bar_2' => 0,
    'field_text_2' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '10000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Bar Height 1 */
  $handler->display->display_options['fields']['field_height_1']['id'] = 'field_height_1';
  $handler->display->display_options['fields']['field_height_1']['table'] = 'field_data_field_height_1';
  $handler->display->display_options['fields']['field_height_1']['field'] = 'field_height_1';
  $handler->display->display_options['fields']['field_height_1']['label'] = '';
  $handler->display->display_options['fields']['field_height_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_height_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_height_1']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_height_1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Bar Height 2 */
  $handler->display->display_options['fields']['field_height_2']['id'] = 'field_height_2';
  $handler->display->display_options['fields']['field_height_2']['table'] = 'field_data_field_height_2';
  $handler->display->display_options['fields']['field_height_2']['field'] = 'field_height_2';
  $handler->display->display_options['fields']['field_height_2']['label'] = '';
  $handler->display->display_options['fields']['field_height_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_height_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_height_2']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_height_2']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Bar Color 1 */
  $handler->display->display_options['fields']['field_bar_1']['id'] = 'field_bar_1';
  $handler->display->display_options['fields']['field_bar_1']['table'] = 'field_data_field_bar_1';
  $handler->display->display_options['fields']['field_bar_1']['field'] = 'field_bar_1';
  $handler->display->display_options['fields']['field_bar_1']['label'] = '';
  $handler->display->display_options['fields']['field_bar_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bar_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bar_1']['type'] = 'list_key';
  /* Field: Content: Text 1 */
  $handler->display->display_options['fields']['field_text_1']['id'] = 'field_text_1';
  $handler->display->display_options['fields']['field_text_1']['table'] = 'field_data_field_text_1';
  $handler->display->display_options['fields']['field_text_1']['field'] = 'field_text_1';
  $handler->display->display_options['fields']['field_text_1']['label'] = '';
  $handler->display->display_options['fields']['field_text_1']['element_label_colon'] = FALSE;
  /* Field: Content: Bar Color 2 */
  $handler->display->display_options['fields']['field_bar_2']['id'] = 'field_bar_2';
  $handler->display->display_options['fields']['field_bar_2']['table'] = 'field_data_field_bar_2';
  $handler->display->display_options['fields']['field_bar_2']['field'] = 'field_bar_2';
  $handler->display->display_options['fields']['field_bar_2']['label'] = '';
  $handler->display->display_options['fields']['field_bar_2']['alter']['text'] = '<div class="slideshow-bar" style="height: [field_height_2]%; background-color: [field_bar_2-value];"></div>';
  $handler->display->display_options['fields']['field_bar_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bar_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bar_2']['type'] = 'list_key';
  /* Field: Content: Text 2 */
  $handler->display->display_options['fields']['field_text_2']['id'] = 'field_text_2';
  $handler->display->display_options['fields']['field_text_2']['table'] = 'field_data_field_text_2';
  $handler->display->display_options['fields']['field_text_2']['field'] = 'field_text_2';
  $handler->display->display_options['fields']['field_text_2']['label'] = '';
  $handler->display->display_options['fields']['field_text_2']['element_label_colon'] = FALSE;
  /* Field: Content: Arrow 1 */
  $handler->display->display_options['fields']['field_arrow_1']['id'] = 'field_arrow_1';
  $handler->display->display_options['fields']['field_arrow_1']['table'] = 'field_data_field_arrow_1';
  $handler->display->display_options['fields']['field_arrow_1']['field'] = 'field_arrow_1';
  $handler->display->display_options['fields']['field_arrow_1']['label'] = '';
  $handler->display->display_options['fields']['field_arrow_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_arrow_1']['alter']['text'] = '<div class="slideshow-arrow slideshow-arrow-[field_arrow_1]"></div>';
  $handler->display->display_options['fields']['field_arrow_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_arrow_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arrow_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_arrow_1']['type'] = 'list_key';
  /* Field: Content: Arrow 2 */
  $handler->display->display_options['fields']['field_arrow_2']['id'] = 'field_arrow_2';
  $handler->display->display_options['fields']['field_arrow_2']['table'] = 'field_data_field_arrow_2';
  $handler->display->display_options['fields']['field_arrow_2']['field'] = 'field_arrow_2';
  $handler->display->display_options['fields']['field_arrow_2']['label'] = '';
  $handler->display->display_options['fields']['field_arrow_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_arrow_2']['alter']['text'] = '<div class="slideshow-arrow slideshow-arrow-[field_arrow_2]"></div>';
  $handler->display->display_options['fields']['field_arrow_2']['element_type'] = '0';
  $handler->display->display_options['fields']['field_arrow_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arrow_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_arrow_2']['type'] = 'list_key';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow_item' => 'slideshow_item',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['slideshow'] = $view;

  return $export;
}
