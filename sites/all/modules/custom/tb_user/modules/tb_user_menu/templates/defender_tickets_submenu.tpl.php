<?php
    global $user;
    $uid = $user->uid;
?>

<span class="defender-ticket-submenu">
    <span>
        <?php print l(t("Posted"), drupal_get_path_alias("tickets/posted"));?>
    </span>
    <span>
        <?php print l(t("Replied"), drupal_get_path_alias("user/$uid/tickets-replied"));?>
    </span>
    <span>
        <?php print l(t("Quoted"), drupal_get_path_alias("user/$uid/tickets-quoted"));?>
    </span>
    <span>
        <?php print l(t("In Progress"), drupal_get_path_alias("user/$uid/tickets-in-progress"));?>
    </span>
    <span>
        <?php print l(t("Defended"), drupal_get_path_alias("user/$uid/tickets-defended"));?>
    </span>
</span>