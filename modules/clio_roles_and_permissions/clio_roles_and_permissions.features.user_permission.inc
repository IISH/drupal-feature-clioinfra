<?php
/**
 * @file
 * clio_roles_and_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function clio_roles_and_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'administer clioinfra'.
  $permissions['administer clioinfra'] = array(
    'name' => 'administer clioinfra',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'clio_dataset',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer statplanet'.
  $permissions['administer statplanet'] = array(
    'name' => 'administer statplanet',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'clio_statplanet',
  );

  // Exported permission: 'clear dkan_file feeds'.
  $permissions['clear dkan_file feeds'] = array(
    'name' => 'clear dkan_file feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear dkan_link feeds'.
  $permissions['clear dkan_link feeds'] = array(
    'name' => 'clear dkan_link feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'convert clio to csv'.
  $permissions['convert clio to csv'] = array(
    'name' => 'convert clio to csv',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'clio_convert',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dataset content'.
  $permissions['create dataset content'] = array(
    'name' => 'create dataset content',
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create publication content'.
  $permissions['create publication content'] = array(
    'name' => 'create publication content',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create resource content'.
  $permissions['create resource content'] = array(
    'name' => 'create resource content',
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dataset content'.
  $permissions['delete any dataset content'] = array(
    'name' => 'delete any dataset content',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any publication content'.
  $permissions['delete any publication content'] = array(
    'name' => 'delete any publication content',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any resource content'.
  $permissions['delete any resource content'] = array(
    'name' => 'delete any resource content',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dataset content'.
  $permissions['delete own dataset content'] = array(
    'name' => 'delete own dataset content',
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own publication content'.
  $permissions['delete own publication content'] = array(
    'name' => 'delete own publication content',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own resource content'.
  $permissions['delete own resource content'] = array(
    'name' => 'delete own resource content',
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in countries'.
  $permissions['delete terms in countries'] = array(
    'name' => 'delete terms in countries',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in format'.
  $permissions['delete terms in format'] = array(
    'name' => 'delete terms in format',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in indicators'.
  $permissions['delete terms in indicators'] = array(
    'name' => 'delete terms in indicators',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'download datasets'.
  $permissions['download datasets'] = array(
    'name' => 'download datasets',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'clio_search',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dataset content'.
  $permissions['edit any dataset content'] = array(
    'name' => 'edit any dataset content',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any publication content'.
  $permissions['edit any publication content'] = array(
    'name' => 'edit any publication content',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any resource content'.
  $permissions['edit any resource content'] = array(
    'name' => 'edit any resource content',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dataset content'.
  $permissions['edit own dataset content'] = array(
    'name' => 'edit own dataset content',
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own publication content'.
  $permissions['edit own publication content'] = array(
    'name' => 'edit own publication content',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own resource content'.
  $permissions['edit own resource content'] = array(
    'name' => 'edit own resource content',
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in countries'.
  $permissions['edit terms in countries'] = array(
    'name' => 'edit terms in countries',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in format'.
  $permissions['edit terms in format'] = array(
    'name' => 'edit terms in format',
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in indicators'.
  $permissions['edit terms in indicators'] = array(
    'name' => 'edit terms in indicators',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'import dkan_file feeds'.
  $permissions['import dkan_file feeds'] = array(
    'name' => 'import dkan_file feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import dkan_link feeds'.
  $permissions['import dkan_link feeds'] = array(
    'name' => 'import dkan_link feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'manage datastore'.
  $permissions['manage datastore'] = array(
    'name' => 'manage datastore',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'dkan_datastore',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search datasets'.
  $permissions['search datasets'] = array(
    'name' => 'search datasets',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'clio_search',
  );

  // Exported permission: 'unlock dkan_file feeds'.
  $permissions['unlock dkan_file feeds'] = array(
    'name' => 'unlock dkan_file feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock dkan_link feeds'.
  $permissions['unlock dkan_link feeds'] = array(
    'name' => 'unlock dkan_link feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'system',
  );

  return $permissions;
}
