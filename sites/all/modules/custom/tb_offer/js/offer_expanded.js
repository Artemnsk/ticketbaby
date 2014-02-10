(function($) {
    $(document).ready(function(){
        function is_visible(element){
            return (element.css('display') !== "none");
        }
        $('.expanded-item').click(function(){
            // Select ticket/offer depends on attribute expanded item has.
            selector = '.' + $(this).attr("for") + ' .node__content';
            if(is_visible($(selector))){
                $(selector).slideUp();
            }else{
                $(selector).slideDown();
            }
        });
    });
}) (jQuery);