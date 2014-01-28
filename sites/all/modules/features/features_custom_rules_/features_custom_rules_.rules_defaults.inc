<?php
/**
 * @file
 * features_custom_rules_.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function features_custom_rules__default_rules_configuration() {
  $items = array();
  $items['rules_create_customer_profile_when_new_customer_created'] = entity_import('rules_config', '{ "rules_create_customer_profile_when_new_customer_created" : {
      "LABEL" : "Create customer profile when new customer created",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "5" : "5" } } } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "profile2",
              "param_type" : "customer_profile",
              "param_user" : [ "account" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        }
      ]
    }
  }');
  $items['rules_createdefender_profile_when_new_defender_created'] = entity_import('rules_config', '{ "rules_createdefender_profile_when_new_defender_created" : {
      "LABEL" : "Create defender profile when new defender created",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "4" : "4" } } } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "profile2",
              "param_type" : "defender_profile",
              "param_user" : [ "account" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        }
      ]
    }
  }');
  return $items;
}
