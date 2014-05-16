<?php
/**
 * @file
 * book_address_2_0_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function book_address_2_0_feature_default_rules_configuration() {
  $items = array();
  $items['rules_choose_category'] = entity_import('rules_config', '{ "rules_choose_category" : {
      "LABEL" : "choose_category",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "address_book_2" : { "label" : "Address book 2", "type" : "book_address" },
        "term" : { "label" : "Term", "type" : "taxonomy_term" }
      },
      "RULES" : [
        { "RULE" : {
            "DO" : [
              { "data_set" : { "data" : [ "address-book-2:field-category" ], "value" : [ "term" ] } }
            ],
            "LABEL" : "Choose"
          }
        }
      ]
    }
  }');
  return $items;
}
