<?php
/**
 * @file
 * clio_menus_and_blocks.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function clio_menus_and_blocks_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-explore-discover.
  $menus['menu-explore-discover'] = array(
    'menu_name' => 'menu-explore-discover',
    'title' => 'Explore & discover',
    'description' => '',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => '',
  );
  // Exported menu: menu-login.
  $menus['menu-login'] = array(
    'menu_name' => 'menu-login',
    'title' => 'Login',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Explore & discover');
  t('Footer menu');
  t('Login');

  return $menus;
}
