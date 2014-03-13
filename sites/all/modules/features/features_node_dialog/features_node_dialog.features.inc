<?php
/**
 * @file
 * features_node_dialog.features.inc
 */

/**
 * Implements hook_node_info().
 */
function features_node_dialog_node_info() {
  $items = array(
    'dialog' => array(
      'name' => t('Dialog'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
