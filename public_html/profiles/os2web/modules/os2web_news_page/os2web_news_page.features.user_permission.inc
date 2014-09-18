<?php
/**
 * @file
 * os2web_news_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function os2web_news_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer all news type'.
  $permissions['administer all news type'] = array(
    'name' => 'administer all news type',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Kommunikation' => 'Kommunikation',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'os2web_news_page',
  );

  // Exported permission: 'handle-4095'.
  $permissions['handle-4095'] = array(
    'name' => 'handle-4095',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'os2web_news_page',
  );

  return $permissions;
}
