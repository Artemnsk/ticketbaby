<?php
/**
 * @file
 * features_profiles.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function features_profiles_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'profile2-customer_profile-field_experience'
  $field_instances['profile2-customer_profile-field_experience'] = array(
    'bundle' => 'customer_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Your driving experience',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_experience',
    'label' => 'Experience',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'profile2-defender_profile-field_working_state'
  $field_instances['profile2-defender_profile-field_working_state'] = array(
    'bundle' => 'defender_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'account' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_working_state',
    'label' => 'Which location you wish to receive tickets',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Experience');
  t('Which location you wish to receive tickets');
  t('Your driving experience');

  return $field_instances;
}
