<?php
/**
 * @file
 * features_node_offer.features.inc
 */

/**
 * Implements hook_node_info().
 */
function features_node_offer_node_info() {
  $items = array(
    'offer' => array(
      'name' => t('Offer'),
      'base' => 'node_content',
      'description' => t('Defender\'s offer to ticket'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
