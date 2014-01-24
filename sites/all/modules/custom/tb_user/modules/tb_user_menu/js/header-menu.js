(function($){
  $(document).ready(function(){
    menu_li = $('#block-menu-menu-header-menu-sign-in').children('.menu').children('li');
    //menu_li.children("ul").hide();
    menu_li.mouseover(function(){
        $(this).children("ul").show();
    });
    menu_li.mouseleave(function(){
        $(this).children("ul").hide();
    });

  });
})(jQuery);