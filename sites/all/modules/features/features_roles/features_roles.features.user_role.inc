<?php
/**
 * @file
 * features_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function features_roles_user_default_roles() {
  $roles = array();

  // Exported role: customer.
  $roles['customer'] = array(
    'name' => 'customer',
    'weight' => 4,
  );

  // Exported role: defender.
  $roles['defender'] = array(
    'name' => 'defender',
    'weight' => 3,
  );

  return $roles;
}
