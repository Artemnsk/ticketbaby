<div id="quote_form">
        <div class="give_quote_left">
            <?php print drupal_render_children($form['field_billing_type']) ?>
            <?php print drupal_render_children($form['field_initial_payment']) ?>
            <?php print drupal_render_children($form['field_final_payment_']) ?>
            <?php print drupal_render_children($form['field_quote']) ?>
        </div>

        <div class="give_quote_right">
            <div class="quote_item"><?php print drupal_render_children($form['field_response']) ?></div>
            <div class="quote_item"><?php print drupal_render_children($form['field_special_conditions']) ?></div>
                <div class="quote_item"><?php print drupal_render_children($form) ?></div>
        </div>
</div>