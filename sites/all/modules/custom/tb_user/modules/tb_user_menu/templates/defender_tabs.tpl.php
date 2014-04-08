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
    <?php if($has_reply):?>
        <span>
            <?php print l(t("Messages"), "user/$uid/ticket/$ticket_id/reply");?>
        </span>
    <?php elseif($reply):?>
        <span>
            <?php print l(t("Reply"), "#");?>
        </span>
    <?php endif;?>
    <span>
        <?php print l(t("Quote"), drupal_get_path_alias("node/add/offer/$ticket_id"));?>
    </span>
</span>