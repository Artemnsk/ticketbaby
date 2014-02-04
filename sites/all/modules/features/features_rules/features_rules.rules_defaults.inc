<?php
/**
 * @file
 * features_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function features_rules_default_rules_configuration() {
  $items = array();
  $items['rules_attach_ticket_to_user_by_email_if_user_exists'] = entity_import('rules_config', '{ "rules_attach_ticket_to_user_by_email_if_user_exists" : {
      "LABEL" : "Attach ticket to user by email if user exists",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "ticket" ],
      "REQUIRES" : [ "rules", "commerce" ],
      "ON" : { "node_insert--ticket" : { "bundle" : "ticket" } },
      "IF" : [
        { "entity_exists" : { "type" : "user", "property" : "mail", "value" : "[node:field-email]" } }
      ],
      "DO" : [
        { "entity_query" : {
            "USING" : { "type" : "user", "property" : "mail", "value" : [ "node:field-email" ] },
            "PROVIDE" : { "entity_fetched" : { "user_fetched" : "User entity" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "user-fetched" ] },
            "ITEM" : { "list_item_user" : "Current user" },
            "DO" : [
              { "data_set" : { "data" : [ "node:author" ], "value" : [ "list-item-user" ] } }
            ]
          }
        },
        { "entity_save" : { "data" : [ "node" ], "immediate" : 1 } }
      ]
    }
  }');
  $items['rules_create_user_on_ticket_creation_and_attach_node_to_email'] = entity_import('rules_config', '{ "rules_create_user_on_ticket_creation_and_attach_node_to_email" : {
      "LABEL" : "Create user on ticket creation and attach node to email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce", "commerce_checkout" ],
      "ON" : { "node_insert--ticket" : { "bundle" : "ticket" } },
      "IF" : [
        { "NOT entity_exists" : { "type" : "user", "property" : "mail", "value" : "[node:field-email]" } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "user",
              "param_name" : "[node:field-email]",
              "param_mail" : "[node:field-email]"
            },
            "PROVIDE" : { "entity_created" : { "user_created" : "Created user" } }
          }
        },
        { "entity_save" : { "data" : [ "user-created" ], "immediate" : 1 } },
        { "user_add_role" : { "account" : [ "user-created" ], "roles" : { "value" : { "5" : "5" } } } },
        { "user_unblock" : { "account" : [ "user-created" ] } },
        { "data_set" : { "data" : [ "node:author" ], "value" : [ "user-created" ] } },
        { "send_account_email" : {
            "account" : [ "user-created" ],
            "email_type" : "register_no_approval_required"
          }
        },
        { "drupal_message" : { "message" : "User [user-created:name] has been successfully created. Please check your email [user-created:mail] to continue registration." } }
      ]
    }
  }');
  return $items;
}
