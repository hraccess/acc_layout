<?php
/**
 * @file
 * acc_layout.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function acc_layout_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer acc_access_constraints vocabulary terms'.
  $permissions['administer acc_access_constraints vocabulary terms'] = array(
    'name' => 'administer acc_access_constraints vocabulary terms',
    'roles' => array(),
    'module' => 'vppr',
  );

  // Exported permission: 'administer acc_dashboard vocabulary terms'.
  $permissions['administer acc_dashboard vocabulary terms'] = array(
    'name' => 'administer acc_dashboard vocabulary terms',
    'roles' => array(),
    'module' => 'vppr',
  );

  // Exported permission: 'administer acc_impacts vocabulary terms'.
  $permissions['administer acc_impacts vocabulary terms'] = array(
    'name' => 'administer acc_impacts vocabulary terms',
    'roles' => array(),
    'module' => 'vppr',
  );

  // Exported permission: 'administer acc_incident_types vocabulary terms'.
  $permissions['administer acc_incident_types vocabulary terms'] = array(
    'name' => 'administer acc_incident_types vocabulary terms',
    'roles' => array(),
    'module' => 'vppr',
  );

  // Exported permission: 'administer acc_type_of_aid_workers vocabulary terms'.
  $permissions['administer acc_type_of_aid_workers vocabulary terms'] = array(
    'name' => 'administer acc_type_of_aid_workers vocabulary terms',
    'roles' => array(),
    'module' => 'vppr',
  );

  // Exported permission: 'administer acc_units vocabulary terms'.
  $permissions['administer acc_units vocabulary terms'] = array(
    'name' => 'administer acc_units vocabulary terms',
    'roles' => array(),
    'module' => 'vppr',
  );

  // Exported permission: 'administer access_constraint_type vocabulary terms'.
  $permissions['administer access_constraint_type vocabulary terms'] = array(
    'name' => 'administer access_constraint_type vocabulary terms',
    'roles' => array(),
    'module' => 'vppr',
  );

  // Exported permission: 'clear acc_access_constraints feeds'.
  $permissions['clear acc_access_constraints feeds'] = array(
    'name' => 'clear acc_access_constraints feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear acc_access_events_feed feeds'.
  $permissions['clear acc_access_events_feed feeds'] = array(
    'name' => 'clear acc_access_events_feed feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear acc_dashboard feeds'.
  $permissions['clear acc_dashboard feeds'] = array(
    'name' => 'clear acc_dashboard feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear acc_impacts_feed feeds'.
  $permissions['clear acc_impacts_feed feeds'] = array(
    'name' => 'clear acc_impacts_feed feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear acc_impediments_csv_impoter feeds'.
  $permissions['clear acc_impediments_csv_impoter feeds'] = array(
    'name' => 'clear acc_impediments_csv_impoter feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear acc_incident_csv_impoter feeds'.
  $permissions['clear acc_incident_csv_impoter feeds'] = array(
    'name' => 'clear acc_incident_csv_impoter feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear acc_incident_types_feed feeds'.
  $permissions['clear acc_incident_types_feed feeds'] = array(
    'name' => 'clear acc_incident_types_feed feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear acc_restictions_csv_impoter feeds'.
  $permissions['clear acc_restictions_csv_impoter feeds'] = array(
    'name' => 'clear acc_restictions_csv_impoter feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear acc_units feeds'.
  $permissions['clear acc_units feeds'] = array(
    'name' => 'clear acc_units feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'create any global_filter_reset bean'.
  $permissions['create any global_filter_reset bean'] = array(
    'name' => 'create any global_filter_reset bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any global_filter_reset bean'.
  $permissions['delete any global_filter_reset bean'] = array(
    'name' => 'delete any global_filter_reset bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete terms in acc_access_constraints'.
  $permissions['delete terms in acc_access_constraints'] = array(
    'name' => 'delete terms in acc_access_constraints',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in acc_dashboard'.
  $permissions['delete terms in acc_dashboard'] = array(
    'name' => 'delete terms in acc_dashboard',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in acc_impacts'.
  $permissions['delete terms in acc_impacts'] = array(
    'name' => 'delete terms in acc_impacts',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in acc_incident_types'.
  $permissions['delete terms in acc_incident_types'] = array(
    'name' => 'delete terms in acc_incident_types',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in acc_units'.
  $permissions['delete terms in acc_units'] = array(
    'name' => 'delete terms in acc_units',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in access_constraint_type'.
  $permissions['delete terms in access_constraint_type'] = array(
    'name' => 'delete terms in access_constraint_type',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in locations'.
  $permissions['delete terms in locations'] = array(
    'name' => 'delete terms in locations',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any global_filter_reset bean'.
  $permissions['edit any global_filter_reset bean'] = array(
    'name' => 'edit any global_filter_reset bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit terms in acc_access_constraints'.
  $permissions['edit terms in acc_access_constraints'] = array(
    'name' => 'edit terms in acc_access_constraints',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in acc_dashboard'.
  $permissions['edit terms in acc_dashboard'] = array(
    'name' => 'edit terms in acc_dashboard',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in acc_impacts'.
  $permissions['edit terms in acc_impacts'] = array(
    'name' => 'edit terms in acc_impacts',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in acc_incident_types'.
  $permissions['edit terms in acc_incident_types'] = array(
    'name' => 'edit terms in acc_incident_types',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in acc_type_of_aid_workers'.
  $permissions['edit terms in acc_type_of_aid_workers'] = array(
    'name' => 'edit terms in acc_type_of_aid_workers',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in acc_units'.
  $permissions['edit terms in acc_units'] = array(
    'name' => 'edit terms in acc_units',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in access_constraint_type'.
  $permissions['edit terms in access_constraint_type'] = array(
    'name' => 'edit terms in access_constraint_type',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in organization_types'.
  $permissions['edit terms in organization_types'] = array(
    'name' => 'edit terms in organization_types',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in organizations'.
  $permissions['edit terms in organizations'] = array(
    'name' => 'edit terms in organizations',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'import acc_access_constraints feeds'.
  $permissions['import acc_access_constraints feeds'] = array(
    'name' => 'import acc_access_constraints feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import acc_access_events_feed feeds'.
  $permissions['import acc_access_events_feed feeds'] = array(
    'name' => 'import acc_access_events_feed feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import acc_dashboard feeds'.
  $permissions['import acc_dashboard feeds'] = array(
    'name' => 'import acc_dashboard feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import acc_impacts_feed feeds'.
  $permissions['import acc_impacts_feed feeds'] = array(
    'name' => 'import acc_impacts_feed feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import acc_impediments_csv_impoter feeds'.
  $permissions['import acc_impediments_csv_impoter feeds'] = array(
    'name' => 'import acc_impediments_csv_impoter feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import acc_incident_csv_impoter feeds'.
  $permissions['import acc_incident_csv_impoter feeds'] = array(
    'name' => 'import acc_incident_csv_impoter feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import acc_incident_types_feed feeds'.
  $permissions['import acc_incident_types_feed feeds'] = array(
    'name' => 'import acc_incident_types_feed feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import acc_restictions_csv_impoter feeds'.
  $permissions['import acc_restictions_csv_impoter feeds'] = array(
    'name' => 'import acc_restictions_csv_impoter feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import acc_units feeds'.
  $permissions['import acc_units feeds'] = array(
    'name' => 'import acc_units feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import csv_organization_types feeds'.
  $permissions['import csv_organization_types feeds'] = array(
    'name' => 'import csv_organization_types feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import csv_organizations_local feeds'.
  $permissions['import csv_organizations_local feeds'] = array(
    'name' => 'import csv_organizations_local feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock acc_access_constraints feeds'.
  $permissions['unlock acc_access_constraints feeds'] = array(
    'name' => 'unlock acc_access_constraints feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock acc_access_events_feed feeds'.
  $permissions['unlock acc_access_events_feed feeds'] = array(
    'name' => 'unlock acc_access_events_feed feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock acc_dashboard feeds'.
  $permissions['unlock acc_dashboard feeds'] = array(
    'name' => 'unlock acc_dashboard feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock acc_impacts_feed feeds'.
  $permissions['unlock acc_impacts_feed feeds'] = array(
    'name' => 'unlock acc_impacts_feed feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock acc_impediments_csv_impoter feeds'.
  $permissions['unlock acc_impediments_csv_impoter feeds'] = array(
    'name' => 'unlock acc_impediments_csv_impoter feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock acc_incident_csv_impoter feeds'.
  $permissions['unlock acc_incident_csv_impoter feeds'] = array(
    'name' => 'unlock acc_incident_csv_impoter feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock acc_incident_types_feed feeds'.
  $permissions['unlock acc_incident_types_feed feeds'] = array(
    'name' => 'unlock acc_incident_types_feed feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock acc_restictions_csv_impoter feeds'.
  $permissions['unlock acc_restictions_csv_impoter feeds'] = array(
    'name' => 'unlock acc_restictions_csv_impoter feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock acc_units feeds'.
  $permissions['unlock acc_units feeds'] = array(
    'name' => 'unlock acc_units feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock csv_organization_types feeds'.
  $permissions['unlock csv_organization_types feeds'] = array(
    'name' => 'unlock csv_organization_types feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock csv_organizations_local feeds'.
  $permissions['unlock csv_organizations_local feeds'] = array(
    'name' => 'unlock csv_organizations_local feeds',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'view any global_filter_reset bean'.
  $permissions['view any global_filter_reset bean'] = array(
    'name' => 'view any global_filter_reset bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
