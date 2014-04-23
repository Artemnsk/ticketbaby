(function($) {
    function is_visible(element){
        return (element.css('display') !== "none");
    }
    $(document).ready(function(){
        $("#contact-dialog").click(function(){
            if(is_visible($('#dialog-node-form'))){
                $('#dialog-node-form').slideUp();
            }else{
                $('#dialog-node-form').slideDown();
            }
        });
    });
}) (jQuery);