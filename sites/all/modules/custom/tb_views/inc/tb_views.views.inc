<?php

/**
 * Implementation of hook_views_handlers() to register all of the basic handlers
 * views uses.
 */
function tb_views_views_handlers() {
    return array(
        'info' => array(
            'path' => drupal_get_path('module', 'tb_views') . '/inc', // path to view files
        ),
        'handlers' => array(
            // register our custom filter, with the class/file name and parent class
            'tb_views_filter_current_user' => array(
                'parent' => 'views_handler_filter',
            )
        ),
    );
}

function tb_views_views_data() {
    $data = array();

    // The flexible date filter.
    $data['user']['current user'] = array(
        'group' => t('Custom'),
        'real field'  => 'current user',
        'title' => t('Custom current user filter'),
        'help' => t('Filter users comparing with current user id'),
        'filter' => array(
            'handler' => 'tb_views_filter_current_user'
        ),
    );

    return $data;
}