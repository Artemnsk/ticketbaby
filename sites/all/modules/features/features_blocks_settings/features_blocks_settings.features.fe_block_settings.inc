<?php
/**
 * @file
 * features_blocks_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_blocks_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-customer-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-customer-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'customer' => 5,
    ),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'ticketbaby' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'ticketbaby',
        'weight' => -15,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-defender-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-defender-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'defender' => 4,
    ),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'ticketbaby' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'ticketbaby',
        'weight' => -16,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu-about-us'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-footer-menu-about-us',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'ticketbaby' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ticketbaby',
        'weight' => -17,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu-are-you-a-ticke'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-footer-menu-are-you-a-ticke',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'ticketbaby' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ticketbaby',
        'weight' => -15,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu-support'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-footer-menu-support',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'ticketbaby' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ticketbaby',
        'weight' => -16,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-header-menu-sign-in'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-header-menu-sign-in',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'ticketbaby' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'ticketbaby',
        'weight' => -14,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['nice_menus-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'nice_menus',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(
      'customer' => 5,
    ),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'ticketbaby' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ticketbaby',
        'weight' => -16,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['nice_menus-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 2,
    'module' => 'nice_menus',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(
      'defender' => 4,
    ),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'ticketbaby' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ticketbaby',
        'weight' => -15,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['tb_user_menu-customer_tabs'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'customer_tabs',
    'module' => 'tb_user_menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'customer' => 5,
    ),
    'themes' => array(
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'ticketbaby' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ticketbaby',
        'weight' => -15,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
