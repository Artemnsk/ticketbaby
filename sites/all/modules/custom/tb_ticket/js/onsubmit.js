(function($) {
    $(document).ready(function(){
        $("#ticket-node-form").onsubmit = function(){
            alert('asd');
            //return confirm('Please doublecheck all items as you couldn\'t edit this form in future. Are you sure all is OK?');
        }
    });
}) (jQuery);