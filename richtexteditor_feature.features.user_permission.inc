<?php
/**
 * @file
 * richtexteditor_feature.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function richtexteditor_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer ckeditor
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: administer imce
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: customize ckeditor
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: show format selection for comment
  $permissions['show format selection for comment'] = array(
    'name' => 'show format selection for comment',
    'roles' => array(),
  );

  // Exported permission: show format selection for media
  $permissions['show format selection for media'] = array(
    'name' => 'show format selection for media',
    'roles' => array(),
  );

  // Exported permission: show format selection for node
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(),
  );

  // Exported permission: show format selection for taxonomy_term
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(),
  );

  // Exported permission: show format selection for user
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(),
  );

  // Exported permission: show format tips
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Manager',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show more format tips link
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(),
  );

  // Exported permission: use text format filtered_html
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Foodie',
      2 => 'Manager',
      3 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Manager',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
