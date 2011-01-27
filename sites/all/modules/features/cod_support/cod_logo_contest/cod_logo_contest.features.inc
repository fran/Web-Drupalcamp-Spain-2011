<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function cod_logo_contest_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_flag_default_flags().
 */
function cod_logo_contest_flag_default_flags() {
$flags = array();
// Exported flag: "Vote a logo".
$flags[] = array (
  'content_type' => 'node',
  'name' => 'logo_vote',
  'title' => 'Vote a logo',
  'global' => '0',
  'types' => 
  array (
    0 => 'logo',
  ),
  'flag_short' => 'Vote this logo',
  'flag_long' => '',
  'flag_message' => '',
  'unflag_short' => 'Remove voto for this logo',
  'unflag_long' => '',
  'unflag_message' => '',
  'unflag_denied_text' => '',
  'link_type' => 'toggle',
  'roles' => 
  array (
    'flag' => 
    array (
      0 => 2,
    ),
    'unflag' => 
    array (
      0 => 2,
    ),
  ),
  'show_on_page' => 1,
  'show_on_teaser' => 1,
  'show_on_form' => 0,
  'access_author' => 'others',
  'i18n' => 0,
  'module' => 'cod_logo_contest',
  'api_version' => 2,
);
return $flags;
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function cod_logo_contest_imagecache_default_presets() {
  $items = array(
    'logo_preview' => array(
      'presetname' => 'logo_preview',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '500',
            'height' => '500',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'logo_thumbnail' => array(
      'presetname' => 'logo_thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '250',
            'height' => '250',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function cod_logo_contest_node_info() {
  $items = array(
    'logo' => array(
      'name' => t('Logo'),
      'module' => 'features',
      'description' => t('Image node for a logo contests. Used sometimes to choose the logo for the event.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function cod_logo_contest_views_api() {
  return array(
    'api' => '2',
  );
}
