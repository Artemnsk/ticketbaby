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
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
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
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-customer-menu_tickets:<nolink>',
  );
  // Exported menu link: menu-customer-menu_messages:user/messages
  $menu_links['menu-customer-menu_messages:user/messages'] = array(
    'menu_name' => 'menu-customer-menu',
    'link_path' => 'user/messages',
    'router_path' => 'user/messages',
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
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-customer-menu_my-tickets:user/my-tickets
  $menu_links['menu-customer-menu_my-tickets:user/my-tickets'] = array(
    'menu_name' => 'menu-customer-menu',
    'link_path' => 'user/my-tickets',
    'router_path' => 'user/my-tickets',
    'link_title' => 'My tickets',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-customer-menu_my-tickets:user/my-tickets',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-customer-menu_tickets:<nolink>',
  );
  // Exported menu link: menu-customer-menu_tickets:<nolink>
  $menu_links['menu-customer-menu_tickets:<nolink>'] = array(
    'menu_name' => 'menu-customer-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Tickets',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-customer-menu_tickets:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
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
    'hidden' => 0,
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
    'hidden' => 0,
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
    'router_path' => 'user/messages',
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
  // Exported menu link: menu-defender-menu_tickets-defended:user/tickets-defended
  $menu_links['menu-defender-menu_tickets-defended:user/tickets-defended'] = array(
    'menu_name' => 'menu-defender-menu',
    'link_path' => 'user/tickets-defended',
    'router_path' => 'user/tickets-defended',
    'link_title' => 'Tickets defended',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-defender-menu_tickets-defended:user/tickets-defended',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-defender-menu_tickets:<nolink>',
  );
  // Exported menu link: menu-defender-menu_tickets-in-progress:user/tickets-in-progress
  $menu_links['menu-defender-menu_tickets-in-progress:user/tickets-in-progress'] = array(
    'menu_name' => 'menu-defender-menu',
    'link_path' => 'user/tickets-in-progress',
    'router_path' => 'user/tickets-in-progress',
    'link_title' => 'Tickets in progress',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-defender-menu_tickets-in-progress:user/tickets-in-progress',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-defender-menu_tickets:<nolink>',
  );
  // Exported menu link: menu-defender-menu_tickets-posted:user/search-ticket
  $menu_links['menu-defender-menu_tickets-posted:user/search-ticket'] = array(
    'menu_name' => 'menu-defender-menu',
    'link_path' => 'user/search-ticket',
    'router_path' => 'user/search-ticket',
    'link_title' => 'Tickets posted',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-defender-menu_tickets-posted:user/search-ticket',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-defender-menu_tickets:<nolink>',
  );
  // Exported menu link: menu-defender-menu_tickets-responded-to:user/tickets-responded-to
  $menu_links['menu-defender-menu_tickets-responded-to:user/tickets-responded-to'] = array(
    'menu_name' => 'menu-defender-menu',
    'link_path' => 'user/tickets-responded-to',
    'router_path' => 'user/tickets-responded-to',
    'link_title' => 'Tickets responded to',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-defender-menu_tickets-responded-to:user/tickets-responded-to',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-defender-menu_tickets:<nolink>',
  );
  // Exported menu link: menu-defender-menu_tickets:<nolink>
  $menu_links['menu-defender-menu_tickets:<nolink>'] = array(
    'menu_name' => 'menu-defender-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Tickets',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-defender-menu_tickets:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
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
  t('1-877-454-0338');
  t('About Us');
  t('Account details');
  t('Add new ticket');
  t('Calendar');
  t('Company');
  t('Contact Us');
  t('Help');
  t('Log in');
  t('Messages');
  t('My tickets');
  t('Online Support');
  t('Settings');
  t('Sign in');
  t('Sign out');
  t('Support');
  t('Tickets');
  t('Tickets defended');
  t('Tickets in progress');
  t('Tickets posted');
  t('Tickets responded to');
  t('|');


  return $menu_links;
}
