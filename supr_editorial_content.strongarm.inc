<?php
/**
 * @file
 * supr_editorial_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function supr_editorial_content_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_article';
  $strongarm->value = '0';
  $export['comment_anonymous_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_blog_post';
  $strongarm->value = '0';
  $export['comment_anonymous_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_profile';
  $strongarm->value = '0';
  $export['comment_anonymous_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_article';
  $strongarm->value = '2';
  $export['comment_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_blog_post';
  $strongarm->value = '2';
  $export['comment_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_article';
  $strongarm->value = 0;
  $export['comment_default_mode_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_blog_post';
  $strongarm->value = 1;
  $export['comment_default_mode_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_profile';
  $strongarm->value = 1;
  $export['comment_default_mode_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_article';
  $strongarm->value = '10';
  $export['comment_default_per_page_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_blog_post';
  $strongarm->value = '50';
  $export['comment_default_per_page_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_profile';
  $strongarm->value = '50';
  $export['comment_default_per_page_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_article';
  $strongarm->value = 1;
  $export['comment_form_location_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_blog_post';
  $strongarm->value = 1;
  $export['comment_form_location_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_profile';
  $strongarm->value = 1;
  $export['comment_form_location_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_article';
  $strongarm->value = '0';
  $export['comment_preview_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_blog_post';
  $strongarm->value = '1';
  $export['comment_preview_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_profile';
  $strongarm->value = '1';
  $export['comment_preview_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_profile';
  $strongarm->value = '1';
  $export['comment_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_article';
  $strongarm->value = 0;
  $export['comment_subject_field_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_blog_post';
  $strongarm->value = 0;
  $export['comment_subject_field_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_profile';
  $strongarm->value = 1;
  $export['comment_subject_field_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__article';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'large_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'main_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'profile_teaser_large' => array(
        'custom_settings' => FALSE,
      ),
      'profile_teaser_main' => array(
        'custom_settings' => FALSE,
      ),
      'profile_teaser_small' => array(
        'custom_settings' => FALSE,
      ),
      'profile_teaser_wide' => array(
        'custom_settings' => FALSE,
      ),
      'small_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'wide_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'featured_vertical_bottom' => array(
        'custom_settings' => FALSE,
      ),
      'featured_vertical_mid' => array(
        'custom_settings' => FALSE,
      ),
      'featured_vertical_top' => array(
        'custom_settings' => FALSE,
      ),
      'feature_horizontal_left' => array(
        'custom_settings' => FALSE,
      ),
      'feature_horizontal_mid' => array(
        'custom_settings' => FALSE,
      ),
      'feature_horizontal_right' => array(
        'custom_settings' => FALSE,
      ),
      'thing_term_page' => array(
        'custom_settings' => FALSE,
      ),
      'listing_search_result' => array(
        'custom_settings' => FALSE,
      ),
      'video_in_content' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '8',
        ),
        'metatags' => array(
          'weight' => '10',
        ),
        'redirect' => array(
          'weight' => '9',
        ),
      ),
      'display' => array(
        'easy_social_1' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'featured_vertical_bottom' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'featured_vertical_mid' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'featured_vertical_top' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'feature_horizontal_left' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'feature_horizontal_mid' => array(
            'weight' => '16',
            'visible' => TRUE,
          ),
          'feature_horizontal_right' => array(
            'weight' => '16',
            'visible' => TRUE,
          ),
          'large_teaser' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'main_teaser' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'small_teaser' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'wide_teaser' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'smart_paging' => array(
          'default' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
              'smart_paging_method' => '0',
              'smart_paging_pagebreak' => '<!--pagebreak-->',
              'smart_paging_character_count' => '3072',
              'smart_paging_word_count' => '512',
              'smart_paging_title_display_suffix' => 1,
              'smart_paging_title_suffix' => ': Page ',
            ),
            'weight' => '10',
            'visible' => TRUE,
          ),
          'full' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
              'smart_paging_method' => '2',
              'smart_paging_pagebreak' => '<!--pagebreak-->',
              'smart_paging_character_count' => '3072',
              'smart_paging_word_count' => '512',
              'smart_paging_title_display_suffix' => 1,
              'smart_paging_title_suffix' => ': Page ',
            ),
            'weight' => '4',
            'visible' => TRUE,
          ),
          'featured_vertical_bottom' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
            ),
            'weight' => '11',
            'visible' => FALSE,
          ),
          'featured_vertical_mid' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
            ),
            'weight' => '13',
            'visible' => FALSE,
          ),
          'featured_vertical_top' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
            ),
            'weight' => '11',
            'visible' => FALSE,
          ),
          'feature_horizontal_left' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
            ),
            'weight' => '2',
            'visible' => FALSE,
          ),
          'feature_horizontal_mid' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
            ),
            'weight' => '13',
            'visible' => TRUE,
          ),
          'feature_horizontal_right' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
            ),
            'weight' => '11',
            'visible' => TRUE,
          ),
          'large_teaser' => array(
            'weight' => '10',
            'visible' => TRUE,
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
            ),
          ),
          'main_teaser' => array(
            'weight' => '10',
            'visible' => TRUE,
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
            ),
          ),
          'small_teaser' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
            ),
            'weight' => '11',
            'visible' => FALSE,
          ),
          'wide_teaser' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
            ),
            'weight' => '12',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
            ),
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__blog_post';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'entityreference_view_widget' => array(
        'custom_settings' => TRUE,
      ),
      'large_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'main_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'small_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'wide_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'profile_teaser_large' => array(
        'custom_settings' => FALSE,
      ),
      'profile_teaser_main' => array(
        'custom_settings' => FALSE,
      ),
      'profile_teaser_small' => array(
        'custom_settings' => FALSE,
      ),
      'profile_teaser_wide' => array(
        'custom_settings' => FALSE,
      ),
      'featured_vertical_bottom' => array(
        'custom_settings' => FALSE,
      ),
      'featured_vertical_mid' => array(
        'custom_settings' => FALSE,
      ),
      'featured_vertical_top' => array(
        'custom_settings' => FALSE,
      ),
      'feature_horizontal_left' => array(
        'custom_settings' => FALSE,
      ),
      'feature_horizontal_mid' => array(
        'custom_settings' => FALSE,
      ),
      'feature_horizontal_right' => array(
        'custom_settings' => FALSE,
      ),
      'thing_term_page' => array(
        'custom_settings' => FALSE,
      ),
      'listing_search_result' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'metatags' => array(
          'weight' => '7',
        ),
        'flag' => array(
          'weight' => '9',
        ),
        'redirect' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(
        'easy_social_1' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'large_teaser' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'main_teaser' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'small_teaser' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'wide_teaser' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'featured_vertical_bottom' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'featured_vertical_mid' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'featured_vertical_top' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'feature_horizontal_left' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'feature_horizontal_mid' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'feature_horizontal_right' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'smart_paging' => array(
          'default' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
              'smart_paging_method' => '0',
              'smart_paging_pagebreak' => '<!--pagebreak-->',
              'smart_paging_character_count' => '3072',
              'smart_paging_word_count' => '512',
              'smart_paging_title_display_suffix' => 1,
              'smart_paging_title_suffix' => ': Page ',
            ),
            'weight' => '6',
            'visible' => TRUE,
          ),
          'full' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
              'smart_paging_method' => '0',
              'smart_paging_pagebreak' => '<!--pagebreak-->',
              'smart_paging_character_count' => '',
              'smart_paging_word_count' => '',
              'smart_paging_title_display_suffix' => 1,
              'smart_paging_title_suffix' => ': Page',
            ),
            'weight' => '7',
            'visible' => TRUE,
          ),
          'featured_vertical_bottom' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
            ),
            'weight' => '13',
            'visible' => FALSE,
          ),
          'featured_vertical_mid' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
            ),
            'weight' => '13',
            'visible' => FALSE,
          ),
          'featured_vertical_top' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
            ),
            'weight' => '13',
            'visible' => FALSE,
          ),
          'feature_horizontal_left' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
            ),
            'weight' => '6',
            'visible' => TRUE,
          ),
          'feature_horizontal_mid' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
            ),
            'weight' => '13',
            'visible' => TRUE,
          ),
          'feature_horizontal_right' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
            ),
            'weight' => '13',
            'visible' => TRUE,
          ),
          'main_teaser' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
              'smart_paging_method' => '0',
              'smart_paging_pagebreak' => '<!--pagebreak-->',
              'smart_paging_character_count' => '3072',
              'smart_paging_word_count' => '512',
              'smart_paging_title_display_suffix' => 1,
              'smart_paging_title_suffix' => ': Page ',
            ),
            'weight' => '15',
            'visible' => FALSE,
          ),
          'large_teaser' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
              'smart_paging_method' => '0',
              'smart_paging_pagebreak' => '<!--pagebreak-->',
              'smart_paging_character_count' => '3072',
              'smart_paging_word_count' => '512',
              'smart_paging_title_display_suffix' => 1,
              'smart_paging_title_suffix' => ': Page ',
            ),
            'weight' => '14',
            'visible' => FALSE,
          ),
          'wide_teaser' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
              'smart_paging_method' => '0',
              'smart_paging_pagebreak' => '<!--pagebreak-->',
              'smart_paging_character_count' => '3072',
              'smart_paging_word_count' => '512',
              'smart_paging_title_display_suffix' => 1,
              'smart_paging_title_suffix' => ': Page ',
            ),
            'weight' => '16',
            'visible' => FALSE,
          ),
          'small_teaser' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
              'smart_paging_method' => '0',
              'smart_paging_pagebreak' => '<!--pagebreak-->',
              'smart_paging_character_count' => '3072',
              'smart_paging_word_count' => '512',
              'smart_paging_title_display_suffix' => 1,
              'smart_paging_title_suffix' => ': Page ',
            ),
            'weight' => '16',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
              'smart_paging_method' => '0',
              'smart_paging_pagebreak' => '<!--pagebreak-->',
              'smart_paging_character_count' => '3072',
              'smart_paging_word_count' => '512',
              'smart_paging_title_display_suffix' => 1,
              'smart_paging_title_suffix' => ': Page ',
            ),
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__profile';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'profile_teaser_large' => array(
        'custom_settings' => TRUE,
      ),
      'profile_teaser_main' => array(
        'custom_settings' => TRUE,
      ),
      'profile_teaser_small' => array(
        'custom_settings' => TRUE,
      ),
      'profile_teaser_wide' => array(
        'custom_settings' => TRUE,
      ),
      'large_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'main_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'small_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'wide_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '4',
        ),
        'title' => array(
          'weight' => '15',
        ),
        'path' => array(
          'weight' => '3',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'smart_paging' => array(
          'default' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
              'smart_paging_method' => '0',
              'smart_paging_pagebreak' => '<!--pagebreak-->',
              'smart_paging_character_count' => '3072',
              'smart_paging_word_count' => '512',
              'smart_paging_title_display_suffix' => 1,
              'smart_paging_title_suffix' => ': Page ',
            ),
            'weight' => '10',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => TRUE,
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
            ),
          ),
          'profile_teaser_large' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
              'smart_paging_method' => '0',
              'smart_paging_pagebreak' => '<!--pagebreak-->',
              'smart_paging_character_count' => '3072',
              'smart_paging_word_count' => '512',
              'smart_paging_title_display_suffix' => 1,
              'smart_paging_title_suffix' => ': Page ',
            ),
            'weight' => '11',
            'visible' => FALSE,
          ),
          'profile_teaser_main' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
              'smart_paging_method' => '0',
              'smart_paging_pagebreak' => '<!--pagebreak-->',
              'smart_paging_character_count' => '3072',
              'smart_paging_word_count' => '512',
              'smart_paging_title_display_suffix' => 1,
              'smart_paging_title_suffix' => ': Page ',
            ),
            'weight' => '10',
            'visible' => FALSE,
          ),
          'profile_teaser_small' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
              'smart_paging_method' => '0',
              'smart_paging_pagebreak' => '<!--pagebreak-->',
              'smart_paging_character_count' => '3072',
              'smart_paging_word_count' => '512',
              'smart_paging_title_display_suffix' => 1,
              'smart_paging_title_suffix' => ': Page ',
            ),
            'weight' => '14',
            'visible' => FALSE,
          ),
          'profile_teaser_wide' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
              'smart_paging_method' => '0',
              'smart_paging_pagebreak' => '<!--pagebreak-->',
              'smart_paging_character_count' => '3072',
              'smart_paging_word_count' => '512',
              'smart_paging_title_display_suffix' => 1,
              'smart_paging_title_suffix' => ': Page ',
            ),
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__tags';
  $strongarm->value = array(
    'view_modes' => array(
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'section_link' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'smart_paging' => array(
          'default' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
              'smart_paging_method' => '0',
              'smart_paging_pagebreak' => '<!--pagebreak-->',
              'smart_paging_character_count' => '3072',
              'smart_paging_word_count' => '512',
              'smart_paging_title_display_suffix' => 1,
              'smart_paging_title_suffix' => ': Page ',
            ),
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '10',
            'visible' => TRUE,
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
            ),
          ),
          'full' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
            ),
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'description' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'smart_paging' => array(
          'default' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
              'smart_paging_method' => '0',
              'smart_paging_pagebreak' => '<!--pagebreak-->',
              'smart_paging_character_count' => '3072',
              'smart_paging_word_count' => '512',
              'smart_paging_title_display_suffix' => 1,
              'smart_paging_title_suffix' => ': Page ',
            ),
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'summary' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_article';
  $strongarm->value = array();
  $export['menu_options_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_blog_post';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_profile';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_article';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_blog_post';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_profile';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_article';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_blog_post';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_profile';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_article';
  $strongarm->value = '1';
  $export['node_preview_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_blog_post';
  $strongarm->value = '1';
  $export['node_preview_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_profile';
  $strongarm->value = '1';
  $export['node_preview_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_article';
  $strongarm->value = 0;
  $export['node_submitted_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_blog_post';
  $strongarm->value = 1;
  $export['node_submitted_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_profile';
  $strongarm->value = 0;
  $export['node_submitted_profile'] = $strongarm;

  return $export;
}
