<?php
    global $user;
    $uid = $user->uid;
?>

<h2>
    <?php print $title; ?>
    <?php print "#$nid"; ?>
</h2>

<span class="tabs">
    <span>
        <?php print l(t("Ticket Details"), drupal_get_path_alias("node/$ticket_id"));?>
    </span>

    <?php // If ticket is replied - show messages. Else - "reply". ?>
    <?php if($has_dialog): ?>
        <span>
            <?php print l(t("Messages"), drupal_get_path_alias("node/$dialog_id"));?>
        </span>
    <?php else: ?>
        <span>
            <?php print l(t("Reply"), drupal_get_path_alias("node/add/dialog/ticket/$ticket_id"));?>
        </span>
    <?php endif;?>

    <?php // Link to quote page is quote is exist OR link to quote form otherwise. ?>
    <?php if($has_quote): ?>
        <span>
            <?php print l(t("Quote"), drupal_get_path_alias("node/$quote_id"));?>
        </span>
    <?php else: ?>
        <span>
            <?php print l(t("Quote"), drupal_get_path_alias("node/add/offer/$ticket_id"));?>
        </span>
    <?php endif;?>
</span>