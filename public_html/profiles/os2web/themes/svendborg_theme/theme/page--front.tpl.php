<?php if ($page['navigation']): ?>
  <?php print render($page['navigation']); ?>
<?php endif; ?>

<div class='front-main-container-wrapper'>
  <div class='main-container container'>

    <?php print render($page['header']); ?>
    <div class='row'>

    <!-- page--front.tpl.php-->
      <?php
      // Here comes front buttons
        print '<div class="row-no-padding front-buttons col-md-push-1 col-md-10 col-sm-12 col-xs-12">';

        $tree = menu_tree_all_data('menu-indholdsmenu', $link = NULL, $max_depth = 3);

        foreach ($tree as $key => $menu_item) {

          $title = $menu_item['link']['link_title'];
          $path = drupal_get_path_alias($menu_item['link']['link_path']);
          switch($title) {
            case 'Kommunen':
              $menu_links[0] = array('mlid' => array('title' => $title,'path' => $path));
              break;
            case 'Borger':
              $menu_links[1] = array('mlid' => array('title' => $title,'path' => $path));
              break;
            case 'Erhverv':
              $menu_links[2] = array('mlid' => array('title' => $title,'path' => $path));
              break;
            case 'Politik':
              $menu_links[3] = array('mlid' => array('title' => $title,'path' => $path));
              break;
          }
        }
        ksort($menu_links);
        $count = 0;
        foreach ($menu_links as $menus) {
          foreach($menus as $key =>$menu_item) {
            print '<div class="menu-' . $key . ' front-indholsdmenu col-md-3 col-sm-3 col-xs-12">';
            print '<h2 class="menu-front ' . $menu_item['title'] . '">
            <a title="' . $menu_item['title'] . '" href="' . $menu_item['path'] . '" class="' . $menu_item['title'] . '">' . $menu_item['title'] . '</a></h2>';

            print '</div>';
            $count += 1;
          }
        }

        print '</div>';

        // Search-box
        print '<div class="front-search-box col-md-push-3 col-md-6 col-sm-push-3 col-sm-6 col-xs-12">';
        $block_search_form = module_invoke('search', 'block_view', 'search');
        print render($block_search_form);
        print '</div>';

        // Branding news view
        print '<div class="col-md-push-1 col-md-10 col-xs-12"><div id="front-news-branding" class="front-news-branding col-md-12 col-sm-12 col-xs-12 carousel slide" data-ride="carousel">';
        $view = views_get_view('svendborg_news_view');
        $view->set_arguments(array('branding'));
        $view->set_display('front');
        $view->set_items_per_page(3);
        $view->execute();

        $results = $view->result;

        print '
          <!-- Indicators -->
          <ol class="carousel-indicators col-md-12 col-sm-12 col-xs-12">
            <li data-target="#front-news-branding" data-slide-to="0" class="active"></li>
            <li data-target="#front-news-branding" data-slide-to="1"></li>
            <li data-target="#front-news-branding" data-slide-to="2"></li>
          </ol>

          <!-- Wrapper for slides -->
          <div class="carousel-inner" id="front-carousel-large" >
        ';
        foreach ($results as $key => $item) {
          if ($key == 0) {
            print '<div class="item active">';
          }
          else {
            print '<div class="item">';
          }
          $node = node_load($item->nid);
          $img = field_get_items('node', $node, 'field_os2web_base_field_lead_img');
          $image = $img[0];
          image_get_info($image["filename"]);

          $style = 'svendborg_content_image';
          $public_filename = image_style_url($style, $image["uri"]);
          $path = drupal_get_path_alias('node/' . $node->nid);
          print '<a href="' . $path . '" title="' . $node->title . '">';
          print '<div class="row-no-padding col-md-7 col-sm-8 col-xs-12 front-branding-img">';

          print $html = '<img title = "' . $image["title"] . '" src="' . $public_filename . '"/>';
          print '</div>';
          print '<div class="carousel-title col-md-5 col-sm-4 col-xs-12">';

          print '<div class="title col-md-12">';
          print $node->title;
          print '</div>';

          print '<div class="col-md-12">';
          print '<a href="' . $path . '" title="' . $node->title . '" class="btn btn-primary">L&aelig;s mere</a>';
          print '</div>
          </div>';
          print '</a>';
          print '</div>';
        }
        print '</div>';

        print '</div></div>';
        print '<div class="front-seperator-first"></div>';
      ?>

    </div>
  </div>

  <div class='front-main-container-shadow'></div>
</div>

<?php
  // 3 Small news view
  print '<div class="lcontainer-fluid clearfix front-s-news">';
  print '<div class="container front-s-news-inner">';
  print '<div class="row">';


  $view = views_get_view('svendborg_news_view');
  $view->set_arguments(array('all'));
  $view->set_display('block_3');
  $view->set_items_per_page(9);
  $view->pre_execute();
  $view->execute();

  $results = $view->result;

  print '<div id="front-carousel-small" class="carousel slide" data-ride="carousel">
        <!-- Indicators -->
        <ol class="carousel-indicators col-md-12 col-sm-12 col-xs-12">
        <li data-target="#front-carousel-small" data-slide-to="0" class="active"></li>
        <li data-target="#front-carousel-small" data-slide-to="1"></li>
        <li data-target="#front-carousel-small" data-slide-to="2"></li>
        </ol>

        <!-- Wrapper for slides -->
        <div class="carousel-inner">
        ';

  $samll_news_carousel = array();
  foreach ($results as $key => $item) {
    if ($key < 3) {
      $samll_news_carousel[0][] = $item;
    }
    elseif ($key >= 3 && $key <= 5) {
      $samll_news_carousel[1][] = $item;
    }
    elseif ($key >= 6) {
      $samll_news_carousel[2][] = $item;
    }
  }
  foreach ($samll_news_carousel as $key => $items) {
    if ($key == 0) {
      print '<div class="item active">';
    }
    else {
      print '<div class="item">';
    }
    foreach ($items as $i=> $item) {
      $node = node_load($item->nid);
      $img = field_get_items('node', $node, 'field_os2web_base_field_lead_img');
      $image = $img[0];
      image_get_info($image["filename"]);

      $style = 'svendborg_content_image';
      $public_filename = image_style_url($style, $image["uri"]);

      print '<div class="col-md-4 col-sm-4 col-xs-12">';
      print '<div class="front-s-news-item front-s-news-item-' . $i . '">';
      print '<div class="front-s-news-item-img">';
      print $html = '<img title = "' . $image["title"] . '" src="' . $public_filename . '"/>';
      print '</div>';
      print '<div class="front-s-news-item-text">';

      $path = drupal_get_path_alias('node/' . $node->nid);
      print '<div class="bubble"><span><a href="' . $path . '">' . $node->title . '</a>';
      print '</a></span></div>';
      print '</div>
             </div>';
      print '</div>';
    }
    print '</div>';
  }

  print '</div></div>';

  print '<div class="front-seperator"></div>';

  print '</div></div></div>';
?>

<div class='lcontainer-fluid clearfix front-news-bottom'>
  <div class='container'>
    <div class='front-news-bottom-inner'>
      <div>
        <span>&#216;nsker du at se alle nyheder   <a href='/nyheder' class='btn btn-primary'>Klik her</a></span>
      </div>
    </div>
  </div>
</div>

<?php print render($page['footer']); ?>
