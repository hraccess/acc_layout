<?php
/**
 * @file
 * acc_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function acc_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dashboard';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'access' => 'access',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-incidents-block_13' => array(
          'module' => 'views',
          'delta' => 'incidents-block_13',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-fb76dd936e2c0b5a00189d8c3fdae3b1' => array(
          'module' => 'views',
          'delta' => 'fb76dd936e2c0b5a00189d8c3fdae3b1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-incidents-block_2' => array(
          'module' => 'views',
          'delta' => 'incidents-block_2',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-incidents-block_3' => array(
          'module' => 'views',
          'delta' => 'incidents-block_3',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-incidents-block_4' => array(
          'module' => 'views',
          'delta' => 'incidents-block_4',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-incidents-block_6' => array(
          'module' => 'views',
          'delta' => 'incidents-block_6',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-incidents-block_5' => array(
          'module' => 'views',
          'delta' => 'incidents-block_5',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-incidents-block_14' => array(
          'module' => 'views',
          'delta' => 'incidents-block_14',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['dashboard'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'reports';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'access/reports' => 'access/reports',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-923edfba55d4dda54ea1562753b86b7a' => array(
          'module' => 'views',
          'delta' => '923edfba55d4dda54ea1562753b86b7a',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-incidents-block_2' => array(
          'module' => 'views',
          'delta' => 'incidents-block_2',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-incidents-block_7' => array(
          'module' => 'views',
          'delta' => 'incidents-block_7',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-incidents-block_3' => array(
          'module' => 'views',
          'delta' => 'incidents-block_3',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-incidents-block_9' => array(
          'module' => 'views',
          'delta' => 'incidents-block_9',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-incidents-block_4' => array(
          'module' => 'views',
          'delta' => 'incidents-block_4',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-incidents-block_10' => array(
          'module' => 'views',
          'delta' => 'incidents-block_10',
          'region' => 'content',
          'weight' => '-3',
        ),
        'views-incidents-block_5' => array(
          'module' => 'views',
          'delta' => 'incidents-block_5',
          'region' => 'content',
          'weight' => '-2',
        ),
        'views-incidents-block_11' => array(
          'module' => 'views',
          'delta' => 'incidents-block_11',
          'region' => 'content',
          'weight' => '-1',
        ),
        'views-incidents-block_6' => array(
          'module' => 'views',
          'delta' => 'incidents-block_6',
          'region' => 'content',
          'weight' => '0',
        ),
        'views-incidents-block_12' => array(
          'module' => 'views',
          'delta' => 'incidents-block_12',
          'region' => 'content',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['reports'] = $context;

  return $export;
}
