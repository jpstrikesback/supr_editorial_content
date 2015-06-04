<?php
/**
 * @file
 * supr_editorial_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function supr_editorial_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function supr_editorial_content_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function supr_editorial_content_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: featured_blog_posts
  $nodequeues['featured_blog_posts'] = array(
    'name' => 'featured_blog_posts',
    'title' => 'Promoted Blog Posts',
    'subqueue_title' => '',
    'size' => 10,
    'link' => 'Promote on Site Blog',
    'link_remove' => 'Demote from Site Blog',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 1,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'blog_post',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: featured_user_blogs
  $nodequeues['featured_user_blogs'] = array(
    'name' => 'featured_user_blogs',
    'title' => 'Promoted User Blogs',
    'subqueue_title' => '',
    'size' => 10,
    'link' => 'Promote Blog',
    'link_remove' => 'Demote Blog',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'blog',
      1 => 'profile',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: sitewide_featured_content
  $nodequeues['sitewide_featured_content'] = array(
    'name' => 'sitewide_featured_content',
    'title' => 'Sitewide Featured Content',
    'subqueue_title' => '',
    'size' => 15,
    'link' => 'Promote This',
    'link_remove' => 'Demote This',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'article',
      1 => 'blog_post',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: top_blogger
  $nodequeues['top_blogger'] = array(
    'name' => 'top_blogger',
    'title' => 'Top Blogger',
    'subqueue_title' => '',
    'size' => 1,
    'link' => 'Make Top Blogger',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'profile',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_node_info().
 */
function supr_editorial_content_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('An article content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'blog_post' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => t('Used to create a single post to a column or blog.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'profile' => array(
      'name' => t('Profile'),
      'base' => 'node_content',
      'description' => t('Create a profile for a person, which may be a user, an author, a staff member, or even a business.'),
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'help' => t('This is the name used as the title of this content. This may be comprised of the First and Last names, or of the Organization name, or any other name that you choose.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
