<?php
/**
 * @file
 * os2web_postlister.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_postlister_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_postlister_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function os2web_postlister_node_info() {
  $items = array(
    'os2web_acadre_postlists' => array(
      'name' => t('Postlister'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'postliste_import' => array(
      'name' => t('Postliste Import'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
  );
  return $items;
}
