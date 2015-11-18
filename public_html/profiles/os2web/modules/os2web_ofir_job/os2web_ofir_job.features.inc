<?php
/**
 * @file
 * os2web_ofir_job.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_ofir_job_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_ofir_job_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function os2web_ofir_job_node_info() {
  $items = array(
    'os2web_ofir_job' => array(
      'name' => t('Emply job'),
      'base' => 'node_content',
      'description' => t('Præsentere importeret job opslag fra Emply.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
