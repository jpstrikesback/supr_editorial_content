<?php
/**
 * @file
 * supr_editorial_content.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function supr_editorial_content_default_rules_configuration() {
  $items = array();
  $items['rules_add_author_profile_to_content'] = entity_import('rules_config', '{ "rules_add_author_profile_to_content" : {
      "LABEL" : "Add Author Profile To Content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Content" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [], "node_update" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_author_profile" } },
        { "entity_has_field" : { "entity" : [ "node:author" ], "field" : "field_profile" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "node:field-author-profile" ],
            "value" : [ "node:author:field-profile" ]
          }
        }
      ]
    }
  }');
  $items['rules_change_path_alias_when_blog_post_is_promoted_demoted'] = entity_import('rules_config', '{ "rules_change_path_alias_when_blog_post_is_promoted_demoted" : {
      "LABEL" : "Change Path Alias when Blog Post is Promoted\\/Demoted",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "nodequeue", "rules" ],
      "ON" : { "nodequeue_added" : [], "nodequeue_removed" : [] },
      "IF" : [
        { "nodequeue_rules_condition_node_belongs_to_nodequeue" : {
            "node" : [ "node" ],
            "qids" : { "value" : { "1" : "1", "4" : "4", "6" : "6" } }
          }
        }
      ],
      "DO" : [ { "entity_save" : { "data" : [ "node" ] } } ]
    }
  }');
  return $items;
}
