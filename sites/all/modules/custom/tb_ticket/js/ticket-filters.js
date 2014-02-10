(function($) {
    function is_visible(element){
        return (element.css('display') !== "none");
    }
    $(document).ready(function(){
        $(".view-filters-expanded").click(function(){
            if(is_visible($('.view-display-id-search_ticket .view-filters'))){
                $('.view-display-id-search_ticket .view-filters').slideUp();
            }else{
                $('.view-display-id-search_ticket .view-filters').slideDown();
            }
        });
    });
}) (jQuery);