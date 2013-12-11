<?php
/**
 * @file
 * acc_layout.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function acc_layout_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_access_short';
  $strongarm->value = 'd-M-Y';
  $export['date_format_access_short'] = $strongarm;

  return $export;
}
