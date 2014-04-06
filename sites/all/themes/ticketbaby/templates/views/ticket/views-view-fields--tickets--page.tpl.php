<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 * 
 */

?>
<?php //dpm($fields);?>
<a href="<?php print drupal_get_path_alias('/node/'. $fields['nid']->content); ?>">
<table class="respond-item-table">
  <tr>   
    <td class="td_category">
      <?php print ticketbaby_views_fields_row($fields['field_ticket_category']);?>
    </td>
    <td class="td_date">
      <?php print ticketbaby_views_fields_row($fields['created']);?>
    </td>
  </tr>
  <tr>
    <td colspan="2" class="td_body">
      <?php print ticketbaby_views_fields_row($fields['field_were_there_any_special_cir']);?>
    </td>
  </tr>
</table>
</a>