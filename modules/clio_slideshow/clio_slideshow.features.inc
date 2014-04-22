<?php
/**
 * @file
 * clio_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function clio_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function clio_slideshow_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function clio_slideshow_node_info() {
  $items = array(
    'slideshow_item' => array(
      'name' => t('Slideshow item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
