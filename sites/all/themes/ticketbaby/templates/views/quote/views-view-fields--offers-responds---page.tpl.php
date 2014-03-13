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
 */

  $class_new = '';
  if(isset($fields['new_comments']) || !empty($fields['timestamp']->content)){
    $class_new = 'new-or-updated';
  }
  
  global $user;
  $defender = in_array('defender', $user->roles) ? true : false;
  
?>
<?php //dpm($fields);?>
<a href="<?php print drupal_get_path_alias('/node/'. $fields['nid_1']->content); ?>">
<table class="respond-item-table <?php print $class_new;?>">
  <tr>   
    <td class="td_username">
      <?php if($defender):?>
        <?php print tb_offer_views_fields_row($fields['field_fullname_1']);?>
      <?php else:?>
        <?php print tb_offer_views_fields_row($fields['field_fullname']);?>
      <?php endif;?>
      <span>
      <?php if(isset($fields['comment_count'])):?>
        <?php print tb_offer_views_fields_row($fields['comment_count']);?>
      <?php endif;?>
      </span>
      <?php //print tb_offer_views_fields_row($fields['nid']);?>
    </td>
    <td class="td_new">
      <?php print tb_offer_views_fields_row($fields['timestamp']);?>
    </td>
    <td class="td_comment_name">
      <?php if(isset($fields['comment_body'])):?>
        <?php print tb_offer_views_fields_row($fields['subject']);?>
        <?php print tb_offer_views_fields_row($fields['comment_body']);?>
      <?php else:?>
        <?php print isset($fields['field_response']) ? tb_offer_views_fields_row($fields['field_response']) : '';?>
      <?php endif;?>
      
    </td>
    <td class="td_comment_date">
      <?php
        $posted = $fields['last_updated']->raw;
        if(time() - $posted <= 24*60*60){
          print tb_offer_views_fields_row($fields['last_updated']);
        }else{
          print date('d/m/Y', $posted);
        }
      ?>
    </td>
  </tr>
</table>
</a>