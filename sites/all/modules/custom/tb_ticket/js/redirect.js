(function($) {
    $(document).ready(function(){
        $("#edit-field-ticket-category-und").change(function(){
            window.location.href = "/node/add/ticket/" + $(this).val();
        });
    });
}) (jQuery);