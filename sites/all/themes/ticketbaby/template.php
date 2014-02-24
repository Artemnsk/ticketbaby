<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * ticketbaby theme.
 */

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

function ticketbaby_menu_link__menu_header_menu_sign_in(array $variables) {
  $output = '';
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