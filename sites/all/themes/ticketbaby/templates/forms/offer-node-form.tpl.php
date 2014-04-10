<div id=""quote_form">

<table>
    <tr>

        <td>
            <?php print drupal_render_children($form['field_billing_type']) ?>
            <?php print drupal_render_children($form['field_initial_payment']) ?>
            <?php print drupal_render_children($form['field_final_payment_']) ?>
            <?php print drupal_render_children($form['field_quote']) ?>
        </td>

        <td>
            <?php print drupal_render_children($form['field_response']) ?>
            <?php print drupal_render_children($form['field_special_conditions']) ?>
            <?php print drupal_render_children($form) ?>
        </td>

    </tr>
</table>

</div>