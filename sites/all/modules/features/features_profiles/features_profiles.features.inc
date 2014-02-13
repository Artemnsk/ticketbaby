<?php
/**
 * @file
 * features_profiles.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function features_profiles_default_profile2_type() {
  $items = array();
  $items['customer_profile'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "customer_profile",
    "label" : "Customer profile",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 0, "use_one_page" : 1 },
    "rdf_mapping" : []
  }');
  $items['defender_profile'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "defender_profile",
    "label" : "Defender profile",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 0, "use_one_page" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
