<?php
    global $user;
    $uid = $user->uid;
?>

    <h2><?php print $title; ?></h2>
    <h2><?php print "#$nid"; ?></h2>

<span class="tabs">
    <span>
        <?php print l(t("Ticket Details"), "node/$ticket_id");?>
    </span>
    <span>
        <?php print l(t("Quotes"), "ticket/$ticket_id/quotes", isset($parent['quotes']) ? $parent['quotes'] : array()) ;?>
    </span>
    <?php if($has_defender):?>
        <span>
            <?php print l(t("Defender"), "ticket/$ticket_id/defender");?>
        </span>
    <?php endif; ?>
    <span>
        <?php print l(t("Messages"), "ticket/$ticket_id/messages", isset($parent['messages']) ? $parent['messages'] : array());?>
    </span>
</span>