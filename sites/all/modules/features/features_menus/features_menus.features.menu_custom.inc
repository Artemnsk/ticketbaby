<?php
/**
 * @file
 * features_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function features_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-customer-menu.
  $menus['menu-customer-menu'] = array(
    'menu_name' => 'menu-customer-menu',
    'title' => 'Customer menu',
    'description' => '',
  );
  // Exported menu: menu-defender-menu.
  $menus['menu-defender-menu'] = array(
    'menu_name' => 'menu-defender-menu',
    'title' => 'Defender menu',
    'description' => '',
  );
  // Exported menu: menu-footer-menu-about-us.
  $menus['menu-footer-menu-about-us'] = array(
    'menu_name' => 'menu-footer-menu-about-us',
    'title' => 'Footer menu about us',
    'description' => '',
  );
  // Exported menu: menu-footer-menu-are-you-a-ticke.
  $menus['menu-footer-menu-are-you-a-ticke'] = array(
    'menu_name' => 'menu-footer-menu-are-you-a-ticke',
    'title' => 'Footer menu are you a ticket defender',
    'description' => '',
  );
  // Exported menu: menu-footer-menu-support.
  $menus['menu-footer-menu-support'] = array(
    'menu_name' => 'menu-footer-menu-support',
    'title' => 'Footer menu support',
    'description' => '',
  );
  // Exported menu: menu-header-menu-sign-in.
  $menus['menu-header-menu-sign-in'] = array(
    'menu_name' => 'menu-header-menu-sign-in',
    'title' => 'Header menu sign in',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Customer menu');
  t('Defender menu');
  t('Footer menu about us');
  t('Footer menu are you a ticket defender');
  t('Footer menu support');
  t('Header menu sign in');


  return $menus;
}
