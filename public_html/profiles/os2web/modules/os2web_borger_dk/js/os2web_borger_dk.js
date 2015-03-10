/**
 * @file os2web_borger_dk.js
 */

(function($) {
  Drupal.behaviors.os2web_borger_dk = {
    attach: function(context) {
      $("div.mArticle").hide();
      $(".microArticle h2.mArticle").click(function() {
        var myid = $(this).attr('id');
        var style = $('div.' + myid).css('display');
        if (style == 'none') {
          var button = $(this).parent().find('.gplus');
          $("div." + myid).show("500");
          button.addClass('gminus');
          button.removeClass('gplus');
        }
        else {
          $("div." + myid).hide("500");
          var button = $(this).parent().find('.gminus');
          button.addClass('gplus');
          button.removeClass('gminus');
        }
      });
    }
  }
})(jQuery);
