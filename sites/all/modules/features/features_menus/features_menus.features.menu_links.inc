<?php
/**
 * @file
 * features_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function features_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-customer-menu_-ticket:node/add/ticket
  $menu_links['menu-customer-menu_-ticket:node/add/ticket'] = array(
    'menu_name' => 'menu-customer-menu',
    'link_path' => 'node/add/ticket',
    'router_path' => 'node/add/ticket',
    'link_title' => '+ Ticket',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-customer-menu_-ticket:node/add/ticket',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-customer-menu_account-details:user
  $menu_links['menu-customer-menu_account-details:user'] = array(
    'menu_name' => 'menu-customer-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Account details',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-customer-menu_account-details:user',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-customer-menu_add-new-ticket:node/add/ticket
  $menu_links['menu-customer-menu_add-new-ticket:node/add/ticket'] = array(
    'menu_name' => 'menu-customer-menu',
    'link_path' => 'node/add/ticket',
    'router_path' => 'node/add/ticket',
    'link_title' => 'Add new ticket',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-customer-menu_add-new-ticket:node/add/ticket',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-customer-menu_your-tickets:user/my-tickets',
  );
  // Exported menu link: menu-customer-menu_billing:<nolink>
  $menu_links['menu-customer-menu_billing:<nolink>'] = array(
    'menu_name' => 'menu-customer-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Billing',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-customer-menu_billing:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-customer-menu_messages:user/messages
  $menu_links['menu-customer-menu_messages:user/messages'] = array(
    'menu_name' => 'menu-customer-menu',
    'link_path' => 'user/messages',
    'router_path' => 'user/%',
    'link_title' => 'Messages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-customer-menu_messages:user/messages',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-customer-menu_posted:user/my-tickets
  $menu_links['menu-customer-menu_posted:user/my-tickets'] = array(
    'menu_name' => 'menu-customer-menu',
    'link_path' => 'user/my-tickets',
    'router_path' => 'user/my-tickets',
    'link_title' => 'Posted',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-customer-menu_posted:user/my-tickets',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-customer-menu_your-tickets:user/my-tickets',
  );
  // Exported menu link: menu-customer-menu_quotes:user/quotes
  $menu_links['menu-customer-menu_quotes:user/quotes'] = array(
    'menu_name' => 'menu-customer-menu',
    'link_path' => 'user/quotes',
    'router_path' => 'user/quotes',
    'link_title' => 'Quotes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-customer-menu_quotes:user/quotes',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-customer-menu_your-tickets:user/my-tickets
  $menu_links['menu-customer-menu_your-tickets:user/my-tickets'] = array(
    'menu_name' => 'menu-customer-menu',
    'link_path' => 'user/my-tickets',
    'router_path' => 'user/my-tickets',
    'link_title' => 'Your Tickets',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-customer-menu_your-tickets:user/my-tickets',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-defender-menu_account-details:user
  $menu_links['menu-defender-menu_account-details:user'] = array(
    'menu_name' => 'menu-defender-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Account details',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-defender-menu_account-details:user',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-defender-menu_calendar:<nolink>
  $menu_links['menu-defender-menu_calendar:<nolink>'] = array(
    'menu_name' => 'menu-defender-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Calendar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-defender-menu_calendar:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-defender-menu_messages:user/messages
  $menu_links['menu-defender-menu_messages:user/messages'] = array(
    'menu_name' => 'menu-defender-menu',
    'link_path' => 'user/messages',
    'router_path' => 'user/%',
    'link_title' => 'Messages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-defender-menu_messages:user/messages',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-about-us_about-us:<front>
  $menu_links['menu-footer-menu-about-us_about-us:<front>'] = array(
    'menu_name' => 'menu-footer-menu-about-us',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu-about-us_about-us:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-about-us_company:<front>
  $menu_links['menu-footer-menu-about-us_company:<front>'] = array(
    'menu_name' => 'menu-footer-menu-about-us',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Company',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu-about-us_company:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu-about-us_about-us:<front>',
  );
  // Exported menu link: menu-footer-menu-about-us_contact-us:<front>
  $menu_links['menu-footer-menu-about-us_contact-us:<front>'] = array(
    'menu_name' => 'menu-footer-menu-about-us',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu-about-us_contact-us:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu-about-us_about-us:<front>',
  );
  // Exported menu link: menu-footer-menu-are-you-a-ticke_:<nolink>
  $menu_links['menu-footer-menu-are-you-a-ticke_:<nolink>'] = array(
    'menu_name' => 'menu-footer-menu-are-you-a-ticke',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => '|',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu-are-you-a-ticke_:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-are-you-a-ticke_apply:user/register
  $menu_links['menu-footer-menu-are-you-a-ticke_apply:user/register'] = array(
    'menu_name' => 'menu-footer-menu-are-you-a-ticke',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Apply',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu-are-you-a-ticke_apply:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-are-you-a-ticke_sign-in:user
  $menu_links['menu-footer-menu-are-you-a-ticke_sign-in:user'] = array(
    'menu_name' => 'menu-footer-menu-are-you-a-ticke',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Sign in',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu-are-you-a-ticke_sign-in:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-support_1-877-454-0338:<nolink>
  $menu_links['menu-footer-menu-support_1-877-454-0338:<nolink>'] = array(
    'menu_name' => 'menu-footer-menu-support',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => '1-877-454-0338',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu-support_1-877-454-0338:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu-support_support:<front>',
  );
  // Exported menu link: menu-footer-menu-support_online-support:<nolink>
  $menu_links['menu-footer-menu-support_online-support:<nolink>'] = array(
    'menu_name' => 'menu-footer-menu-support',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Online Support',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu-support_online-support:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu-support_support:<front>',
  );
  // Exported menu link: menu-footer-menu-support_support:<front>
  $menu_links['menu-footer-menu-support_support:<front>'] = array(
    'menu_name' => 'menu-footer-menu-support',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Support',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu-support_support:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu-sign-in_:<nolink>
  $menu_links['menu-header-menu-sign-in_:<nolink>'] = array(
    'menu_name' => 'menu-header-menu-sign-in',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => '|',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu-sign-in_:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu-sign-in_help:<front>
  $menu_links['menu-header-menu-sign-in_help:<front>'] = array(
    'menu_name' => 'menu-header-menu-sign-in',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu-sign-in_help:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu-sign-in_log-in:user
  $menu_links['menu-header-menu-sign-in_log-in:user'] = array(
    'menu_name' => 'menu-header-menu-sign-in',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Log in',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-header-menu-sign-in_log-in:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu-sign-in_settings:user/settings
  $menu_links['menu-header-menu-sign-in_settings:user/settings'] = array(
    'menu_name' => 'menu-header-menu-sign-in',
    'link_path' => 'user/settings',
    'router_path' => 'user/settings',
    'link_title' => 'Settings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu-sign-in_settings:user/settings',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-header-menu-sign-in_log-in:user',
  );
  // Exported menu link: menu-header-menu-sign-in_sign-out:user/logout
  $menu_links['menu-header-menu-sign-in_sign-out:user/logout'] = array(
    'menu_name' => 'menu-header-menu-sign-in',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Sign out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu-sign-in_sign-out:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-header-menu-sign-in_log-in:user',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('+ Ticket');
  t('1-877-454-0338');
  t('About Us');
  t('Account details');
  t('Add new ticket');
  t('Apply');
  t('Billing');
  t('Calendar');
  t('Company');
  t('Contact Us');
  t('Help');
  t('Log in');
  t('Messages');
  t('Online Support');
  t('Posted');
  t('Quotes');
  t('Settings');
  t('Sign in');
  t('Sign out');
  t('Support');
  t('Your Tickets');
  t('|');


  return $menu_links;
}
