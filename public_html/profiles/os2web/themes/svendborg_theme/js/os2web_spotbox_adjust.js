
(function($) {

  /**
   * Script to move spotboxes around, where there are room. Eg. if any roomm
   * available under right sidebar, put some there.
   *
   * Also adds some cleafixes.
   */
  $(window).load(function(){

    var $region_sidebar = $('.region-sidebar-second'),
        $spotboxes = $('.node-os2web-spotbox-box'),
        $region_content = $('.region-content'),
        $qty = $spotboxes.length,
        $spotboxes_height = $spotboxes.outerHeight();

    // Be sure to only do it when not on mobile width.
    if ($region_sidebar.length &&
        $(window).width() > 768 &&
        ($('body').hasClass('page-node') || ($('body').hasClass('page-taxonomy-term')))) {
      $spotboxes.each(function(i){

        if (check_height($qty)) {
          var $spotbox = $(this);
          spotbox_change_place($spotbox);
        }
      });
    }

    function check_height($qty) {
      var sidebar_height = $region_sidebar.outerHeight(),
          content_height = $region_content.outerHeight();
      var $diff = (content_height - sidebar_height) / $spotboxes_height;
      // Return true if the difference is more than 1.5 time of spotbox's height.
      if ($diff > 1.5 && $diff < 2) {
        if (($('.region-content').hasClass('col-md-6') || $('.region-content').hasClass('col-xs-6')
          || $('.region-content').hasClass('col-sm-6')) && $qty % 2 == 0) {
          return false;
        }
        else {
          return true;
        }

      }
      else if ($diff > 2) {
        return true;
      }
      else {
        return false;
      }
    }

    function spotbox_change_place($spotbox) {
      var $wrap = $spotbox.parent(),
          height = $spotbox.outerHeight();
      $region_sidebar.append($spotbox);
      $wrap.remove();
    }
    // Clear any floats each nth item. Spotboxes dont have same heights, so a
    // .clearfix fixes the floats.
    // This has to still be on window.load, because we maybe move some spotboxes
    // around.
    $('.region-content-bottom > div:not(.clearfix)').each(function(i) {
      // -md and -lg has four columns
      if ((i + 1)%4 === 0) {
        $(this).after('<div class="clearfix visible-md visible-lg"></div>');
      }
      // -sm devices has three columns.
      if ((i + 1)%3 === 0) {
        $(this).after('<div class="clearfix visible-sm"></div>');
      }
      // -xs has two columns
      if ((i + 1)%2 === 0) {
        $(this).after('<div class="clearfix visible-xs"></div>');
      }
    });
  });

})(jQuery);
