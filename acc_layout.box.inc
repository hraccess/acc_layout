<?php
/**
 * @file
 * acc_layout.box.inc
 */

/**
 * Implements hook_default_box().
 */
function acc_layout_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'acc_access_links';
  $box->plugin_key = 'simple';
  $box->title = 'Access Links';
  $box->description = 'To display links for Access Module ';
  $box->options = array(
    'body' => array(
      'value' => '<table style="width: 500px;" align="left" border="0" cellpadding="1" cellspacing="1"><tbody><tr><td colspan="2"><a href="access/incidents">Access Incidents</a></td></tr><tr><td>&nbsp;&nbsp;&nbsp;&nbsp;<a href="access/dashboard/factsheet-access-incidents">Statistical Report</a></td></tr><tr><td colspan="2"><a href="access/restrictions">Restriction on movement within the country</a></td></tr><tr><td>&nbsp;&nbsp;&nbsp;&nbsp;<a href="access/dashboard/factsheet-restriction-movement">Statistical Report</a></td></tr><tr><td colspan="2"><a href="access/impediments">Impediments on entry into the country</a></td></tr><tr><td>&nbsp;&nbsp;&nbsp;&nbsp;<a href="access/dashboard/factsheet-impediments-entry">Statistical Report</a></td></tr><tr><td><a href="access/access-policy">Access Policy</a></td></tr><tr><td colspan="2"><a href="admin/structure/taxonomy">Manage Categories</a></td></tr><tr><td colspan="2"><a href="access/import_db_parm">Import Content</a><br>&nbsp;</td></tr></tbody></table><p>&nbsp;</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['acc_access_links'] = $box;

  return $export;
}
