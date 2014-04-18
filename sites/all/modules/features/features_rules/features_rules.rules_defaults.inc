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
      "ACTIVE" : false,
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
  $items['rules_change_author_for_anonymous_ticket_created'] = entity_import('rules_config', '{ "rules_change_author_for_anonymous_ticket_created" : {
      "LABEL" : "Change author for anonymous ticket created",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "ticket" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--ticket" : { "bundle" : "ticket" } },
      "DO" : [
        { "data_set" : { "data" : [ "node:author" ], "value" : [ "site:current-user" ] } },
        { "data_set" : {
            "data" : [ "node:field-full-name" ],
            "value" : [ "site:current-user:field-fullname" ]
          }
        },
        { "entity_save" : { "data" : [ "node" ], "immediate" : 1 } }
      ]
    }
  }');
  $items['rules_create_message_for_new_dialog'] = entity_import('rules_config', '{ "rules_create_message_for_new_dialog" : {
      "LABEL" : "Create message for new dialog",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--dialog" : { "bundle" : "dialog" } },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "node", "value" : [ "node" ] },
            "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "comment",
              "param_subject" : "Ticket discussion",
              "param_node" : [ "variable-added" ],
              "param_author" : [ "site:current-user" ],
              "param_comment_body" : [ "variable-added:body" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        }
      ]
    }
  }');
  $items['rules_create_user_on_ticket_creation_and_attach_node_to_email'] = entity_import('rules_config', '{ "rules_create_user_on_ticket_creation_and_attach_node_to_email" : {
      "LABEL" : "Create user on ticket creation and attach node to email",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
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
  $items['rules_redirect_defender_after_log_in'] = entity_import('rules_config', '{ "rules_redirect_defender_after_log_in" : {
      "LABEL" : "REDIRECT DEFENDER AFTER LOG IN",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "4" : "4" } } } }
      ],
      "DO" : [ { "redirect" : { "url" : "tickets\\/posted" } } ]
    }
  }');
  $items['rules_redirect_users_after_log_in'] = entity_import('rules_config', '{ "rules_redirect_users_after_log_in" : {
      "LABEL" : "REDIRECT CUSTOMER AFTER LOG IN",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "5" : "5" } } } }
      ],
      "DO" : [ { "redirect" : { "url" : "user\\/my-tickets" } } ]
    }
  }');
  $items['rules_send_email_on_respond_creation'] = entity_import('rules_config', '{ "rules_send_email_on_respond_creation" : {
      "LABEL" : "Send email on respond creation",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "respond" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--offer" : { "bundle" : "offer" } },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "user", "value" : [ "node:field-ticket:author" ] },
            "PROVIDE" : { "variable_added" : { "customer" : "customer" } }
          }
        },
        { "mail" : {
            "to" : "[customer:mail]",
            "subject" : "You have a new respond from defender",
            "message" : "One of defenders responded you. See respond on [node:url]\\r\\n[node:field-response]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_send_email_on_respond_update'] = entity_import('rules_config', '{ "rules_send_email_on_respond_update" : {
      "LABEL" : "Send email on respond update",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "respond" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--offer" : { "bundle" : "offer" } },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "user", "value" : [ "node:field-ticket:author" ] },
            "PROVIDE" : { "variable_added" : { "customer" : "customer" } }
          }
        },
        { "mail" : {
            "to" : "[customer:mail]",
            "subject" : "Respond has been updated",
            "message" : "One of defenders updated respond. See full respond on [node:url]\\r\\n[node:field-response]",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : { "message" : "updated" } }
      ]
    }
  }');
  $items['rules_send_email_to_defender_when_comment_created_'] = entity_import('rules_config', '{ "rules_send_email_to_defender_when_comment_created_" : {
      "LABEL" : "Send email to DEFENDER when comment created.",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "respond" ],
      "REQUIRES" : [ "rules", "tb_ticket" ],
      "ON" : { "node_commented--offer" : { "bundle" : "offer" } },
      "IF" : [
        { "NOT data_is" : { "data" : [ "node:author:uid" ], "value" : [ "comment:author:uid" ] } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "user", "value" : [ "node:author" ] },
            "PROVIDE" : { "variable_added" : { "defender" : "Defender" } }
          }
        },
        { "mail" : {
            "to" : "[defender:mail]",
            "subject" : "You have new message from customer.",
            "message" : "You have new message from customer. More details on [node:url]\\r\\n[comment:body]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_test'] = entity_import('rules_config', '{ "rules_test" : {
      "LABEL" : "Send email to CUSTOMER when comment created.",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "respond" ],
      "REQUIRES" : [ "rules", "tb_ticket" ],
      "ON" : { "node_commented--offer" : { "bundle" : "offer" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:author:uid" ], "value" : [ "comment:author:uid" ] } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "user", "value" : [ "node:field-ticket:author" ] },
            "PROVIDE" : { "variable_added" : { "customer" : "Customer" } }
          }
        },
        { "mail" : {
            "to" : "[customer:mail]",
            "subject" : "You have new message from defender.",
            "message" : "You have new message from defender. More details on [node:url]\\r\\n[comment:body]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
