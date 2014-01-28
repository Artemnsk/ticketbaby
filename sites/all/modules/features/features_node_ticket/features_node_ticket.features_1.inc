<?php
/**
 * @file
 * features_node_ticket.features.inc
 */

/**
 * Implements hook_node_info().
 */
function features_node_ticket_node_info() {
  $items = array(
    'ticket' => array(
      'name' => t('Ticket'),
      'base' => 'node_content',
      'description' => t('Customer ticket.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
