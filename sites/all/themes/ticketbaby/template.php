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
  $element['date']['#description'] = '';
  $element['date']['#title_display'] = 'invisible';
}