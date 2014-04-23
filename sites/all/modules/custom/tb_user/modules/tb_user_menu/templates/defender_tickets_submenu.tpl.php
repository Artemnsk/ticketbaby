<?php
    global $user;
    $uid = $user->uid;
?>

<span class="defender-ticket-submenu">
    <span>
        <?php print l(t("Posted"), "tickets/posted", isset($parent['posted']) ? $parent['posted'] : array()) ;?>
    </span>
    <span>
        <?php print l(t("Replied"), "tickets/replied", isset($parent['replied']) ? $parent['replied'] : array()) ;?>
    </span>
    <span>
        <?php print l(t("Quoted"), "tickets/quoted", isset($parent['quoted']) ? $parent['quoted'] : array()) ;?>
    </span>
    <span>
        <?php print l(t("In Progress"), "tickets/in-progress", isset($parent['in_progress']) ? $parent['in_progress'] : array()) ;?>
    </span>
    <span>
        <?php print l(t("Defended"), "tickets/defended", isset($parent['defended']) ? $parent['defended'] : array()) ;?>
    </span>
</span>