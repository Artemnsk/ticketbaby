<?php
/**
 * @file
 * features_profiles.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function features_profiles_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_experience'
  $field_bases['field_experience'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_experience',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'less than year',
        1 => '1-3 years',
        2 => 'more than 3 years',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  return $field_bases;
}
