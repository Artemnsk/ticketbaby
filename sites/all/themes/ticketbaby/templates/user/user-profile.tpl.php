<?php
/**
 * @see template_preprocess_user_profile()
 */
?>

<?php if($is_defender):?>

    <article<?php print $attributes; ?>>
        <?php print render($user_profile['user_picture']); ?>
        <?php print render($user_profile['field_fullname']); ?>
        <?php print render($user_profile['location']); ?>
        <?php print render($user_profile['tickets_defended']); ?>
        <?php print render($user_profile['tickets_in_progress']); ?>
        <?php print render($user_profile['last_online']); ?>
        <?php if(isset($user_profile['overview'])): ?>
            <?php print render($user_profile['overview']); ?>
        <?php endif; ?>
        <?php print render($user_profile['feedback']); ?>
    </article>

<?php else:?>

    <article<?php print $attributes; ?>>
        <?php print render($user_profile); ?>
    </article>

<?php endif;?>