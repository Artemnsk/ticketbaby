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
/* SUM - how many "points" for tickets defender has.
 * COUNT - how many tickets in progress + defended
 * in progress (i) -> 1 point
 * defended (d) -> 2 points
 * 2*d + i = SUM
 * d + i = COUNT
 * so we can count how many tickets in progress and defended separately.
 */
$SUM = 0;
$COUNT = 0;
?>

<table <?php if ($classes) { print 'class="'. $classes . '" '; } ?><?php print $attributes; ?>>
   <?php if (!empty($title) || !empty($caption)) : ?>
     <caption><?php print $caption . $title; ?></caption>
  <?php endif; ?>
  <?php if (!empty($header)) : ?>
    <thead>
      <tr>
        <?php foreach ($header as $field => $label): ?>
            <?php if($field != "uid"): ?>
                <th <?php if ($header_classes[$field]) { print 'class="'. $header_classes[$field] . '" '; } ?>>
                    <?php print $label; ?>
                </th>
            <?php endif; ?>
        <?php endforeach; ?>
      </tr>
    </thead>
  <?php endif; ?>
  <tbody>
    <?php foreach ($rows as $row_count => $row): ?>
        <?php
            $SUM = $row['field_status'];
            $COUNT = $row['nid'];
            $row['field_status'] = l(2*$COUNT - $SUM, drupal_get_path_alias("user/". $row['uid']));
            $row['nid'] = l($SUM - $COUNT, drupal_get_path_alias("user/". $row['uid']));
        ?>
      <tr <?php if ($row_classes[$row_count]) { print 'class="' . implode(' ', $row_classes[$row_count]) .'"';  } ?>>
        <?php foreach ($row as $field => $content): ?>
            <?php if($field != "uid"): ?>
                <td <?php if ($field_classes[$field][$row_count]) { print 'class="'. $field_classes[$field][$row_count] . '" '; } ?>>
                    <?php print $content; ?>
                </td>
            <?php endif; ?>
        <?php endforeach; ?>

      </tr>
    <?php endforeach; ?>
  </tbody>
</table>
