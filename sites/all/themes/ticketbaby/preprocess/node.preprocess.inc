<?php

/**
 * Implements hook_preprocess_page().
 */
function ticketbaby_preprocess_node(&$variables) {
  if($variables['type'] == 'offer'){
    drupal_add_js(drupal_get_path('module', 'tb_offer'). '/js/offer_expanded.js');
    $node = node_load($variables['field_ticket'][LANGUAGE_NONE]['0']['target_id']);
    $node->teaser = true;
    $variables['ticket_content'] = drupal_render(node_view($node, "teaser"));
  }
  //dpm($variables);
}
