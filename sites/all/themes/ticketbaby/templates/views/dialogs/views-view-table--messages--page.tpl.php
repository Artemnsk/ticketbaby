<?php

/**
 * @file
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $header: An array of header labels keyed by field id.
 * - $caption: The caption for this table. May be empty.
 * - $header_classes: An array of header classes keyed by field id.
 * - $fields: An array of CSS IDs to use for each field id.
 * - $classes: A class or classes to apply to the table, based on settings.
 * - $row_classes: An array of classes to apply to each row, indexed by row
 *   number. This matches the index in $rows.
 * - $rows: An array of row items. Each row is an array of content.
 *   $rows are keyed by row number, fields within rows are keyed by field ID.
 * - $field_classes: An array of classes to apply to each field, indexed by
 *   field id, then row number. This matches the index in $rows.
 * @ingroup views_templates
 */

global $user;

?>
<table <?php if ($classes) { print 'class="'. $classes . '" '; } ?><?php print $attributes; ?>>
    <tbody>
    <?php foreach ($rows as $row_count => $row): ?>
        <?php if($row['uid'] != $user->uid):?>

            <tr <?php if ($row_classes[$row_count]) { print 'class="' . implode(' ', $row_classes[$row_count]) .'"';  } ?>>
                <?php foreach ($row as $field => $content): ?>
                    <?php if($field != 'uid' && $field != 'nid' && $field != 'last_comment_timestamp' && $field != 'comment_body' && $field != 'new_comments'):?>

                        <td <?php if ($field_classes[$field][$row_count]) { print 'class="'. $field_classes[$field][$row_count] . '" '; } ?><?php print is_array($field_attributes[$field][$row_count]) ? drupal_attributes($field_attributes[$field][$row_count]) : ''; ?>>
                            <?php
                                $text = "<span class='dialog-span'>";
                                    if($field == "field_fullname"){
                                        $text .= $content. $row['new_comments']. "<p class='comment_author_date'>". $row['last_comment_timestamp']. "</p>";
                                    }elseif($field == "field_ticket_category"){
                                        $text .= $content. $row['comment_body'];
                                    }else{
                                        $text .= $content;
                                    }
                                $text .= "</span>";
                                print l($text, 'node/'. $row['nid'], array("html" => true));
                            ?>
                        </td>

                    <?php endif;?>
                <?php endforeach; ?>
            </tr>

        <?php endif;?>
    <?php endforeach; ?>
    </tbody>
</table>
