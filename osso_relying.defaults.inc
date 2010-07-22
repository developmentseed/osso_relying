<?php

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _osso_relying_user_default_permissions() {
  $permissions = array();

  // Exported permission: access user profiles
  $permissions[] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
