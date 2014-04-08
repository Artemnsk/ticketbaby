<?php
    global $user;
    $uid = $user->uid;
?>

<span class="defender-ticket-submenu">
    <span>
        <?php print l(t("Posted"), drupal_get_path_alias("tickets/posted"), isset($parent['posted']) ? $parent['posted'] : array()) ;?>
    </span>
    <span>
        <?php print l(t("Replied"), drupal_get_path_alias("tickets/replied"), isset($parent['replied']) ? $parent['replied'] : array()) ;?>
    </span>
    <span>
        <?php print l(t("Quoted"), drupal_get_path_alias("tickets/quoted"), isset($parent['quoted']) ? $parent['quoted'] : array()) ;?>
    </span>
    <span>
        <?php print l(t("In Progress"), drupal_get_path_alias("tickets/in-progress"), isset($parent['in_progress']) ? $parent['in_progress'] : array()) ;?>
    </span>
    <span>
        <?php print l(t("Defended"), drupal_get_path_alias("tickets/defended"), isset($parent['defended']) ? $parent['defended'] : array()) ;?>
    </span>
</span>