<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function online_sketchbook_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ideas_wall';
  $context->description = '';
  $context->tag = 'ideas';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'designfile' => 'designfile',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'my_designs' => 'my_designs',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-my_designs-block_1' => array(
          'module' => 'views',
          'delta' => 'my_designs-block_1',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
      'layout' => 'wide',
    ),
    'menu' => 'og',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('ideas');
  $export['ideas_wall'] = $context;

  return $export;
}
