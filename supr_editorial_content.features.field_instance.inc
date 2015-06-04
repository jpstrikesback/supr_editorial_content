<?php
/**
 * @file
 * supr_editorial_content.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function supr_editorial_content_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-article-body'
  $field_instances['node-article-body'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => 'before_paragraph_1',
          'field_injector_position_extra_settings_querypath_action' => 'append',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
          'more_link' => 1,
          'more_text' => 'Read more',
          'summary_handler' => 'trim',
          'trim_length' => 150,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'ellipsis' => FALSE,
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
          'semantic_field_format' => 0,
          'trim_length' => 600,
          'word_boundary' => FALSE,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-article-field_bean_ref'
  $field_instances['node-article-field_bean_ref'] = array(
    'bundle' => 'article',
    'default_value' => array(
      0 => array(
        'target_id' => 1,
      ),
    ),
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'field_injector_field' => 'body',
          'field_injector_position' => 'before_paragraph_3',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
          'links' => 1,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'field_injector_field' => 'body',
          'field_injector_position' => 'xpath',
          'field_injector_position_extra_settings_querypath_action' => 'before',
          'field_injector_position_extra_settings_querypath_query' => 'find,h2:first',
          'field_injector_position_extra_settings_xpath_selector' => '/html/body/p[1]',
          'links' => 1,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bean_ref',
    'label' => 'Bean Reference',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-article-field_author_profile'
  $field_instances['node-article-field_author_profile'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_author_profile',
    'label' => 'Author',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'hide',
          'fallback' => 'none',
          'skip_perm' => 'bypass node access',
          'status' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_extrawidgets',
      'settings' => array(
        'display_empty' => 0,
        'formatter' => '',
        'formatter_settings' => array(),
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'field_extrawidgets_read_only',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-article-field_image'
  $field_instances['node-article-field_image'] = array(
    'bundle' => 'article',
    'deleted' => 0,
    'description' => 'Upload an image to go with this article.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'image_link' => '',
          'image_style' => 'large',
        ),
        'type' => 'image',
        'weight' => -1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'image_link' => 'content',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => TRUE,
      'default_image' => 0,
      'file_directory' => 'field/image',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-article-field_site_section_term'
  $field_instances['node-article-field_site_section_term'] = array(
    'bundle' => 'article',
    'default_value' => array(
      0 => array(
        'tid' => 4,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_site_section_term',
    'label' => 'Site Section',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 1,
      ),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-article-field_tags'
  $field_instances['node-article-field_tags'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-blog_post-body'
  $field_instances['node-blog_post-body'] = array(
    'bundle' => 'blog_post',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<b>Note</b>: The "Edit Summary" function above can be used to provide a custom teaser for your Blog Post as it appears in certain lists/views.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => 'querypath',
          'field_injector_position_extra_settings_querypath_action' => 'append',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
          'more_link' => 1,
          'more_text' => 'Read More',
          'summary_handler' => 'trim',
          'trim_length' => 150,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'ellipsis' => FALSE,
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
          'trim_length' => 150,
          'word_boundary' => FALSE,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
    'widget_type' => 'text_textarea_with_summary',
  );

  // Exported field_instance: 'node-blog_post-field_author_profile'
  $field_instances['node-blog_post-field_author_profile'] = array(
    'bundle' => 'blog_post',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
          'links' => 1,
          'view_mode' => 'profile_teaser_main',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_author_profile',
    'label' => 'Author',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'hide',
          'fallback' => 'none',
          'skip_perm' => 'bypass node access',
          'status' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_extrawidgets',
      'settings' => array(
        'display_empty' => 0,
        'formatter' => '',
        'formatter_settings' => array(),
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'field_extrawidgets_read_only',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-blog_post-field_main_image'
  $field_instances['node-blog_post-field_main_image'] = array(
    'bundle' => 'blog_post',
    'deleted' => 0,
    'description' => 'Select a Main Image for your Blog Post, which will appear on the Blog Post\'s node page and will also represent the Blog Post in lists.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
          'image_link' => '',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
          'image_link' => '',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_image',
    'label' => 'Main Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'main/blogposts',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'module' => 0,
          'private' => 0,
          'public' => 'public',
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 0,
          'upload' => 'upload',
          'youtube' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-blog_post-field_tags'
  $field_instances['node-blog_post-field_tags'] = array(
    'bundle' => 'blog_post',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-profile-body'
  $field_instances['node-profile-body'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter some background / biographical information if applicable.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'editors_choice' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'ellipsis' => FALSE,
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
          'trim_length' => 150,
          'word_boundary' => FALSE,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Biography',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 19,
    ),
    'widget_type' => 'text_textarea_with_summary',
  );

  // Exported field_instance: 'node-profile-field_facebook_url'
  $field_instances['node-profile-field_facebook_url'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide the full URL for a Facebook page associated with this Profile.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_facebook_url',
    'label' => 'Facebook URL',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-profile-field_profile_address'
  $field_instances['node-profile-field_profile_address'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the full address for this person or organization.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'editors_choice' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 4,
      ),
      'type' => 'text_textarea',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-profile-field_profile_email'
  $field_instances['node-profile-field_profile_email'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter an Email Address for this Profile.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'editors_choice' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_email',
    'label' => 'Email Address',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-profile-field_profile_first_name'
  $field_instances['node-profile-field_profile_first_name'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this is a Person\'s Profile, enter their First Name.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'editors_choice' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_first_name',
    'label' => 'First Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-profile-field_profile_job_title'
  $field_instances['node-profile-field_profile_job_title'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the person\'s Job Title if applicable.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_job_title',
    'label' => 'Job Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-profile-field_profile_last_name'
  $field_instances['node-profile-field_profile_last_name'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this is a Person\'s Profile, enter their Last Name.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'editors_choice' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_last_name',
    'label' => 'Last Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-profile-field_profile_organization'
  $field_instances['node-profile-field_profile_organization'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this profile is an organization or company, enter the name of that organization here. This can take the place of First and Last names to serve as the full name of this profile.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'editors_choice' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_organization',
    'label' => 'Organization',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-profile-field_profile_phone'
  $field_instances['node-profile-field_profile_phone'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a Phone Number for this Profile.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'editors_choice' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_phone',
    'label' => 'Phone Number',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-profile-field_profile_photo'
  $field_instances['node-profile-field_profile_photo'] = array(
    'bundle' => 'profile',
    'deleted' => 0,
    'description' => 'Upload and/or select a Photo for this Profile.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
          'image_link' => '',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'editors_choice' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
          'image_link' => 'content',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
          'image_link' => '',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_photo',
    'label' => 'Photo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'profiles/photos',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
        'allowed_types' => array(
          0 => 'image',
        ),
        'browser_plugins' => array(),
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 0,
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'copy',
            'path' => 'profiles/photos',
          ),
          'source_reference' => array(
            'autocomplete' => 1,
          ),
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-profile-field_twitter'
  $field_instances['node-profile-field_twitter'] = array(
    'bundle' => 'profile',
    'default_value' => array(
      0 => array(
        'value' => '@',
      ),
    ),
    'deleted' => 0,
    'description' => 'Provide a Twitter username for this profile.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_twitter',
    'label' => 'Twitter Username',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'taxonomy_term-sections-field_section_page_link'
  $field_instances['taxonomy_term-sections-field_section_page_link'] = array(
    'bundle' => 'sections',
    'default_value' => array(
      0 => array(
        'title' => '[term:name]',
        'url' => '[f:pathauto_cleanstring:{term:parent}]/[f:pathauto_cleanstring:{term:name}]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'section_link' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_section_page_link',
    'label' => 'Section Page Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'taxonomy_term-sections-field_section_term_icon'
  $field_instances['taxonomy_term-sections-field_section_term_icon'] = array(
    'bundle' => 'sections',
    'deleted' => 0,
    'description' => 'If a site section requires an icon for category lists or sidebar menus/lists you may add it here',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => '',
          'field_injector_position_extra_settings_querypath_action' => '',
          'field_injector_position_extra_settings_querypath_query' => '',
          'field_injector_position_extra_settings_xpath_selector' => '',
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'section_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_section_term_icon',
    'label' => 'Section Term Icon',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'images/section-term/icon',
      'file_extensions' => 'png gif jpg jpeg',
      'imagecrop' => array(
        'doggies_blog_large' => 0,
        'doggies_blog_teaser_large' => 0,
        'doggies_blog_teaser_small' => 0,
        'doggies_main_image' => 0,
      ),
      'max_filesize' => '5 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'default' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'library' => 'library',
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 'upload',
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'user-user-field_profile'
  $field_instances['user-user-field_profile'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'field_injector_field' => '',
          'field_injector_position' => 'before_paragraph_1',
          'links' => 1,
          'view_mode' => 'full',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_profile',
    'label' => 'Profile',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 0,
          'delete_references' => 0,
          'label_plural' => 'profiles',
          'label_singular' => 'profile',
          'match_operator' => 'CONTAINS',
          'override_labels' => 1,
        ),
      ),
      'type' => 'inline_entity_form_single',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<b>Note</b>: The "Edit Summary" function above can be used to provide a custom teaser for your Blog Post as it appears in certain lists/views.');
  t('Address');
  t('Author');
  t('Biography');
  t('Body');
  t('Email Address');
  t('Enter a Phone Number for this Profile.');
  t('Enter an Email Address for this Profile.');
  t('Enter some background / biographical information if applicable.');
  t('Enter the full address for this person or organization.');
  t('Enter the person\'s Job Title if applicable.');
  t('Facebook URL');
  t('First Name');
  t('If a site section requires an icon for category lists or sidebar menus/lists you may add it here');
  t('If this is a Person\'s Profile, enter their First Name.');
  t('If this is a Person\'s Profile, enter their Last Name.');
  t('If this profile is an organization or company, enter the name of that organization here. This can take the place of First and Last names to serve as the full name of this profile.');
  t('Image');
  t('Job Title');
  t('Last Name');
  t('Main Image');
  t('Organization');
  t('Phone Number');
  t('Photo');
  t('Profile');
  t('Provide a Twitter username for this profile.');
  t('Provide the full URL for a Facebook page associated with this Profile.');
  t('Section Page Link');
  t('Section Term Icon');
  t('Select a Main Image for your Blog Post, which will appear on the Blog Post\'s node page and will also represent the Blog Post in lists.');
  t('Site Section');
  t('Tags');
  t('Twitter Username');
  t('Upload an image to go with this article.');
  t('Upload and/or select a Photo for this Profile.');

  return $field_instances;
}
