<?php
/**
 * @file
 * features_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function features_permissions_user_default_permissions() {
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

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer commerce_customer_profile entities'.
  $permissions['administer commerce_customer_profile entities'] = array(
    'name' => 'administer commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer ctools access ruleset'.
  $permissions['administer ctools access ruleset'] = array(
    'name' => 'administer ctools access ruleset',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools_access_ruleset',
  );

  // Exported permission: 'administer customer profile types'.
  $permissions['administer customer profile types'] = array(
    'name' => 'administer customer profile types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_customer_profile entities'.
  $permissions['create commerce_customer_profile entities'] = array(
    'name' => 'create commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
      'defender' => 'defender',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_customer_profile entities of bundle billing'.
  $permissions['create commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'create commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create offer content'.
  $permissions['create offer content'] = array(
    'name' => 'create offer content',
    'roles' => array(
      'administrator' => 'administrator',
      'defender' => 'defender',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ticket content'.
  $permissions['create ticket content'] = array(
    'name' => 'create ticket content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'customer' => 'customer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any offer content'.
  $permissions['delete any offer content'] = array(
    'name' => 'delete any offer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ticket content'.
  $permissions['delete any ticket content'] = array(
    'name' => 'delete any ticket content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own offer content'.
  $permissions['delete own offer content'] = array(
    'name' => 'delete own offer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ticket content'.
  $permissions['delete own ticket content'] = array(
    'name' => 'delete own ticket content',
    'roles' => array(
      'administrator' => 'administrator',
      'customer' => 'customer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any commerce_customer_profile entity'.
  $permissions['edit any commerce_customer_profile entity'] = array(
    'name' => 'edit any commerce_customer_profile entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_customer_profile entity of bundle billing'.
  $permissions['edit any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'edit any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any customer_profile profile'.
  $permissions['edit any customer_profile profile'] = array(
    'name' => 'edit any customer_profile profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any defender_profile profile'.
  $permissions['edit any defender_profile profile'] = array(
    'name' => 'edit any defender_profile profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any offer content'.
  $permissions['edit any offer content'] = array(
    'name' => 'edit any offer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ticket content'.
  $permissions['edit any ticket content'] = array(
    'name' => 'edit any ticket content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own commerce_customer_profile entities'.
  $permissions['edit own commerce_customer_profile entities'] = array(
    'name' => 'edit own commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
      'defender' => 'defender',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_customer_profile entities of bundle billing'.
  $permissions['edit own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'edit own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own customer_profile profile'.
  $permissions['edit own customer_profile profile'] = array(
    'name' => 'edit own customer_profile profile',
    'roles' => array(
      'customer' => 'customer',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own defender_profile profile'.
  $permissions['edit own defender_profile profile'] = array(
    'name' => 'edit own defender_profile profile',
    'roles' => array(
      'defender' => 'defender',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own offer content'.
  $permissions['edit own offer content'] = array(
    'name' => 'edit own offer content',
    'roles' => array(
      'administrator' => 'administrator',
      'defender' => 'defender',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ticket content'.
  $permissions['edit own ticket content'] = array(
    'name' => 'edit own ticket content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any commerce_customer_profile entity'.
  $permissions['view any commerce_customer_profile entity'] = array(
    'name' => 'view any commerce_customer_profile entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_customer_profile entity of bundle billing'.
  $permissions['view any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'view any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any customer_profile profile'.
  $permissions['view any customer_profile profile'] = array(
    'name' => 'view any customer_profile profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'view any defender_profile profile'.
  $permissions['view any defender_profile profile'] = array(
    'name' => 'view any defender_profile profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'view own commerce_customer_profile entities'.
  $permissions['view own commerce_customer_profile entities'] = array(
    'name' => 'view own commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_customer_profile entities of bundle billing'.
  $permissions['view own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'view own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own customer_profile profile'.
  $permissions['view own customer_profile profile'] = array(
    'name' => 'view own customer_profile profile',
    'roles' => array(
      'customer' => 'customer',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own defender_profile profile'.
  $permissions['view own defender_profile profile'] = array(
    'name' => 'view own defender_profile profile',
    'roles' => array(
      'defender' => 'defender',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
