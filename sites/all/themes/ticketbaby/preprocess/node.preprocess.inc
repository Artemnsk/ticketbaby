<?php

/**
 * Implements hook_preprocess_page().
 */
function ticketbaby_preprocess_node(&$variables) {
  if($variables['type'] == 'offer'){
    drupal_add_js(drupal_get_path('module', 'tb_offer'). '/js/offer_expanded.js');
    $variables['ticket_content'] = drupal_render(node_view(node_load($variables['field_ticket'][LANGUAGE_NONE]['0']['target_id'])));
  }
  //dpm($variables);
}
