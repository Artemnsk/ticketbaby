<?php
/**
 * @file
 * feature_account.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_account_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_fullname'
  $field_instances['user-user-field_fullname'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_fullname',
    'label' => 'Fullname',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Fullname');

  return $field_instances;
}
