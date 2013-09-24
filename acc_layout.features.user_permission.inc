<?php
/**
 * @file
 * acc_layout.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function acc_layout_user_default_permissions() {
  $permissions = array();

  // Exported permission: import acc_dashboard feeds.
  $permissions['import acc_dashboard feeds'] = array(
    'name' => 'import acc_dashboard feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
