<?php
/**
 * @see template_preprocess_user_profile()
 */
//dpm($variables);
?>

<?php if($view_mode == "full"): ?>

    <?php if($is_defender):?>
        <?php // Liza insert needed html yourself :) ?>
        <article<?php print $attributes; ?>>
          <div class="profile_card_wrapper">
            <?php print render($user_profile['user_picture']); ?>
            <?php print render($user_profile['field_fullname']); ?>
            Location:       <?php print render($user_profile['location']); ?>
            <?php print render($user_profile['tickets_defended']); ?>
            <?php print render($user_profile['tickets_in_progress']); ?>
            <?php print render($user_profile['last_online']); ?>
            <?php if(isset($user_profile['overview'])): ?>
                <?php print render($user_profile['overview']); ?>
            <?php endif; ?>
            <?php print render($user_profile['feedback']); ?>
            </div>
        </article>

    <?php else:?>

        <article<?php print $attributes; ?>>
            <?php print render($user_profile); ?>
        </article>

    <?php endif;?>

<?php elseif($view_mode == "dialogs"): ?>
    <div class="dialogs-user-image">
        <?php print render($user_profile['user_picture']); ?>
    </div>
    <div class="dialogs-user-fullname">
        <?php print render($user_profile['field_fullname']); ?>
    </div>
<?php endif; ?>
