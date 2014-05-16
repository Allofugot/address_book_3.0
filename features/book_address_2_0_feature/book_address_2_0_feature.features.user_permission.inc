<?php
/**
 * @file
 * book_address_2_0_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function book_address_2_0_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access method'.
  $permissions['access method'] = array(
    'name' => 'access method',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'book_address',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  return $permissions;
}
