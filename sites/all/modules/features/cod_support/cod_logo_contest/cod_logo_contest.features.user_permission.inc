<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function cod_logo_contest_user_default_permissions() {
  $permissions = array();

  // Exported permission: create logo content
  $permissions['create logo content'] = array(
    'name' => 'create logo content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_logo_image
  $permissions['edit field_logo_image'] = array(
    'name' => 'edit field_logo_image',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_logo_image
  $permissions['view field_logo_image'] = array(
    'name' => 'view field_logo_image',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
