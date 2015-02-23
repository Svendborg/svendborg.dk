<?php
/**
 * @file
 * os2web_ofir_job.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2web_ofir_job_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_os2web_ofir_job';
  $strongarm->value = 'edit-auto-nodetitle';
  $export['additional_settings__active_tab_os2web_ofir_job'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_os2web_ofir_job_date';
  $strongarm->value = 'Ymd';
  $export['date_format_os2web_ofir_job_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__os2web_ofir_job';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'related_block' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'meeting_detail_view' => array(
        'custom_settings' => FALSE,
      ),
      'os2web_meetings_meeting_detail_view' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'spotbox' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'workbench_access' => array(
          'weight' => '0',
        ),
        'metatags' => array(
          'weight' => '7',
        ),
        'redirect' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__os2web_ofir_job'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_os2web_ofir_job';
  $strongarm->value = '0';
  $export['language_content_type_os2web_ofir_job'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_os2web_ofir_job';
  $strongarm->value = array();
  $export['menu_options_os2web_ofir_job'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_os2web_ofir_job';
  $strongarm->value = 'os2web-main-menu:0';
  $export['menu_parent_os2web_ofir_job'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_os2web_ofir_job';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_os2web_ofir_job'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_os2web_ofir_job';
  $strongarm->value = '0';
  $export['node_preview_os2web_ofir_job'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_os2web_ofir_job';
  $strongarm->value = 0;
  $export['node_submitted_os2web_ofir_job'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_os2web_ofir_job_pattern';
  $strongarm->value = 'kommunen/job/[node:title]';
  $export['pathauto_node_os2web_ofir_job_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_os2web_ofir_job';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_os2web_ofir_job'] = $strongarm;

  return $export;
}
