<?php

/**
 * Implements hook_process_page().
 */
function ticketbaby_process_page(&$variables) {
  if($variables['is_front']){
    $variables['title'] = '';
  }

  if(arg(0). "/". arg(1). "/". arg(2) == "node/add/ticket"){
    $variables['title'] = '';
  }
  
  if(arg(0). "/". arg(1). "/". arg(2) == "node/add/offer"){
    $variables['title'] = 'Respond';
  }
  
  // Ticket node page title should be constant.
  if(isset($variables['node']->type) && $variables['node']->type == 'ticket'){
    $variables['title'] = 'Defence request';
  }
  
  // Offer node page title should be constant.
  if(isset($variables['node']->type) && $variables['node']->type == 'offer'){
    $variables['title'] = 'Respond';
  }
  
  // We don't use breadcrumb.
  $variables['breadcrumb'] = NULL;
  
}