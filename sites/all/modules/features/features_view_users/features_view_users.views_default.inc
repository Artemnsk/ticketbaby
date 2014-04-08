<?php
/**
 * @file
 * features_view_users.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_view_users_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'picture',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_users_node']['id'] = 'reverse_field_users_node';
  $handler->display->display_options['relationships']['reverse_field_users_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_users_node']['field'] = 'reverse_field_users_node';
  $handler->display->display_options['relationships']['reverse_field_users_node']['label'] = 'dialog';
  $handler->display->display_options['relationships']['reverse_field_users_node']['required'] = TRUE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['empty'] = '<img src="/sites/default/files/anonymous.jpg" />';
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'thumbnail';
  /* Field: User: Fullname */
  $handler->display->display_options['fields']['field_fullname']['id'] = 'field_fullname';
  $handler->display->display_options['fields']['field_fullname']['table'] = 'field_data_field_fullname';
  $handler->display->display_options['fields']['field_fullname']['field'] = 'field_fullname';
  $handler->display->display_options['fields']['field_fullname']['label'] = '';
  $handler->display->display_options['fields']['field_fullname']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Available defenders */
  $handler = $view->new_display('page', 'Available defenders', 'available_defenders');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Thank you for choosing Ticketbaby.com!';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['path'] = 'ticket-created';

  /* Display: Defender of ticket */
  $handler = $view->new_display('page', 'Defender of ticket', 'defender_of_ticket');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'picture',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'user';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_defender_node']['id'] = 'reverse_field_defender_node';
  $handler->display->display_options['relationships']['reverse_field_defender_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_defender_node']['field'] = 'reverse_field_defender_node';
  $handler->display->display_options['relationships']['reverse_field_defender_node']['label'] = 'Ticket';
  $handler->display->display_options['relationships']['reverse_field_defender_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_defender_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'ticket/%/defender';

  /* Display: Cus: defenders */
  $handler = $view->new_display('page', 'Cus: defenders', 'defenders');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'picture' => 'picture',
    'field_fullname' => 'field_fullname',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fullname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Thank you for choosing Ticketbaby.com!';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['label'] = 'Lawyer profile';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'defender_profile' => 'defender_profile',
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_defender_node']['id'] = 'reverse_field_defender_node';
  $handler->display->display_options['relationships']['reverse_field_defender_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_defender_node']['field'] = 'reverse_field_defender_node';
  $handler->display->display_options['relationships']['reverse_field_defender_node']['label'] = 'ticket of defender';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Fullname */
  $handler->display->display_options['fields']['field_fullname']['id'] = 'field_fullname';
  $handler->display->display_options['fields']['field_fullname']['table'] = 'field_data_field_fullname';
  $handler->display->display_options['fields']['field_fullname']['field'] = 'field_fullname';
  $handler->display->display_options['fields']['field_fullname']['label'] = '';
  $handler->display->display_options['fields']['field_fullname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_fullname']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_fullname']['element_label_colon'] = FALSE;
  /* Field: Profile: Location */
  $handler->display->display_options['fields']['field_working_state']['id'] = 'field_working_state';
  $handler->display->display_options['fields']['field_working_state']['table'] = 'field_data_field_working_state';
  $handler->display->display_options['fields']['field_working_state']['field'] = 'field_working_state';
  $handler->display->display_options['fields']['field_working_state']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_working_state']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_working_state']['alter']['path'] = 'user/[uid]';
  /* Field: SUM OF KEYS */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['relationship'] = 'reverse_field_defender_node';
  $handler->display->display_options['fields']['field_status']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_status']['ui_name'] = 'SUM OF KEYS';
  $handler->display->display_options['fields']['field_status']['label'] = 'In Progress';
  $handler->display->display_options['fields']['field_status']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_status']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_status']['type'] = 'list_key';
  /* Field: COUNT OF TICKETS */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_defender_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'COUNT OF TICKETS';
  $handler->display->display_options['fields']['nid']['label'] = 'Defended';
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['label'] = 'Last Online';
  $handler->display->display_options['fields']['access']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['access']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['access']['date_format'] = 'tickets';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );
  /* Filter criterion: Profile: Location (field_working_state) */
  $handler->display->display_options['filters']['field_working_state_value']['id'] = 'field_working_state_value';
  $handler->display->display_options['filters']['field_working_state_value']['table'] = 'field_data_field_working_state';
  $handler->display->display_options['filters']['field_working_state_value']['field'] = 'field_working_state_value';
  $handler->display->display_options['filters']['field_working_state_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_working_state_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_working_state_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_working_state_value']['expose']['operator_id'] = 'field_working_state_value_op';
  $handler->display->display_options['filters']['field_working_state_value']['expose']['operator'] = 'field_working_state_value_op';
  $handler->display->display_options['filters']['field_working_state_value']['expose']['identifier'] = 'field_working_state_value';
  $handler->display->display_options['filters']['field_working_state_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'defenders';
  $export['users'] = $view;

  return $export;
}
