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
  $box->delta = 'about_humanitarian_access';
  $box->plugin_key = 'simple';
  $box->title = 'About Humanitarian Access';
  $box->description = 'About Humanitarian Access';
  $box->options = array(
    'body' => array(
      'value' => '<p><strong>Background</strong></p><p>&nbsp;</p><p>PDSB – OCHA has been developing tools in the past years to provide guidance on access-related issues to enable country offices to:</p><ol><li>better monitor and report on humanitarian access</li><li>provide timely and pertinent information and analysis to inform a wide range of stakeholders on key constraints to humanitarian access, and</li><li>advise on different modalities of engagement (i.e. agreements, operational frameworks, etc.) to overcome access constraints.</li></ol><p>&nbsp;</p><p>In line to above, PDSB developed the Humanitarian Access database to identify specific constraints, establish patterns, understand the impact on the suffering of civilians, and identify underlying trends related to access. The purpose of the Humanitarian Access database is to assist in a systematic manner the collection of information on: (i) access constraints and their impact in the humanitarian action, (ii) formal or informal policies to restrict access, and (iii) action taken by humanitarian actors to overcome or mitigate access constraints.</p><p>For more information please visit:<br><br><a href="http://www.unocha.org/what-we-do/policy/thematic-areas/humanitarian-access">http://www.unocha.org/what-we-do/policy/thematic-areas/humanitarian-access</a></p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['about_humanitarian_access'] = $box;

  return $export;
}
