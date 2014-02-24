<?php

/**
 * Implements hook_preprocess_page().
 */
function ticketbaby_preprocess_node(&$variables) {
  if($variables['type'] == 'offer'){
    // We will render teaser of ticket and pass it's content to quotes template.
    drupal_add_js(drupal_get_path('module', 'tb_offer'). '/js/offer_expanded.js');
    $node = node_load($variables['field_ticket'][LANGUAGE_NONE]['0']['target_id']);
    $node->teaser = true;
    $variables['ticket_content'] = node_view($node, "teaser");
    $variables['ticket_content']['posted'] = date('d/m/y', $node->created);
    $author = user_load($node->uid);
    $variables['ticket_content']['author_fullname'] = $author->field_fullname[LANGUAGE_NONE][0]['value'];

    // Now we should load additional info for quotes.
    
  }
}