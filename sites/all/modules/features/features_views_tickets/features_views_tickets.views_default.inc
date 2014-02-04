<?php
/**
 * @file
 * features_views_tickets.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_views_tickets_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tickets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tickets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My tickets';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You have not defended any ticket yet.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Ticket category */
  $handler->display->display_options['fields']['field_ticket_category']['id'] = 'field_ticket_category';
  $handler->display->display_options['fields']['field_ticket_category']['table'] = 'field_data_field_ticket_category';
  $handler->display->display_options['fields']['field_ticket_category']['field'] = 'field_ticket_category';
  $handler->display->display_options['fields']['field_ticket_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'view ticket';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );

  /* Display: Tickets in progress */
  $handler = $view->new_display('page', 'Tickets in progress', 'tickets_in_progress');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tickets in progress';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You have no any tickets in progress yet.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_defender_target_id']['id'] = 'field_defender_target_id';
  $handler->display->display_options['relationships']['field_defender_target_id']['table'] = 'field_data_field_defender';
  $handler->display->display_options['relationships']['field_defender_target_id']['field'] = 'field_defender_target_id';
  $handler->display->display_options['relationships']['field_defender_target_id']['label'] = 'Defender of this ticket';
  $handler->display->display_options['relationships']['field_defender_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Defender (field_defender) */
  $handler->display->display_options['arguments']['field_defender_target_id']['id'] = 'field_defender_target_id';
  $handler->display->display_options['arguments']['field_defender_target_id']['table'] = 'field_data_field_defender';
  $handler->display->display_options['arguments']['field_defender_target_id']['field'] = 'field_defender_target_id';
  $handler->display->display_options['arguments']['field_defender_target_id']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['field_defender_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_defender_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_defender_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_defender_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  /* Filter criterion: Content: Defended? (field_defended) */
  $handler->display->display_options['filters']['field_defended_value']['id'] = 'field_defended_value';
  $handler->display->display_options['filters']['field_defended_value']['table'] = 'field_data_field_defended';
  $handler->display->display_options['filters']['field_defended_value']['field'] = 'field_defended_value';
  $handler->display->display_options['filters']['field_defended_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['path'] = 'user/%/tickets-in-progress';

  /* Display: Search ticket */
  $handler = $view->new_display('page', 'Search ticket', 'search_ticket');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search ticket';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_ticket_category' => 'field_ticket_category',
    'created' => 'created',
    'nid' => 'nid',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_ticket_category' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
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
  $handler->display->display_options['empty']['area']['content'] = 'No tickets found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Defended? (field_defended) */
  $handler->display->display_options['filters']['field_defended_value']['id'] = 'field_defended_value';
  $handler->display->display_options['filters']['field_defended_value']['table'] = 'field_data_field_defended';
  $handler->display->display_options['filters']['field_defended_value']['field'] = 'field_defended_value';
  $handler->display->display_options['filters']['field_defended_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_defended_value']['group'] = 1;
  /* Filter criterion: Content: Defender (field_defender) */
  $handler->display->display_options['filters']['field_defender_target_id']['id'] = 'field_defender_target_id';
  $handler->display->display_options['filters']['field_defender_target_id']['table'] = 'field_data_field_defender';
  $handler->display->display_options['filters']['field_defender_target_id']['field'] = 'field_defender_target_id';
  $handler->display->display_options['filters']['field_defender_target_id']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_defender_target_id']['group'] = 1;
  /* Filter criterion: Content: Location where ticket was given (field_location_where_ticket_was_) */
  $handler->display->display_options['filters']['field_location_where_ticket_was__value']['id'] = 'field_location_where_ticket_was__value';
  $handler->display->display_options['filters']['field_location_where_ticket_was__value']['table'] = 'field_data_field_location_where_ticket_was_';
  $handler->display->display_options['filters']['field_location_where_ticket_was__value']['field'] = 'field_location_where_ticket_was__value';
  $handler->display->display_options['filters']['field_location_where_ticket_was__value']['value'] = array(
    'all' => 'all',
    'CA' => 'CA',
    'US' => 'US',
  );
  $handler->display->display_options['filters']['field_location_where_ticket_was__value']['group'] = 1;
  $handler->display->display_options['filters']['field_location_where_ticket_was__value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_where_ticket_was__value']['expose']['operator_id'] = 'field_location_where_ticket_was__value_op';
  $handler->display->display_options['filters']['field_location_where_ticket_was__value']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_location_where_ticket_was__value']['expose']['operator'] = 'field_location_where_ticket_was__value_op';
  $handler->display->display_options['filters']['field_location_where_ticket_was__value']['expose']['identifier'] = 'field_location_where_ticket_was__value';
  $handler->display->display_options['filters']['field_location_where_ticket_was__value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Canada state */
  $handler->display->display_options['filters']['field_state_value']['id'] = 'field_state_value';
  $handler->display->display_options['filters']['field_state_value']['table'] = 'field_data_field_state';
  $handler->display->display_options['filters']['field_state_value']['field'] = 'field_state_value';
  $handler->display->display_options['filters']['field_state_value']['ui_name'] = 'Canada state';
  $handler->display->display_options['filters']['field_state_value']['value'] = array(
    'AB' => 'AB',
    'BC' => 'BC',
    'MB' => 'MB',
    'NB' => 'NB',
    'NL' => 'NL',
    'NT' => 'NT',
    'NS' => 'NS',
    'NU' => 'NU',
    'ON' => 'ON',
    'PE' => 'PE',
    'QC' => 'QC',
    'SK' => 'SK',
    'YT' => 'YT',
  );
  $handler->display->display_options['filters']['field_state_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_state_value']['expose']['operator_id'] = 'field_state_value_op';
  $handler->display->display_options['filters']['field_state_value']['expose']['label'] = 'Province';
  $handler->display->display_options['filters']['field_state_value']['expose']['operator'] = 'field_state_value_op';
  $handler->display->display_options['filters']['field_state_value']['expose']['identifier'] = 'province';
  $handler->display->display_options['filters']['field_state_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_state_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_state_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: USA state */
  $handler->display->display_options['filters']['field_state_value_1']['id'] = 'field_state_value_1';
  $handler->display->display_options['filters']['field_state_value_1']['table'] = 'field_data_field_state';
  $handler->display->display_options['filters']['field_state_value_1']['field'] = 'field_state_value';
  $handler->display->display_options['filters']['field_state_value_1']['ui_name'] = 'USA state';
  $handler->display->display_options['filters']['field_state_value_1']['value'] = array(
    'AL' => 'AL',
    'AK' => 'AK',
    'AZ' => 'AZ',
    'AR' => 'AR',
    'CA' => 'CA',
    'CO' => 'CO',
    'CT' => 'CT',
    'DE' => 'DE',
    'DC' => 'DC',
    'FL' => 'FL',
    'GA' => 'GA',
    'HI' => 'HI',
    'ID' => 'ID',
    'IL' => 'IL',
    'IN' => 'IN',
    'IA' => 'IA',
    'KS' => 'KS',
    'KY' => 'KY',
    'LA' => 'LA',
    'ME' => 'ME',
    'MD' => 'MD',
    'MA' => 'MA',
    'MI' => 'MI',
    'MN' => 'MN',
    'MS' => 'MS',
    'MO' => 'MO',
    'MT' => 'MT',
    'NE' => 'NE',
    'NV' => 'NV',
    'NH' => 'NH',
    'NJ' => 'NJ',
    'NM' => 'NM',
    'NY' => 'NY',
    'NC' => 'NC',
    'ND' => 'ND',
    'OH' => 'OH',
    'OK' => 'OK',
    'OR' => 'OR',
    'PA' => 'PA',
    'RI' => 'RI',
    'SC' => 'SC',
    'SD' => 'SD',
    'TN' => 'TN',
    'TX' => 'TX',
    'UT' => 'UT',
    'VT' => 'VT',
    'VA' => 'VA',
    'WA' => 'WA',
    'WV' => 'WV',
    'WI' => 'WI',
    'WY' => 'WY',
    'AA' => 'AA',
    'AE' => 'AE',
    'AP' => 'AP',
    'AS' => 'AS',
    'FM' => 'FM',
    'GU' => 'GU',
    'MH' => 'MH',
    'MP' => 'MP',
    'PW' => 'PW',
    'PR' => 'PR',
    'VI' => 'VI',
  );
  $handler->display->display_options['filters']['field_state_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_state_value_1']['expose']['operator_id'] = 'field_state_value_1_op';
  $handler->display->display_options['filters']['field_state_value_1']['expose']['label'] = 'USA state';
  $handler->display->display_options['filters']['field_state_value_1']['expose']['operator'] = 'field_state_value_1_op';
  $handler->display->display_options['filters']['field_state_value_1']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['field_state_value_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_state_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_state_value_1']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'user/search-ticket';

  /* Display: Tickets responded to */
  $handler = $view->new_display('page', 'Tickets responded to', 'tickets_responded_to');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tickets responded to';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You have not responded to any open ticket yet.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ticket_node']['id'] = 'reverse_field_ticket_node';
  $handler->display->display_options['relationships']['reverse_field_ticket_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ticket_node']['field'] = 'reverse_field_ticket_node';
  $handler->display->display_options['relationships']['reverse_field_ticket_node']['label'] = 'Offer(s)';
  $handler->display->display_options['relationships']['reverse_field_ticket_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_ticket_node';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  /* Filter criterion: Content: Defender (field_defender) */
  $handler->display->display_options['filters']['field_defender_target_id']['id'] = 'field_defender_target_id';
  $handler->display->display_options['filters']['field_defender_target_id']['table'] = 'field_data_field_defender';
  $handler->display->display_options['filters']['field_defender_target_id']['field'] = 'field_defender_target_id';
  $handler->display->display_options['filters']['field_defender_target_id']['operator'] = 'empty';
  /* Filter criterion: Content: Defended? (field_defended) */
  $handler->display->display_options['filters']['field_defended_value']['id'] = 'field_defended_value';
  $handler->display->display_options['filters']['field_defended_value']['table'] = 'field_data_field_defended';
  $handler->display->display_options['filters']['field_defended_value']['field'] = 'field_defended_value';
  $handler->display->display_options['filters']['field_defended_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['path'] = 'user/%/tickets-responded-to';
  $handler->display->display_options['menu']['title'] = 'Tickets responded to';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Tickets defended */
  $handler = $view->new_display('page', 'Tickets defended', 'tickets_defended');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tickets defended';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_defender_target_id']['id'] = 'field_defender_target_id';
  $handler->display->display_options['relationships']['field_defender_target_id']['table'] = 'field_data_field_defender';
  $handler->display->display_options['relationships']['field_defender_target_id']['field'] = 'field_defender_target_id';
  $handler->display->display_options['relationships']['field_defender_target_id']['label'] = 'Defender of this ticket';
  $handler->display->display_options['relationships']['field_defender_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Defender (field_defender) */
  $handler->display->display_options['arguments']['field_defender_target_id']['id'] = 'field_defender_target_id';
  $handler->display->display_options['arguments']['field_defender_target_id']['table'] = 'field_data_field_defender';
  $handler->display->display_options['arguments']['field_defender_target_id']['field'] = 'field_defender_target_id';
  $handler->display->display_options['arguments']['field_defender_target_id']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['field_defender_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_defender_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_defender_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_defender_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  /* Filter criterion: Content: Defended? (field_defended) */
  $handler->display->display_options['filters']['field_defended_value']['id'] = 'field_defended_value';
  $handler->display->display_options['filters']['field_defended_value']['table'] = 'field_data_field_defended';
  $handler->display->display_options['filters']['field_defended_value']['field'] = 'field_defended_value';
  $handler->display->display_options['filters']['field_defended_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'user/%/tickets-defended';

  /* Display: My tickets */
  $handler = $view->new_display('page', 'My tickets', 'my_tickets');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You have no any tickets yet.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  $handler->display->display_options['path'] = 'user/%/my-tickets';
  $export['tickets'] = $view;

  return $export;
}
