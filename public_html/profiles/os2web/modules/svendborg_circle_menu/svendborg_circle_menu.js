(function($) {
  $(document).ready(function() {
    $("body").append("<div id='ToolTipDiv'></div>");
    $(".front-indholsdmenu a").each(function() {
      $(this).hover(function(e) {
        $(this).mousemove(function(e) {
          var tipY = e.pageY;
          var tipX = e.pageX;
          $("#ToolTipDiv").css({'top': tipY, 'left': tipX});
        });
        $("#ToolTipDiv").stop(true, true);
        $("#ToolTipDiv")
          .html($(this).attr('title'))
          .fadeIn("fast");
        $(this).removeAttr('title');
      }, function() {
        $("#ToolTipDiv").stop(true, true);
        console.log(Drupal.settings.text_duration_time);
        $("#ToolTipDiv").fadeOut(Drupal.settings.text_duration_time * 1000);
        $(this).attr('title', $("#ToolTipDiv").html());
      });
    });
  });
})( jQuery );
