<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function online_sketchbook_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function online_sketchbook_node_info() {
  $items = array(
    'designfile' => array(
      'name' => t('Design File'),
      'module' => 'features',
      'description' => t('Use this to upload Designs to Design File These can be promoted to both the Ideas Wall and Exhibition Area.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function online_sketchbook_views_api() {
  return array(
    'api' => '2',
  );
}
