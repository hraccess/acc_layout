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
  $context->name = 'acc_dashboard';
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
        'views-acc_incident_map-block' => array(
          'module' => 'views',
          'delta' => 'acc_incident_map-block',
          'region' => 'content',
          'weight' => '-96',
        ),
        'views-4427e8e55862024fc970a23a5ff766b3' => array(
          'module' => 'views',
          'delta' => '4427e8e55862024fc970a23a5ff766b3',
          'region' => 'content',
          'weight' => '-95',
        ),
        'views-acc_incidents-block_13' => array(
          'module' => 'views',
          'delta' => 'acc_incidents-block_13',
          'region' => 'content',
          'weight' => '-94',
        ),
        'views-e6dfdea8e92229c2f1bc9edaa448f190' => array(
          'module' => 'views',
          'delta' => 'e6dfdea8e92229c2f1bc9edaa448f190',
          'region' => 'content',
          'weight' => '-93',
        ),
        'views-00e6a0320dc4829b086d1f85612ca1f2' => array(
          'module' => 'views',
          'delta' => '00e6a0320dc4829b086d1f85612ca1f2',
          'region' => 'content',
          'weight' => '-92',
        ),
        'views-97e245152b716aa4b8b5c3854897a9bf' => array(
          'module' => 'views',
          'delta' => '97e245152b716aa4b8b5c3854897a9bf',
          'region' => 'content',
          'weight' => '-91',
        ),
        'views-acc_incidents-block_14' => array(
          'module' => 'views',
          'delta' => 'acc_incidents-block_14',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'global_filter-global_filter_3' => array(
          'module' => 'global_filter',
          'delta' => 'global_filter_3',
          'region' => 'sidebar_second',
          'weight' => '-79',
        ),
        'bean-filter-reset---incident-date' => array(
          'module' => 'bean',
          'delta' => 'filter-reset---incident-date',
          'region' => 'sidebar_second',
          'weight' => '-78',
        ),
        'global_filter-global_filter_1' => array(
          'module' => 'global_filter',
          'delta' => 'global_filter_1',
          'region' => 'sidebar_second',
          'weight' => '-77',
        ),
        'bean-filter-reset---access-constraint' => array(
          'module' => 'bean',
          'delta' => 'filter-reset---access-constraint',
          'region' => 'sidebar_second',
          'weight' => '-76',
        ),
        'global_filter-global_filter_2' => array(
          'module' => 'global_filter',
          'delta' => 'global_filter_2',
          'region' => 'sidebar_second',
          'weight' => '-75',
        ),
        'bean-filter-reset---location' => array(
          'module' => 'bean',
          'delta' => 'filter-reset---location',
          'region' => 'sidebar_second',
          'weight' => '-74',
        ),
        'global_filter-global_filter_4' => array(
          'module' => 'global_filter',
          'delta' => 'global_filter_4',
          'region' => 'sidebar_second',
          'weight' => '-73',
        ),
        'bean-filter-reset---clusters' => array(
          'module' => 'bean',
          'delta' => 'filter-reset---clusters',
          'region' => 'sidebar_second',
          'weight' => '-72',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['acc_dashboard'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'acc_reports';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'access/acc_dashboard/all-access-constraints' => 'access/acc_dashboard/all-access-constraints',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-4427e8e55862024fc970a23a5ff766b3' => array(
          'module' => 'views',
          'delta' => '4427e8e55862024fc970a23a5ff766b3',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-beb797cf4a6ef5245976d83db589bfea' => array(
          'module' => 'views',
          'delta' => 'beb797cf4a6ef5245976d83db589bfea',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-97e245152b716aa4b8b5c3854897a9bf' => array(
          'module' => 'views',
          'delta' => '97e245152b716aa4b8b5c3854897a9bf',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-9530b237af077598d4d1293f1eb1e5ea' => array(
          'module' => 'views',
          'delta' => '9530b237af077598d4d1293f1eb1e5ea',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-6cd3ea0e92d6446ff8e9517fb7944b5e' => array(
          'module' => 'views',
          'delta' => '6cd3ea0e92d6446ff8e9517fb7944b5e',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-6cc5ab1d2040eda56f57f420aedcd235' => array(
          'module' => 'views',
          'delta' => '6cc5ab1d2040eda56f57f420aedcd235',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-00e6a0320dc4829b086d1f85612ca1f2' => array(
          'module' => 'views',
          'delta' => '00e6a0320dc4829b086d1f85612ca1f2',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-b158025435e926e6bf2205be53cf6566' => array(
          'module' => 'views',
          'delta' => 'b158025435e926e6bf2205be53cf6566',
          'region' => 'content',
          'weight' => '-3',
        ),
        'views-e6dfdea8e92229c2f1bc9edaa448f190' => array(
          'module' => 'views',
          'delta' => 'e6dfdea8e92229c2f1bc9edaa448f190',
          'region' => 'content',
          'weight' => '-2',
        ),
        'views-5d57683950ee3be3dc1b39fe69f4af6a' => array(
          'module' => 'views',
          'delta' => '5d57683950ee3be3dc1b39fe69f4af6a',
          'region' => 'content',
          'weight' => '-1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['acc_reports'] = $context;

  return $export;
}
