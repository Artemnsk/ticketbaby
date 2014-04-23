<?php
/**
 * @file
 * features_view_responds.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_view_responds_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'offers_responds_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Offers (responds)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Responds';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You have no unread messages or responds yet.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Updated/commented date */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['date_format'] = 'raw time ago';
  /* Sort criterion: Content: Updated/commented date */
  $handler->display->display_options['sorts']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['order'] = 'DESC';
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
    'offer' => 'offer',
  );
  /* Filter criterion: User has access to quote. */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['ui_name'] = 'User has access to quote.';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'return !node_access(\'view\', node_load($row->nid));';

  /* Display: Quotes of ticket page */
  $handler = $view->new_display('page', 'Quotes of ticket page', 'quotes_of_ticket_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_response' => 'field_response',
    'field_special_conditions' => 'field_special_conditions',
    'field_fullname' => 'field_fullname',
    'created' => 'created',
    'picture' => 'picture',
    'field_ticket_category' => 'field_ticket_category',
    'field_date_of_ticket' => 'field_date_of_ticket',
    'field_final_payment__1' => 'field_final_payment__1',
    'field_initial_payment_1' => 'field_initial_payment_1',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_response' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_special_conditions' => array(
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
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ticket_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_of_ticket' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_final_payment__1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_initial_payment_1' => array(
      'sortable' => 0,
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
  $handler->display->display_options['empty']['area']['content'] = 'You have no quotes yet.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Defender of quote';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ticket_target_id']['id'] = 'field_ticket_target_id';
  $handler->display->display_options['relationships']['field_ticket_target_id']['table'] = 'field_data_field_ticket';
  $handler->display->display_options['relationships']['field_ticket_target_id']['field'] = 'field_ticket_target_id';
  $handler->display->display_options['relationships']['field_ticket_target_id']['label'] = 'Ticket of quote';
  $handler->display->display_options['relationships']['field_ticket_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Fullname */
  $handler->display->display_options['fields']['field_fullname']['id'] = 'field_fullname';
  $handler->display->display_options['fields']['field_fullname']['table'] = 'field_data_field_fullname';
  $handler->display->display_options['fields']['field_fullname']['field'] = 'field_fullname';
  $handler->display->display_options['fields']['field_fullname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_fullname']['label'] = 'Defender';
  $handler->display->display_options['fields']['field_fullname']['alter']['text'] = '[field_fullname],';
  $handler->display->display_options['fields']['field_fullname']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_fullname']['alter']['trim'] = TRUE;
  /* Field: Content: Overview */
  $handler->display->display_options['fields']['field_response']['id'] = 'field_response';
  $handler->display->display_options['fields']['field_response']['table'] = 'field_data_field_response';
  $handler->display->display_options['fields']['field_response']['field'] = 'field_response';
  $handler->display->display_options['fields']['field_response']['label'] = 'Content';
  $handler->display->display_options['fields']['field_response']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_response']['alter']['more_link_text'] = 'more';
  $handler->display->display_options['fields']['field_response']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_response']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_response']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'tickets';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Ticket (field_ticket) */
  $handler->display->display_options['arguments']['field_ticket_target_id']['id'] = 'field_ticket_target_id';
  $handler->display->display_options['arguments']['field_ticket_target_id']['table'] = 'field_data_field_ticket';
  $handler->display->display_options['arguments']['field_ticket_target_id']['field'] = 'field_ticket_target_id';
  $handler->display->display_options['arguments']['field_ticket_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_ticket_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ticket_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ticket_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ticket_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'ticket/%/quotes';

  /* Display: Quotes */
  $handler = $view->new_display('page', 'Quotes', 'quotes');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_response' => 'field_response',
    'field_special_conditions' => 'field_special_conditions',
    'field_fullname' => 'field_fullname',
    'created' => 'created',
    'picture' => 'picture',
    'field_ticket_category' => 'field_ticket_category',
    'field_date_of_ticket' => 'field_date_of_ticket',
    'field_final_payment__1' => 'field_final_payment__1',
    'field_initial_payment_1' => 'field_initial_payment_1',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_response' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_special_conditions' => array(
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
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ticket_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_of_ticket' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_final_payment__1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_initial_payment_1' => array(
      'sortable' => 0,
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
  $handler->display->display_options['empty']['area']['content'] = 'You have no quotes yet.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Defender of quote';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ticket_target_id']['id'] = 'field_ticket_target_id';
  $handler->display->display_options['relationships']['field_ticket_target_id']['table'] = 'field_data_field_ticket';
  $handler->display->display_options['relationships']['field_ticket_target_id']['field'] = 'field_ticket_target_id';
  $handler->display->display_options['relationships']['field_ticket_target_id']['label'] = 'Ticket of quote';
  $handler->display->display_options['relationships']['field_ticket_target_id']['required'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'field_ticket_target_id';
  $handler->display->display_options['relationships']['uid_1']['label'] = 'Ticket author';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Fullname */
  $handler->display->display_options['fields']['field_fullname']['id'] = 'field_fullname';
  $handler->display->display_options['fields']['field_fullname']['table'] = 'field_data_field_fullname';
  $handler->display->display_options['fields']['field_fullname']['field'] = 'field_fullname';
  $handler->display->display_options['fields']['field_fullname']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['field_fullname']['label'] = 'Customer';
  $handler->display->display_options['fields']['field_fullname']['alter']['text'] = '[field_fullname],';
  $handler->display->display_options['fields']['field_fullname']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_fullname']['alter']['trim'] = TRUE;
  /* Field: Content: Overview */
  $handler->display->display_options['fields']['field_response']['id'] = 'field_response';
  $handler->display->display_options['fields']['field_response']['table'] = 'field_data_field_response';
  $handler->display->display_options['fields']['field_response']['field'] = 'field_response';
  $handler->display->display_options['fields']['field_response']['label'] = 'Content';
  $handler->display->display_options['fields']['field_response']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_response']['alter']['more_link_text'] = 'more';
  $handler->display->display_options['fields']['field_response']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_response']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_response']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'tickets';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'user/quotes';
  $export['offers_responds_'] = $view;

  return $export;
}
