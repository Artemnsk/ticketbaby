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
        <?php print l(t("Ticket Details"), "node/$ticket_id");?>
    </span>

    <?php // If ticket is replied - show messages. Else - "reply". ?>
    <?php if($has_dialog): ?>
        <span>
            <?php print l(t("Messages"), "node/$dialog_id");?>
        </span>
    <?php else: ?>
        <?php /* NOTHING FOR NOW
        <span>
            <?php print l(t("Reply"), "node/add/dialog/ticket/$ticket_id");?>
        </span>
        */ ?>
    <?php endif;?>

    <?php // Link to quote page is quote is exist OR link to quote form otherwise. ?>
    <?php if($has_quote): ?>
        <span>
            <?php print l(t("Quote"), "node/$quote_id");?>
        </span>
    <?php else: ?>
        <span>
            <?php print l(t("Quote"), "node/add/offer/$ticket_id");?>
        </span>
    <?php endif;?>
</span>