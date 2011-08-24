<?php
/**
 * @file
 * richtexteditor_feature.features.user_role.inc
 */

/**
 * Implementation of hook_user_default_roles().
 */
function richtexteditor_feature_user_default_roles() {
  $roles = array();

  // Exported role: Administrator
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => '4',
  );

  // Exported role: Manager
  $roles['Manager'] = array(
    'name' => 'Manager',
    'weight' => '3',
  );

  return $roles;
}
