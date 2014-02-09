<?php

function tb_ticket_rules_event_info() {
  $items = array(
    'node_commented' => array(
      'label' => t('CUSTOM: Node was commented'),
      'category' => 'node',
      'variables' => rules_events_node_variables(t('commented content')) + array(
          'comment' => array('type' => 'comment', 'label' => t('created comment')),
      ),
      'class' => 'RulesNodeEventHandler',
    ),
  );

  return $items;
}