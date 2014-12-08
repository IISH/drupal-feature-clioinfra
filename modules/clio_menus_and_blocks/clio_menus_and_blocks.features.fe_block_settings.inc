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

  $export['clio_blocks-address'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'address',
    'module' => 'clio_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 1,
      ),
      'clioinfra' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'clioinfra',
        'weight' => 1,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['clio_blocks-correspondence'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'correspondence',
    'module' => 'clio_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 2,
      ),
      'clioinfra' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'clioinfra',
        'weight' => 2,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 2,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['clio_blocks-partners'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'partners',
    'module' => 'clio_blocks',
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
        'region' => 'partners',
        'status' => 1,
        'theme' => 'clioinfra',
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
    'visibility' => 1,
  );

  $export['clio_blocks-telephone'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'telephone',
    'module' => 'clio_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 3,
      ),
      'clioinfra' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'clioinfra',
        'weight' => 3,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 3,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['clio_blocks-visualize'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'visualize',
    'module' => 'clio_blocks',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'clioinfra' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'clioinfra',
        'weight' => -15,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

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
        'weight' => -16,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Explore & discover our datasets',
    'visibility' => 1,
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
        'weight' => -14,
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
        'weight' => -17,
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
    'pages' => 'content/news-publications',
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
        'weight' => -12,
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
        'weight' => -14,
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
    'pages' => 'content/news-publications',
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
        'weight' => -11,
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
