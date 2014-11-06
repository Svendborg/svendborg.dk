<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <?php
  $node = node_load($view->result[$id]->nid);
  $portalkategori = field_get_items('node', $node, 'field_os2web_base_field_struct');

  //this will be your top parent term if any was found
  $top_parent_term = null;
  $parent_terms = taxonomy_get_parents_all($portalkategori[0]['tid']);
  //top parent term has no parents so find it out by checking if it has parents

  foreach($parent_terms as $parent) {
    $parent_parents = taxonomy_get_parents_all($parent->tid);
    if ($parent_parents != false) {
      //this is top parent term
      $top_parent_term = $parent;
    }
  }
?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .' ' . $top_parent_term->tid  . ' "';  } ?> data-filter="<?php if (isset($top_parent_term)) print $top_parent_term->tid ?>">
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
