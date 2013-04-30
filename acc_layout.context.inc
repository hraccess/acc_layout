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
        'views-incident_map-block' => array(
          'module' => 'views',
          'delta' => 'incident_map-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-fb76dd936e2c0b5a00189d8c3fdae3b1' => array(
          'module' => 'views',
          'delta' => 'fb76dd936e2c0b5a00189d8c3fdae3b1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-764ea14287c8739c34e83899f35bfe20' => array(
          'module' => 'views',
          'delta' => '764ea14287c8739c34e83899f35bfe20',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-19861aa67046a617d2b06816cd090bb1' => array(
          'module' => 'views',
          'delta' => '19861aa67046a617d2b06816cd090bb1',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-27ff74af7870bf2757d2ef09861c38cb' => array(
          'module' => 'views',
          'delta' => '27ff74af7870bf2757d2ef09861c38cb',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-39b041216de73167a2811ada034aed30' => array(
          'module' => 'views',
          'delta' => '39b041216de73167a2811ada034aed30',
          'region' => 'content',
          'weight' => '-5',
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
    'menu' => array(
      'values' => array(
        'taxonomy/term/472' => 'taxonomy/term/472',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-fb76dd936e2c0b5a00189d8c3fdae3b1' => array(
          'module' => 'views',
          'delta' => 'fb76dd936e2c0b5a00189d8c3fdae3b1',
          'region' => 'content',
          'weight' => '-30',
        ),
        'views-923edfba55d4dda54ea1562753b86b7a' => array(
          'module' => 'views',
          'delta' => '923edfba55d4dda54ea1562753b86b7a',
          'region' => 'content',
          'weight' => '-29',
        ),
        'views-39b041216de73167a2811ada034aed30' => array(
          'module' => 'views',
          'delta' => '39b041216de73167a2811ada034aed30',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-2ca622ee68808b117f82ba255533c6d1' => array(
          'module' => 'views',
          'delta' => '2ca622ee68808b117f82ba255533c6d1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-764ea14287c8739c34e83899f35bfe20' => array(
          'module' => 'views',
          'delta' => '764ea14287c8739c34e83899f35bfe20',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-82bd34a9512ce49f8ff2edbea6cc47fe' => array(
          'module' => 'views',
          'delta' => '82bd34a9512ce49f8ff2edbea6cc47fe',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-27ff74af7870bf2757d2ef09861c38cb' => array(
          'module' => 'views',
          'delta' => '27ff74af7870bf2757d2ef09861c38cb',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-eaae23bf7047fb2821442446661abd87' => array(
          'module' => 'views',
          'delta' => 'eaae23bf7047fb2821442446661abd87',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-19861aa67046a617d2b06816cd090bb1' => array(
          'module' => 'views',
          'delta' => '19861aa67046a617d2b06816cd090bb1',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-0b8e46365d4e39109b23b625e47d3880' => array(
          'module' => 'views',
          'delta' => '0b8e46365d4e39109b23b625e47d3880',
          'region' => 'content',
          'weight' => '-3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['reports'] = $context;

  return $export;
}
