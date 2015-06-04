<?php
/**
 * @file
 * supr_editorial_content.taxonomy_display.inc
 */

/**
 * Implements hook_taxonomy_display_default_displays().
 */
function supr_editorial_content_taxonomy_display_default_displays() {
  $export = array();

  $taxonomy_display = new stdClass();
  $taxonomy_display->api_version = 1;
  $taxonomy_display->machine_name = 'tags';
  $taxonomy_display->term_display_plugin = 'TaxonomyDisplayTermDisplayHandlerCore';
  $taxonomy_display->term_display_options = '';
  $taxonomy_display->associated_display_plugin = 'TaxonomyDisplayAssociatedDisplayHandlerViews';
  $taxonomy_display->associated_display_options = array(
    'view' => 'tags_landing',
    'display' => 'block_2',
  );
  $taxonomy_display->add_feed = TRUE;
  $taxonomy_display->breadcrumb_display_plugin = 'TaxonomyDisplayBreadcrumbDisplayHandlerIgnore';
  $taxonomy_display->breadcrumb_display_options = '';
  $export['tags'] = $taxonomy_display;

  return $export;
}
