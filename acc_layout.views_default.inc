<?php
/**
 * @file
 * acc_layout.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function acc_layout_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'test_incidents_by_access_constraints';
  $view->description = '';
  $view->tag = 'Access';
  $view->base_table = 'node';
  $view->human_name = 'Access All Incidents By Access Constraints';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Access Incident By Access Constraints';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    30037204 => '30037204',
    52310416 => '52310416',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_access_constraint_acc_inc' => 'field_access_constraint_acc_inc',
    'field_access_constraint_acc_inc_1' => 'field_access_constraint_acc_inc_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_access_constraint_acc_inc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_access_constraint_acc_inc_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Access Constraints */
  $handler->display->display_options['fields']['field_field_access_constraint_ac']['id'] = 'field_field_access_constraint_ac';
  $handler->display->display_options['fields']['field_field_access_constraint_ac']['table'] = 'field_data_field_field_access_constraint_ac';
  $handler->display->display_options['fields']['field_field_access_constraint_ac']['field'] = 'field_field_access_constraint_ac';
  /* Field: COUNT(Content: Access Constraints) */
  $handler->display->display_options['fields']['field_field_access_constraint_ac_1']['id'] = 'field_field_access_constraint_ac_1';
  $handler->display->display_options['fields']['field_field_access_constraint_ac_1']['table'] = 'field_data_field_field_access_constraint_ac';
  $handler->display->display_options['fields']['field_field_access_constraint_ac_1']['field'] = 'field_field_access_constraint_ac';
  $handler->display->display_options['fields']['field_field_access_constraint_ac_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_field_access_constraint_ac_1']['label'] = 'Number of Incidents';
  $handler->display->display_options['fields']['field_field_access_constraint_ac_1']['separator'] = ', ';
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
    'access_incident' => 'access_incident',
    'br_requirement_into_country' => 'br_requirement_into_country',
    'bureaucratic_requirement_within_' => 'bureaucratic_requirement_within_',
  );
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['value']['min'] = '2011-01-01';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Records Between';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    200153887 => 0,
    52310416 => 0,
    30037204 => 0,
  );
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'now';

  /* Display: Access Incident By Access Constraint */
  $handler = $view->new_display('block', 'Access Incident By Access Constraint', 'block_1');
  $handler->display->display_options['block_description'] = 'Access Incident By Access Constraints';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'access/dashboard/reports.xls';
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'default' => 0,
  );

  /* Display: Chart Access Reports By Access Constraint */
  $handler = $view->new_display('block', 'Chart Access Reports By Access Constraint', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chart Access Reports by Access Constraints';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'pie';
  $handler->display->display_options['style_options']['fields'] = array(
    'field_field_access_constraint_ac' => array(
      'enabled' => 0,
      'sort' => '0',
    ),
    'field_field_access_constraint_ac_1' => array(
      'enabled' => 1,
      'sort' => 'DESC',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => 'Number of incidents',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_field_access_constraint_ac',
    'invert' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Chart Access Reports By Access Constraints';
  $translatables['test_incidents_by_access_constraints'] = array(
    t('Master'),
    t('Access Incident By Access Constraints'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Access Constraints'),
    t('Number of Incidents'),
    t('Records Between'),
    t('Access Incident By Access Constraint'),
    t('Data export'),
    t('Chart Access Reports By Access Constraint'),
    t('Chart Access Reports by Access Constraints'),
    t('Chart Access Reports By Access Constraints'),
  );
  $export['test_incidents_by_access_constraints'] = $view;

  return $export;
}
