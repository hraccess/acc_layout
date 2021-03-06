<?php
/**
 * @file
 * acc_layout.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function acc_layout_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'About Humanitarian Access',
    'description' => '<div class="boxes-box-content"><p><strong>Background</strong></p><p>Since 2008, PDSB has been developing tools to provide guidance on access-related issues to enable actors to:</p><p>1. better monitor and report on humanitarian access, and</p><p>2. provide timely and pertinent information and analysis to inform a wide range of stakeholders on key constraints to humanitarian access.</p><p>Specifically, PDS has developed an Access Monitoring and Reporting Framework (AMRF) guide to assist in the collection of accurate and routine information on access constraints in a systematic and standardized manner. Partnered with this framework is a database developed in Microsoft Access, which was rolled out at a humanitarian access workshop in Cairo in September 2010. While the database was a solid first attempt to consolidate and standardize data across all countries and paved the way for a framework for better analysis, the actual usage of this framework was low.&nbsp; One of the recommendations presented in the latest humanitarian access workshop in January 2012 in Nairobi was the need to upgrade the humanitarian access database to a modular web based platform, factoring in all other information already being collected and pertinent to OCHA and its humanitarian partners in country.&nbsp; Streamlining data collection and analysis are vital to ensure data quality, integrity and sustainability given limited resources.</p><p><strong>Objective</strong></p><p>Design and implement a modular web based database to collect, process and analyze information on<a class="views-ajax-processed-processed" href="https://pak.humanitarianresponse.info/admin/structure/views/view/acc_about_humanitarian_access/edit#_ftn1" id="_ftnref1" name="_ftnref1" title="">[1]</a>:</p><p>1. Incidents of constrained access and their impact on response</p><p>2. Formal or informal policies affecting access, and</p><p>3. Actions Taken and Outcomes.</p><p><strong>Scope</strong></p><p>The humanitarian access database will be a tool to support OCHA country offices to monitor and report access constraints at country level,<a class="views-ajax-processed-processed" href="https://pak.humanitarianresponse.info/admin/structure/views/view/acc_about_humanitarian_access/edit#_ftn2" id="_ftnref2" name="_ftnref2" title="">[2]</a> as stated in the AMRF. A module to exchange information between country offices and headquarters will be available in order to facilitate the preparation of standardized analysis of access constraints at global and regional levels.</p><p><a class="views-ajax-processed-processed" href="https://pak.humanitarianresponse.info/admin/structure/views/view/acc_about_humanitarian_access/edit#_ftnref1" id="_ftn1" name="_ftn1" title="">[1]</a> For more information about these three components, please see the AMRF (revised May 2012) Community of Practice: <a class="views-ajax-processed-processed" href="http://globalhumanitarianaccesswg.pbworks.com/w/browse/#view=ViewFolder&amp;param=AMRF%20background">http://globalhumanitarianaccesswg.pbworks.com/w/browse/#view=ViewFolder&amp;param=AMRF%20background</a></p><p><a class="views-ajax-processed-processed" href="https://pak.humanitarianresponse.info/admin/structure/views/view/acc_about_humanitarian_access/edit#_ftnref2" id="_ftn2" name="_ftn2" title="">[2]</a> Nonetheless this database will allow OCHA staff and other humanitarian actors to collect, process and analyze incidents in cross border areas, i.e. CAR, DRC, South Sudan.</p></div><p>&nbsp;</p>',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '6d4ab723-dcc3-435d-b3bc-85add77abaaa',
    'vocabulary_machine_name' => 'acc_dashboard',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 449,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1378811290,
          'changed' => 1378811290,
        ),
      ),
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'accdashboard/about-humanitarian-access',
        'language' => 'en',
      ),
    ),
  );
  return $terms;
}
