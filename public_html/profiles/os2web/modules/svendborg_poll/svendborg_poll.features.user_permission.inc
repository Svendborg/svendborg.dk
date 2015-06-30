<?php
/**
 * @file
 * svendborg_poll.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function svendborg_poll_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'cancel own vote'.
  $permissions['cancel own vote'] = array(
    'name' => 'cancel own vote',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'poll',
  );

  // Exported permission: 'inspect all votes'.
  $permissions['inspect all votes'] = array(
    'name' => 'inspect all votes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'poll',
  );

  // Exported permission: 'vote on polls'.
  $permissions['vote on polls'] = array(
    'name' => 'vote on polls',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'poll',
  );

  return $permissions;
}
