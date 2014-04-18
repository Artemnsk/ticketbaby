<?php
/**
 * @see template_preprocess_user_profile()
 */
//dpm($variables);
?>

<?php if($view_mode == "full"): ?>

    <?php if ($is_defender): ?>
        <?php // Liza insert needed html yourself :) ?>
        <article<?php print $attributes; ?>>
            <div class="profile_card_wrapper">
                <div class="profile_card_wrapper_inner">
                    <?php print render($user_profile['user_picture']); ?>
                    <?php if(isset($user_profile['field_fullname'])):?>
                        <?php print render($user_profile['field_fullname']); ?>
                    <?php endif;?>
                </div>
                <?php print render($user_profile['feedback']); ?>
                <div class="profile_card_item">
                    <div class="user_location">
                        <?php if(isset($user_profile['location'])):?>
                            <?php print render($user_profile['location']); ?>
                        <?php endif;?>
                    </div>
                    <div class="user_tickets_defended">
                        <span class="user_tickets_title">Tickets Defended:</span>
                        <span class="user_tickets_number">
                        <?php print render($user_profile['tickets_defended']); ?>
                            </span>
                    </div>
                    <div class="user_tickets_in_progress">
                        <span class="user_tickets_title">Tickets in Progress:</span>
                        <span class="user_tickets_number">
                        <?php print render($user_profile['tickets_in_progress']); ?>
                        </span>
                    </div>
                </div>
                <div class="profile_card_item user_overview">
                    <?php if (isset($user_profile['overview'])): ?>
                        <?php print render($user_profile['overview']); ?>
                    <?php endif; ?>
                </div>
                <div class="user_last_online">
                    <span class="user_online_title">Last Online:</span>
                    <span class="user_online_time">
                    <?php print render($user_profile['last_online']); ?>
                        </span>
                </div>
            </div>
            <?php print $contact_link; ?>
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
        <?php if(isset($user_profile['field_fullname'])):?>
            <?php print render($user_profile['field_fullname']); ?>
        <?php endif;?>
    </div>
<?php endif; ?>
