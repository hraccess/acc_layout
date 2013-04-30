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
  $view->human_name = 'Access Reports';
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
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['fields'] = array(
    'field_responsible_actor' => array(
      'enabled' => 0,
      'sort' => '0',
    ),
    'field_responsible_actor_1' => array(
      'enabled' => 1,
      'sort' => 'ASC',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => 'Number of Reports',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_responsible_actor',
    'invert' => 1,
  );
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Sort criterion: COUNT(Content: Sector(s) affected (field_sectors)) */
  $handler->display->display_options['sorts']['field_sectors_tid']['id'] = 'field_sectors_tid';
  $handler->display->display_options['sorts']['field_sectors_tid']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['sorts']['field_sectors_tid']['field'] = 'field_sectors_tid';
  $handler->display->display_options['sorts']['field_sectors_tid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_sectors_tid']['order'] = 'DESC';
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_field_access_constraint_ac' => 'field_field_access_constraint_ac',
    'field_field_access_constraint_ac_1' => 'field_field_access_constraint_ac_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_field_access_constraint_ac' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_field_access_constraint_ac_1' => array(
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Content: Access Constraints (field_field_access_constraint_ac)) */
  $handler->display->display_options['sorts']['field_field_access_constraint_ac_tid']['id'] = 'field_field_access_constraint_ac_tid';
  $handler->display->display_options['sorts']['field_field_access_constraint_ac_tid']['table'] = 'field_data_field_field_access_constraint_ac';
  $handler->display->display_options['sorts']['field_field_access_constraint_ac_tid']['field'] = 'field_field_access_constraint_ac_tid';
  $handler->display->display_options['sorts']['field_field_access_constraint_ac_tid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_field_access_constraint_ac_tid']['order'] = 'DESC';
  $handler->display->display_options['block_description'] = 'Access Incident By Access Constraints';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Content: Access Constraints (field_field_access_constraint_ac)) */
  $handler->display->display_options['sorts']['field_field_access_constraint_ac_tid']['id'] = 'field_field_access_constraint_ac_tid';
  $handler->display->display_options['sorts']['field_field_access_constraint_ac_tid']['table'] = 'field_data_field_field_access_constraint_ac';
  $handler->display->display_options['sorts']['field_field_access_constraint_ac_tid']['field'] = 'field_field_access_constraint_ac_tid';
  $handler->display->display_options['sorts']['field_field_access_constraint_ac_tid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_field_access_constraint_ac_tid']['order'] = 'DESC';
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['block_description'] = 'Chart Access Reports By Access Constraints';

  /* Display: Chart Access Reports by Sectors */
  $handler = $view->new_display('block', 'Chart Access Reports by Sectors', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Access Reports By Sectors';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['fields'] = array(
    'field_sectors' => array(
      'enabled' => 0,
    ),
    'field_sectors_1' => array(
      'enabled' => 1,
      'sort' => 'DESC',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => '',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_sectors',
    'invert' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Sector(s) affected */
  $handler->display->display_options['fields']['field_sectors']['id'] = 'field_sectors';
  $handler->display->display_options['fields']['field_sectors']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['fields']['field_sectors']['field'] = 'field_sectors';
  $handler->display->display_options['fields']['field_sectors']['delta_offset'] = '0';
  /* Field: COUNT(Content: Sector(s) affected) */
  $handler->display->display_options['fields']['field_sectors_1']['id'] = 'field_sectors_1';
  $handler->display->display_options['fields']['field_sectors_1']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['fields']['field_sectors_1']['field'] = 'field_sectors';
  $handler->display->display_options['fields']['field_sectors_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_sectors_1']['label'] = 'Number of Reports';
  $handler->display->display_options['fields']['field_sectors_1']['separator'] = ', ';
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
    'access_incident' => 'access_incident',
    'br_requirement_into_country' => 'br_requirement_into_country',
    'bureaucratic_requirement_within_' => 'bureaucratic_requirement_within_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['value']['min'] = '2011-01-01';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
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
  $handler->display->display_options['block_description'] = 'Chart Access Reports by sectors';

  /* Display: Access Reports by Sectors */
  $handler = $view->new_display('block', 'Access Reports by Sectors', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Access Reports By Sectors';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_sectors' => 'field_sectors',
    'field_sectors_1' => 'field_sectors_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_sectors' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sectors_1' => array(
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Sector(s) affected */
  $handler->display->display_options['fields']['field_sectors']['id'] = 'field_sectors';
  $handler->display->display_options['fields']['field_sectors']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['fields']['field_sectors']['field'] = 'field_sectors';
  $handler->display->display_options['fields']['field_sectors']['delta_offset'] = '0';
  /* Field: COUNT(Content: Sector(s) affected) */
  $handler->display->display_options['fields']['field_sectors_1']['id'] = 'field_sectors_1';
  $handler->display->display_options['fields']['field_sectors_1']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['fields']['field_sectors_1']['field'] = 'field_sectors';
  $handler->display->display_options['fields']['field_sectors_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_sectors_1']['label'] = 'Number of Reports';
  $handler->display->display_options['fields']['field_sectors_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Content: Sector(s) affected (field_sectors)) */
  $handler->display->display_options['sorts']['field_sectors_tid']['id'] = 'field_sectors_tid';
  $handler->display->display_options['sorts']['field_sectors_tid']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['sorts']['field_sectors_tid']['field'] = 'field_sectors_tid';
  $handler->display->display_options['sorts']['field_sectors_tid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_sectors_tid']['order'] = 'DESC';
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
    'access_incident' => 'access_incident',
    'br_requirement_into_country' => 'br_requirement_into_country',
    'bureaucratic_requirement_within_' => 'bureaucratic_requirement_within_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['value']['min'] = '2011-01-01';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
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
  $handler->display->display_options['block_description'] = 'Access Reports by sector';

  /* Display: Chart Access Reports by Location */
  $handler = $view->new_display('block', 'Chart Access Reports by Location', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Access Reports by Location';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['fields'] = array(
    'field_admin1_2' => array(
      'enabled' => 0,
    ),
    'field_admin1_2_1' => array(
      'enabled' => 1,
      'sort' => 'DESC',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => '',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_admin1_2',
    'invert' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Geographical Location (Destination) */
  $handler->display->display_options['fields']['field_admin1_2']['id'] = 'field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2']['table'] = 'field_data_field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2']['field'] = 'field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2']['label'] = 'Location';
  $handler->display->display_options['fields']['field_admin1_2']['delta_offset'] = '0';
  /* Field: COUNT(Content: Geographical Location (Destination)) */
  $handler->display->display_options['fields']['field_admin1_2_1']['id'] = 'field_admin1_2_1';
  $handler->display->display_options['fields']['field_admin1_2_1']['table'] = 'field_data_field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2_1']['field'] = 'field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_admin1_2_1']['label'] = 'Number of Reports';
  $handler->display->display_options['fields']['field_admin1_2_1']['separator'] = ', ';
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
    'access_incident' => 'access_incident',
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
  $handler->display->display_options['block_description'] = 'Chart Access Reports by Location';

  /* Display: Access Reports by Location */
  $handler = $view->new_display('block', 'Access Reports by Location', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Access Reports by Location';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_admin1_2' => 'field_admin1_2',
    'field_admin1_2_1' => 'field_admin1_2_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_admin1_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_admin1_2_1' => array(
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Geographical Location (Destination) */
  $handler->display->display_options['fields']['field_admin1_2']['id'] = 'field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2']['table'] = 'field_data_field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2']['field'] = 'field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2']['label'] = 'Location';
  $handler->display->display_options['fields']['field_admin1_2']['delta_offset'] = '0';
  /* Field: COUNT(Content: Geographical Location (Destination)) */
  $handler->display->display_options['fields']['field_admin1_2_1']['id'] = 'field_admin1_2_1';
  $handler->display->display_options['fields']['field_admin1_2_1']['table'] = 'field_data_field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2_1']['field'] = 'field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_admin1_2_1']['label'] = 'Number of Reports';
  $handler->display->display_options['fields']['field_admin1_2_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Content: Geographical Location (Destination) (field_admin1_2)) */
  $handler->display->display_options['sorts']['field_admin1_2_tid']['id'] = 'field_admin1_2_tid';
  $handler->display->display_options['sorts']['field_admin1_2_tid']['table'] = 'field_data_field_admin1_2';
  $handler->display->display_options['sorts']['field_admin1_2_tid']['field'] = 'field_admin1_2_tid';
  $handler->display->display_options['sorts']['field_admin1_2_tid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_admin1_2_tid']['order'] = 'DESC';
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
    'access_incident' => 'access_incident',
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
  $handler->display->display_options['block_description'] = 'Access Reports by Location';

  /* Display: Chart Access Reports by Responsible Actor */
  $handler = $view->new_display('block', 'Chart Access Reports by Responsible Actor', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Access Reports by Responsible Actor';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['fields'] = array(
    'field_responsible_actor' => array(
      'enabled' => 0,
      'sort' => '0',
    ),
    'field_responsible_actor_1' => array(
      'enabled' => 1,
      'sort' => 'ASC',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => '',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_responsible_actor',
    'invert' => 1,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: If denied/delayed, by whom */
  $handler->display->display_options['fields']['field_responsible_actor']['id'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['label'] = 'Responsible Actor';
  $handler->display->display_options['fields']['field_responsible_actor']['settings'] = array(
    'link' => 0,
  );
  /* Field: COUNT(Content: If denied/delayed, by whom) */
  $handler->display->display_options['fields']['field_responsible_actor_1']['id'] = 'field_responsible_actor_1';
  $handler->display->display_options['fields']['field_responsible_actor_1']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor_1']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_responsible_actor_1']['label'] = 'Number of Reports';
  $handler->display->display_options['fields']['field_responsible_actor_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['block_description'] = 'Chart Access reports by Responsible Actor';

  /* Display: Access Reports by Responsible Actor */
  $handler = $view->new_display('block', 'Access Reports by Responsible Actor', 'block_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Access Reports by Responsible Actor';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_responsible_actor' => 'field_responsible_actor',
    'field_responsible_actor_1' => 'field_responsible_actor_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_responsible_actor' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_responsible_actor_1' => array(
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: If denied/delayed, by whom */
  $handler->display->display_options['fields']['field_responsible_actor']['id'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['label'] = 'Responsible Actor';
  $handler->display->display_options['fields']['field_responsible_actor']['settings'] = array(
    'link' => 0,
  );
  /* Field: COUNT(Content: If denied/delayed, by whom) */
  $handler->display->display_options['fields']['field_responsible_actor_1']['id'] = 'field_responsible_actor_1';
  $handler->display->display_options['fields']['field_responsible_actor_1']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor_1']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_responsible_actor_1']['label'] = 'Number of Reports';
  $handler->display->display_options['fields']['field_responsible_actor_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Content: If denied/delayed, by whom (field_responsible_actor)) */
  $handler->display->display_options['sorts']['field_responsible_actor_target_id']['id'] = 'field_responsible_actor_target_id';
  $handler->display->display_options['sorts']['field_responsible_actor_target_id']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['sorts']['field_responsible_actor_target_id']['field'] = 'field_responsible_actor_target_id';
  $handler->display->display_options['sorts']['field_responsible_actor_target_id']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_responsible_actor_target_id']['order'] = 'DESC';
  $handler->display->display_options['block_description'] = 'Access reports by Responsible Actor';

  /* Display: Chart Access Reports by Affected Org */
  $handler = $view->new_display('block', 'Chart Access Reports by Affected Org', 'block_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Access reports By Affected Org';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'visualization';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['fields'] = array(
    'field_targetted_actor' => array(
      'enabled' => 0,
    ),
    'field_targetted_actor_1' => array(
      'enabled' => 1,
      'sort' => 'DESC',
    ),
  );
  $handler->display->display_options['style_options']['yAxis'] = array(
    'title' => 'Number of Reports',
  );
  $handler->display->display_options['style_options']['xAxis'] = array(
    'labelField' => 'field_targetted_actor',
    'invert' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Administrative request submited by */
  $handler->display->display_options['fields']['field_targetted_actor']['id'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['field'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['label'] = 'Affected Organizations';
  $handler->display->display_options['fields']['field_targetted_actor']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_targetted_actor']['delta_offset'] = '0';
  /* Field: COUNT(Content: Administrative request submited by) */
  $handler->display->display_options['fields']['field_targetted_actor_1']['id'] = 'field_targetted_actor_1';
  $handler->display->display_options['fields']['field_targetted_actor_1']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor_1']['field'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_targetted_actor_1']['label'] = 'Number of Reports';
  $handler->display->display_options['fields']['field_targetted_actor_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Content: Administrative request submited by (field_targetted_actor)) */
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['id'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['field'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['order'] = 'DESC';
  $handler->display->display_options['block_description'] = 'Chart Access reports by Affected Org';

  /* Display: Access Reports by Affected Org */
  $handler = $view->new_display('block', 'Access Reports by Affected Org', 'block_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Access reports By Affected Org';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_targetted_actor' => 'field_targetted_actor',
    'field_targetted_actor_1' => 'field_targetted_actor_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_targetted_actor' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_targetted_actor_1' => array(
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Administrative request submited by */
  $handler->display->display_options['fields']['field_targetted_actor']['id'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['field'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['label'] = 'Affected Organizations';
  $handler->display->display_options['fields']['field_targetted_actor']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_targetted_actor']['delta_offset'] = '0';
  /* Field: COUNT(Content: Administrative request submited by) */
  $handler->display->display_options['fields']['field_targetted_actor_1']['id'] = 'field_targetted_actor_1';
  $handler->display->display_options['fields']['field_targetted_actor_1']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor_1']['field'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_targetted_actor_1']['label'] = 'Number of Reports';
  $handler->display->display_options['fields']['field_targetted_actor_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Content: Administrative request submited by (field_targetted_actor)) */
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['id'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['field'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['order'] = 'DESC';
  $handler->display->display_options['block_description'] = 'Access reports by Affected Org';

  /* Display: XSL Sectors */
  $handler = $view->new_display('views_data_export', 'XSL Sectors', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'XLS Sectors';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%display.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Sector(s) affected */
  $handler->display->display_options['fields']['field_sectors']['id'] = 'field_sectors';
  $handler->display->display_options['fields']['field_sectors']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['fields']['field_sectors']['field'] = 'field_sectors';
  $handler->display->display_options['fields']['field_sectors']['delta_offset'] = '0';
  /* Field: COUNT(Content: Sector(s) affected) */
  $handler->display->display_options['fields']['field_sectors_1']['id'] = 'field_sectors_1';
  $handler->display->display_options['fields']['field_sectors_1']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['fields']['field_sectors_1']['field'] = 'field_sectors';
  $handler->display->display_options['fields']['field_sectors_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_sectors_1']['label'] = 'Number of Reports';
  $handler->display->display_options['fields']['field_sectors_1']['separator'] = ', ';
  $handler->display->display_options['path'] = 'access/dashboard/sectors.xls';
  $handler->display->display_options['displays'] = array(
    'block_4' => 'block_4',
    'default' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_5' => 0,
    'block_7' => 0,
    'block_8' => 0,
    'block_10' => 0,
    'block_11' => 0,
    'block_12' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: XSL Locations */
  $handler = $view->new_display('views_data_export', 'XSL Locations', 'views_data_export_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'XLS Locations';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%display.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Geographical Location (Destination) */
  $handler->display->display_options['fields']['field_admin1_2']['id'] = 'field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2']['table'] = 'field_data_field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2']['field'] = 'field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2']['label'] = 'Location';
  $handler->display->display_options['fields']['field_admin1_2']['delta_offset'] = '0';
  /* Field: COUNT(Content: Geographical Location (Destination)) */
  $handler->display->display_options['fields']['field_admin1_2_1']['id'] = 'field_admin1_2_1';
  $handler->display->display_options['fields']['field_admin1_2_1']['table'] = 'field_data_field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2_1']['field'] = 'field_admin1_2';
  $handler->display->display_options['fields']['field_admin1_2_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_admin1_2_1']['label'] = 'Number of Reports';
  $handler->display->display_options['fields']['field_admin1_2_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Content: Geographical Location (Destination) (field_admin1_2)) */
  $handler->display->display_options['sorts']['field_admin1_2_tid']['id'] = 'field_admin1_2_tid';
  $handler->display->display_options['sorts']['field_admin1_2_tid']['table'] = 'field_data_field_admin1_2';
  $handler->display->display_options['sorts']['field_admin1_2_tid']['field'] = 'field_admin1_2_tid';
  $handler->display->display_options['sorts']['field_admin1_2_tid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_admin1_2_tid']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'access/dashboard/locations.xls';
  $handler->display->display_options['displays'] = array(
    'block_7' => 'block_7',
    'default' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
    'block_8' => 0,
    'block_10' => 0,
    'block_11' => 0,
    'block_12' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: XSL Responsible Actor */
  $handler = $view->new_display('views_data_export', 'XSL Responsible Actor', 'views_data_export_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'XLS Responsible Actor';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%display.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: If denied/delayed, by whom */
  $handler->display->display_options['fields']['field_responsible_actor']['id'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor']['label'] = 'Responsible Actor';
  $handler->display->display_options['fields']['field_responsible_actor']['settings'] = array(
    'link' => 0,
  );
  /* Field: COUNT(Content: If denied/delayed, by whom) */
  $handler->display->display_options['fields']['field_responsible_actor_1']['id'] = 'field_responsible_actor_1';
  $handler->display->display_options['fields']['field_responsible_actor_1']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor_1']['field'] = 'field_responsible_actor';
  $handler->display->display_options['fields']['field_responsible_actor_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_responsible_actor_1']['label'] = 'Number of Reports';
  $handler->display->display_options['fields']['field_responsible_actor_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Content: If denied/delayed, by whom (field_responsible_actor)) */
  $handler->display->display_options['sorts']['field_responsible_actor_target_id']['id'] = 'field_responsible_actor_target_id';
  $handler->display->display_options['sorts']['field_responsible_actor_target_id']['table'] = 'field_data_field_responsible_actor';
  $handler->display->display_options['sorts']['field_responsible_actor_target_id']['field'] = 'field_responsible_actor_target_id';
  $handler->display->display_options['sorts']['field_responsible_actor_target_id']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_responsible_actor_target_id']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'access/dashboard/responsible_actor.xls';
  $handler->display->display_options['displays'] = array(
    'block_10' => 'block_10',
    'default' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
    'block_7' => 0,
    'block_8' => 0,
    'block_11' => 0,
    'block_12' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: XSL Affected Org */
  $handler = $view->new_display('views_data_export', 'XSL Affected Org', 'views_data_export_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'XLS Affected Org';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%display.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Administrative request submited by */
  $handler->display->display_options['fields']['field_targetted_actor']['id'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['field'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor']['label'] = 'Affected Organizations';
  $handler->display->display_options['fields']['field_targetted_actor']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_targetted_actor']['delta_offset'] = '0';
  /* Field: COUNT(Content: Administrative request submited by) */
  $handler->display->display_options['fields']['field_targetted_actor_1']['id'] = 'field_targetted_actor_1';
  $handler->display->display_options['fields']['field_targetted_actor_1']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor_1']['field'] = 'field_targetted_actor';
  $handler->display->display_options['fields']['field_targetted_actor_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_targetted_actor_1']['label'] = 'Number of Reports';
  $handler->display->display_options['fields']['field_targetted_actor_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Content: Administrative request submited by (field_targetted_actor)) */
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['id'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['table'] = 'field_data_field_targetted_actor';
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['field'] = 'field_targetted_actor_target_id';
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_targetted_actor_target_id']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'access/dashboard/affected_org.xls';
  $handler->display->display_options['displays'] = array(
    'block_12' => 'block_12',
    'default' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
    'block_7' => 0,
    'block_8' => 0,
    'block_10' => 0,
    'block_11' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
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
    t('Chart Access Reports by Sectors'),
    t('Access Reports By Sectors'),
    t('Sector(s) affected'),
    t('Number of Reports'),
    t('Chart Access Reports by sectors'),
    t('Access Reports by Sectors'),
    t('Access Reports by sector'),
    t('Chart Access Reports by Location'),
    t('Access Reports by Location'),
    t('Location'),
    t('Chart Access Reports by Responsible Actor'),
    t('Access Reports by Responsible Actor'),
    t('Responsible Actor'),
    t('Chart Access reports by Responsible Actor'),
    t('Access reports by Responsible Actor'),
    t('Chart Access Reports by Affected Org'),
    t('Access reports By Affected Org'),
    t('Affected Organizations'),
    t('Chart Access reports by Affected Org'),
    t('Access Reports by Affected Org'),
    t('Access reports by Affected Org'),
    t('XSL Sectors'),
    t('XLS Sectors'),
    t('XSL Locations'),
    t('XLS Locations'),
    t('XSL Responsible Actor'),
    t('XLS Responsible Actor'),
    t('XSL Affected Org'),
    t('XLS Affected Org'),
  );
  $export['test_incidents_by_access_constraints'] = $view;

  return $export;
}
