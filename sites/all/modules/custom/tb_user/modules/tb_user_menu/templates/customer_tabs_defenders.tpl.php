<?php
    global $user;
    $uid = $user->uid;
?>

<span class="tabs">
    <span>
        <?php print l(t("Search defender"), "defenders", isset($parent['defenders']) ? $parent['defenders'] : array()) ;?>
    </span>
    <span>
        <?php if($your_defender != null): ?>
            <?php print l(t("Your defender"), "user/$your_defender", isset($parent['your_defender']) ? $parent['your_defender'] : array()) ;?>
        <?php endif; ?>
    </span>
</span>