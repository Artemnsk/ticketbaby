<?php

/**
 * Implements hook_process_node().
 */
function ticketbaby_process_node(&$variables){
  // Create "respons" link on ticket page.
  global $user;
  if($variables['type'] == 'ticket'){
    $variables['title'] = '';
  }
  if(!$variables['teaser'] && in_array("defender", $user->roles)||in_array("administrator", $user->roles)){
      $variables['defender_respond'] = l("You have 24hrs to respond to client.", "node/add/offer/". $variables['nid']);
  }
}
