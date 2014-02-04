(function($) {
    function render_filters(country){
        if(country.val() == 'All'){
                $("#edit-province-wrapper").hide();
                $("#edit-province").val("All");
                $("#edit-state-wrapper").hide();
                $("#edit-state").val("All");
            }
            if(country.val() == 'CA'){
                $("#edit-province-wrapper").show();
                $("#edit-state-wrapper").hide();
                $("#edit-state").val("All");
            }
            if(country.val() == 'US'){
                $("#edit-province-wrapper").hide();
                $("#edit-province").val("All");
                $("#edit-state-wrapper").show();
            }
    }
    
    $(document).ready(function(){
        render_filters($("#edit-field-location-where-ticket-was-value"));
        $("#edit-field-location-where-ticket-was-value").change(function(){
            render_filters($(this));
        });
    });
}) (jQuery);