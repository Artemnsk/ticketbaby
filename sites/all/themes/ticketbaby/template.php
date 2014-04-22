<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * ticketbaby theme.
 */


/*
 * For unformatted fields - row in Views template.
 */
function ticketbaby_views_fields_row($field){
    $text = '';
    if(isset($field->wrapper_prefix)) $text .= $field->wrapper_prefix;
    if(isset($field->label_html)) $text .= $field->label_html;
    if(isset($field->content)) $text .= $field->content;
    if(isset($field->wrapper_suffix)) $text .= $field->wrapper_suffix;
    return $text;
}

/**
 * Date field themization override.
 * Implements hook_theme_registry_alter().
 */
function ticketbaby_theme_registry_alter(&$theme_registry) {
  if (isset($theme_registry['date_combo'])) {
    $theme_registry['date_combo']['function'] = 'theme_ticketbaby_date_combo';
  }
}

/**
 * Date combo theme override.
 */
function theme_ticketbaby_date_combo($variables) {
  return theme('form_element', $variables['element']);
}

function ticketbaby_date_popup_process_alter(&$element, &$form_state, $context){
  if($element['#field']['field_name'] == 'field_date_of_ticket'){
    $element['date']['#attributes']['placeholder'] = $element['#description'];
    $element['#description'] = '';
  }
  $element['date']['#description'] = '';
  $element['date']['#title_display'] = 'invisible';
}

/*
 * Menu in header customization.
 */
function ticketbaby_menu_link__menu_header_menu_sign_in(array $variables){
  $element = $variables['element'];
  
  
  global $user;
  if($element['#original_link']['link_path'] == "user"){
    $element['#title'] = user_is_logged_in() ? $user->name : t("Log in");
    $element['#below'] = user_is_logged_in() ? $element['#below'] : array();
  }
  
  
  $sub_menu = '';
  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  if($element['#original_link']['link_path'] == "user" && user_is_logged_in()){
    $output = "<span>". $element['#title']. "</span>";
  }else{
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  }
  $output = '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";

  return $output;
}

/*
 * Menu in header customization.
 */
function ticketbaby_menu_link__menu_customer_menu(array $variables){
    $element = $variables['element'];
    $sub_menu = '';

    // Defining if we are on tickets page.
    if($element['#href'] == "user/my-tickets"){
        if(tb_user_menu_define_ticket_id_customer($_GET['q']) !== null){
            $element['#attributes']['class'][] = "active-trail";
        }
    }

    // Defining if we are on defenders page
    if($element['#href'] == "defenders"){
        if(tb_user_menu_define_defender_id_customer($_GET['q']) !== null){
            $element['#attributes']['class'][] = "active-trail";
        }
    }

    // Defining if we are on messages page
    if($element['#href'] == "user/messages"){
        $element['#title'] .= tb_messages_get_new_messages_quantity();
        if(tb_user_menu_define_messages_customer($_GET['q']) !== null){
            $element['#attributes']['class'][] = "active-trail";
        }
    }

    if ($element['#below']) {
        $sub_menu = drupal_render($element['#below']);
    }
    if($element['#original_link']['link_path'] == "user" && user_is_logged_in()){
        $output = "<span>". $element['#title']. "</span>";
    }else{
        $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    }

    $output = '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";

    return $output;
}

/*
 * Menu in header customization.
 */
function ticketbaby_menu_link__menu_defender_menu(array $variables){
    $element = $variables['element'];
    $sub_menu = '';

    // Defining if we are on messages page
    if($element['#href'] == "user/messages"){
        $element['#title'] .= tb_messages_get_new_messages_quantity();
        if(tb_user_menu_define_messages_customer($_GET['q']) !== null){
            $element['#attributes']['class'][] = "active-trail";
        }
    }
    // Defining if we are on tickets page.
    if($element['#href'] == "tickets/posted"){
        if(tb_user_menu_ticket_type_defender($_GET['q']) !== null){
            $element['#attributes']['class'][] = "active-trail";
        }
    }

    if ($element['#below']) {
        $sub_menu = drupal_render($element['#below']);
    }
    if($element['#original_link']['link_path'] == "user" && user_is_logged_in()){
        $output = "<span>". $element['#title']. "</span>";
    }else{
        $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    }
    $output = '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";

    return $output;
}

/*
 * Override user profile template.
 */
function ticketbaby_preprocess_user_profile(&$vars){
    $viewed_user = $vars['elements']['#account'];
    $roles = $viewed_user->roles;
    $vars['view_mode'] = $vars['elements']['#view_mode'];
    if($vars['view_mode'] == "full"){
        if(in_array('defender', $roles)){
            $vars['contact_link'] = l('Contact', drupal_get_path_alias("node/add/dialog/user/$viewed_user->uid"));
            $vars['is_defender'] = true;
            // If picture is default let's add specific class to it to add CSS style.
            if($vars['elements']['#account']->picture === NULL){
                $vars['user_profile']['user_picture']['#prefix'] = "<span class='anonymous'>";
                $vars['user_profile']['user_picture']['#suffix'] = "</span>";
            }
            // Add "Lawyer" to username.
            if(isset($vars['user_profile']['field_fullname'])){
                $vars['user_profile']['field_fullname'][0]['#markup'] .= '<br />Lawyer';
            }
            // Counting defended/in progress tickets.
            $data = tb_user_count_tickets($vars['elements']['#account']->uid);
            $vars['user_profile']['tickets_defended'] = $data['defended'];
            $vars['user_profile']['tickets_in_progress'] = $data['in_progress'];

            // Last login.
            $vars['user_profile']['last_online'] = date('M d, Y', $viewed_user->login);
            // Find right profile. What if defender will have multiple arrays?
            $profile_key = false;
            foreach($vars['user_profile']['profile_defender_profile']['view']['profile2'] as $key => $val){
                if($val['#bundle'] == 'defender_profile'){
                    $profile_key = $key;
                }
            }

            if($profile_key !== false){
                $profile = $vars['user_profile']['profile_defender_profile']['view']['profile2'][$profile_key];
                // Working state.
                if(isset($profile['field_working_state'])){
                    $vars['user_profile']['location'] = $profile['field_working_state'];
                }
                // Overview.
                if(isset($profile['field_overview'])){
                    $vars['user_profile']['overview'] = $profile['field_overview'];
                }
                // Feedback.
                $vars['user_profile']['feedback'] = $profile['field_defender_feedback'];
            }
            //dpm($vars);
        }else{
            $vars['is_defender'] = false;
        }
    }elseif($vars['view_mode'] == "dialogs"){
        global $user;
        if($vars['elements']['#account']->uid == $user->uid){
            unset($vars['user_profile']['user_picture']);
            unset($vars['user_profile']['field_fullname']);
        }
    }
}

/*
 * override form templates.
 */
function ticketbaby_theme(){
    return array(
        'offer_node_form' => array(
            'arguments' => array('form' => NULL),
            'template' => 'templates/forms/offer-node-form',
            'render element' => 'form'
        ),
    );
}