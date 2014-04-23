<?php

/**
 * Implements hook_preprocess_page().
 */
function ticketbaby_preprocess_node(&$variables) {
    // Sort comments by Date DESC.
    if(isset($variables['content']['comments'])){
        $variables['content']['comments']['comments']['#sorted'] = false;
        $weight = 50;
        foreach($variables['content']['comments']['comments'] as $id => $comment){
            if(isset($comment['#entity_type']) && $comment['#entity_type'] == 'comment'){
                $variables['content']['comments']['comments'][$id]['#weight'] = $weight;
                $weight--;
            }
        }
    }
    //dpm($variables);
  if($variables['type'] == 'ticket'){
    // DRUPAL TEASER DISPLAY IS FOR DEFENDER QUOTES PAGE.
    // DRUPAL FULL DISPLAY IS FOR CUSTOMER.
    global $user;
    if(in_array('customer', $user->roles)){
      $variables['user_role'] = 'customer';
    }else{
      $variables['user_role'] = 'defender';

        // Load reply form.
        form_load_include($form_state, 'inc', 'node', 'node.pages');
        $node = (object) array(
            'uid' => $user->uid,
            'name' => (isset($user->name) ? $user->name : ''),
            'type' => 'dialog',
            'language' => LANGUAGE_NONE,
        );
        node_object_prepare($node);
        $form_state['build_info']['args'] = array($node);
        $form = drupal_get_form('dialog_node_form', $node);
        $variables['reply_link'] = "<div id='contact-dialog'>Reply</div>". render($form);
    }
    $variables['content']['title'] = $variables['title'];
    $variables['content']['posted'] = date('F j, Y', $variables['created']);
  }
  if($variables['type'] == 'offer'){
    // DRUPAL FULL DISPLAY IS FOR CUSTOMER PAGE.
    //dpm($variables);
    $author = user_view(user_load($variables['uid']));
    //dpm($author);
    foreach($author['profile_defender_profile']['view']['profile2'] as $key => $profile){
        $variables['author_location'] = $profile['field_working_state'];
        $variables['author_location']['#label_display'] = 'hidden';
    }
    $variables['author_picture'] = $author['user_picture'];
    $variables['author_fullname'] = $author['field_fullname'];
    $variables['author_fullname'][0]['#markup'] .= ", Lawyer";
    $variables['content']['posted'] = date('F j, Y', $variables['created']);
    //dpm($variables);
    // Now we should load additional info for quotes.
    
  }
}