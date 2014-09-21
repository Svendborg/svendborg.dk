<?php
/**
 * @file
 * os2web_postlister.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function os2web_postlister_user_default_roles() {
  $roles = array();

  // Exported role: Postlister.
  $roles['Postlister'] = array(
    'name' => 'Postlister',
    'weight' => 10,
  );

  return $roles;
}
