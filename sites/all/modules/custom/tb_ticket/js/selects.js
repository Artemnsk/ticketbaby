(function($) {
    $(document).ready(function(){
        var $selects = $('#edit-field-ticket-category-und');
						
	$selects.easyDropDown({
		cutOff: 14,
		wrapperClass: 'tickets-dropdown',
		/*onChange: function(selected){
			// do something
		}*/
	});
    });
}) (jQuery);
