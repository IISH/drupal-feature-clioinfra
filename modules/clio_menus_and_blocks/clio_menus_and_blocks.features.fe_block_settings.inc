<?php
/**
 * @file
 * clio_menus_and_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function clio_menus_and_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-explore-discover'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-explore-discover',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'clioinfra' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'clioinfra',
        'weight' => -31,
      ),
      'dkan' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dkan',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-footer-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'clioinfra' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'clioinfra',
        'weight' => -27,
      ),
      'dkan' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dkan',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-login',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'clioinfra' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'clioinfra',
        'weight' => 0,
      ),
      'dkan' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dkan',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'clioinfra' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'clioinfra',
        'weight' => 0,
      ),
      'dkan' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dkan',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-news-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'news-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'news-publications',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'clioinfra' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'clioinfra',
        'weight' => -27,
      ),
      'dkan' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dkan',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-news-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'news-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'clioinfra' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'clioinfra',
        'weight' => -29,
      ),
      'dkan' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dkan',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-publications-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'publications-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'news-publications',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'clioinfra' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'clioinfra',
        'weight' => -26,
      ),
      'dkan' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dkan',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-slideshow-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'slideshow-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'clioinfra' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'clioinfra',
        'weight' => 0,
      ),
      'dkan' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dkan',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
