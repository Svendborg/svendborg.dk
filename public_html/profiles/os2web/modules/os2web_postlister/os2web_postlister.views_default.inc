<?php
/**
 * @file
 * os2web_postlister.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_postlister_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nypostliste';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Postlister';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Postlister';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Find';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nulstil';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Vælg noget';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'plain_text';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Forbindelse: Feeds item: Owner feed */
  $handler->display->display_options['relationships']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['relationships']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['relationships']['feed_nid']['field'] = 'feed_nid';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Feeds item: Owner feed nid */
  $handler->display->display_options['fields']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['fields']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['feed_nid']['field'] = 'feed_nid';
  /* Felt: Feeds log: Feed node id */
  $handler->display->display_options['fields']['feed_nid_1']['id'] = 'feed_nid_1';
  $handler->display->display_options['fields']['feed_nid_1']['table'] = 'feeds_log';
  $handler->display->display_options['fields']['feed_nid_1']['field'] = 'feed_nid';
  /* Felt: Feeds item: Owner feed nid */
  $handler->display->display_options['fields']['feed_nid_2']['id'] = 'feed_nid_2';
  $handler->display->display_options['fields']['feed_nid_2']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['feed_nid_2']['field'] = 'feed_nid';
  /* Felt: Global: Vis */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'postliste_import' => 'postliste_import',
    'os2web_acadre_postlists' => 'os2web_acadre_postlists',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'bg-white';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_os2web_postlistedato',
      'rendered' => 0,
      'rendered_strip' => 1,
    ),
    1 => array(
      'field' => 'field_os2web_postlist_dept',
      'rendered' => 0,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_os2web_base_field_organiz' => 'field_os2web_base_field_organiz',
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Dato */
  $handler->display->display_options['fields']['field_os2web_postlistedato']['id'] = 'field_os2web_postlistedato';
  $handler->display->display_options['fields']['field_os2web_postlistedato']['table'] = 'field_data_field_os2web_postlistedato';
  $handler->display->display_options['fields']['field_os2web_postlistedato']['field'] = 'field_os2web_postlistedato';
  $handler->display->display_options['fields']['field_os2web_postlistedato']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_postlistedato']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_postlistedato']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_postlistedato']['alter']['text'] = '<br/>
[field_os2web_postlistedato]';
  $handler->display->display_options['fields']['field_os2web_postlistedato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_postlistedato']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Organisation */
  $handler->display->display_options['fields']['field_os2web_base_field_organiz']['id'] = 'field_os2web_base_field_organiz';
  $handler->display->display_options['fields']['field_os2web_base_field_organiz']['table'] = 'field_data_field_os2web_base_field_organiz';
  $handler->display->display_options['fields']['field_os2web_base_field_organiz']['field'] = 'field_os2web_base_field_organiz';
  $handler->display->display_options['fields']['field_os2web_base_field_organiz']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_organiz']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_organiz']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_organiz']['alter']['text'] = '[field_os2web_postlistedato] - [field_os2web_base_field_organiz] ';
  $handler->display->display_options['fields']['field_os2web_base_field_organiz']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_organiz']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_os2web_base_field_organiz']['delta_offset'] = '0';
  /* Felt: Indhold: Direktørområde */
  $handler->display->display_options['fields']['field_os2web_postlist_dept']['id'] = 'field_os2web_postlist_dept';
  $handler->display->display_options['fields']['field_os2web_postlist_dept']['table'] = 'field_data_field_os2web_postlist_dept';
  $handler->display->display_options['fields']['field_os2web_postlist_dept']['field'] = 'field_os2web_postlist_dept';
  $handler->display->display_options['fields']['field_os2web_postlist_dept']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_postlist_dept']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_postlist_dept']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_postlist_dept']['alter']['text'] = '[field_os2web_postlistedato] - [field_os2web_postlist_dept]';
  $handler->display->display_options['fields']['field_os2web_postlist_dept']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_postlist_dept']['empty'] = '[field_os2web_base_field_organiz]';
  $handler->display->display_options['fields']['field_os2web_postlist_dept']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Global: Vis */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['empty'] = 'Ingen post denne dato';
  $handler->display->display_options['fields']['view']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['view']['view'] = 'nypostliste';
  $handler->display->display_options['fields']['view']['display'] = 'attachment_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<span class="glyphicon glyphicon-pencil"></span>';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'btn btn-warning btn-xs';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Slet-link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['alter']['text'] = '<span class="glyphicon glyphicon-remove"></span>';
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['alter']['link_class'] = 'btn btn-danger btn-xs';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Ingen post */
  $handler->display->display_options['fields']['field_os2web_post_ingen_post']['id'] = 'field_os2web_post_ingen_post';
  $handler->display->display_options['fields']['field_os2web_post_ingen_post']['table'] = 'field_data_field_os2web_post_ingen_post';
  $handler->display->display_options['fields']['field_os2web_post_ingen_post']['field'] = 'field_os2web_post_ingen_post';
  $handler->display->display_options['fields']['field_os2web_post_ingen_post']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_post_ingen_post']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_post_ingen_post']['alter']['text'] = '<h3>[field_os2web_base_field_organiz]</h3><p> - Ingen post at offentliggøre [edit_node] [delete_node]</p>';
  $handler->display->display_options['fields']['field_os2web_post_ingen_post']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_post_ingen_post']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_post_ingen_post']['empty_zero'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Dato (field_os2web_postlistedato) */
  $handler->display->display_options['sorts']['field_os2web_postlistedato_value']['id'] = 'field_os2web_postlistedato_value';
  $handler->display->display_options['sorts']['field_os2web_postlistedato_value']['table'] = 'field_data_field_os2web_postlistedato';
  $handler->display->display_options['sorts']['field_os2web_postlistedato_value']['field'] = 'field_os2web_postlistedato_value';
  $handler->display->display_options['sorts']['field_os2web_postlistedato_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Har taksonomiterm */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Direktørområde';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'postlister';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'postliste_import' => 'postliste_import',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Dato (field_os2web_postlistedato) */
  $handler->display->display_options['filters']['field_os2web_postlistedato_value_1']['id'] = 'field_os2web_postlistedato_value_1';
  $handler->display->display_options['filters']['field_os2web_postlistedato_value_1']['table'] = 'field_data_field_os2web_postlistedato';
  $handler->display->display_options['filters']['field_os2web_postlistedato_value_1']['field'] = 'field_os2web_postlistedato_value';
  $handler->display->display_options['filters']['field_os2web_postlistedato_value_1']['operator'] = '>';
  $handler->display->display_options['filters']['field_os2web_postlistedato_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_os2web_postlistedato_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_postlistedato_value_1']['expose']['operator_id'] = 'field_os2web_postlistedato_value_1_op';
  $handler->display->display_options['filters']['field_os2web_postlistedato_value_1']['expose']['label'] = 'Efter dato';
  $handler->display->display_options['filters']['field_os2web_postlistedato_value_1']['expose']['operator'] = 'field_os2web_postlistedato_value_1_op';
  $handler->display->display_options['filters']['field_os2web_postlistedato_value_1']['expose']['identifier'] = 'field_os2web_postlistedato_value_1';
  $handler->display->display_options['filters']['field_os2web_postlistedato_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_postlistedato_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_os2web_postlistedato_value_1']['year_range'] = '-5:+0';
  /* Filterkriterie: Indhold: Dato (field_os2web_postlistedato) */
  $handler->display->display_options['filters']['field_os2web_postlistedato_value']['id'] = 'field_os2web_postlistedato_value';
  $handler->display->display_options['filters']['field_os2web_postlistedato_value']['table'] = 'field_data_field_os2web_postlistedato';
  $handler->display->display_options['filters']['field_os2web_postlistedato_value']['field'] = 'field_os2web_postlistedato_value';
  $handler->display->display_options['filters']['field_os2web_postlistedato_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_os2web_postlistedato_value']['group'] = 1;
  $handler->display->display_options['filters']['field_os2web_postlistedato_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_postlistedato_value']['expose']['operator_id'] = 'field_os2web_postlistedato_value_op';
  $handler->display->display_options['filters']['field_os2web_postlistedato_value']['expose']['label'] = 'Før dato';
  $handler->display->display_options['filters']['field_os2web_postlistedato_value']['expose']['operator'] = 'field_os2web_postlistedato_value_op';
  $handler->display->display_options['filters']['field_os2web_postlistedato_value']['expose']['identifier'] = 'field_os2web_postlistedato_value';
  $handler->display->display_options['filters']['field_os2web_postlistedato_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_postlistedato_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_os2web_postlistedato_value']['year_range'] = '-3:+0';
  $handler->display->display_options['path'] = 'kommunen/postlister';

  /* Display: Bilag */
  $handler = $view->new_display('attachment', 'Bilag', 'attachment_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'table table-condensed';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = 'small';
  $handler->display->display_options['style_options']['columns'] = array(
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'title' => 'title',
    'feed_nid' => 'feed_nid',
    'field_os2web_base_field_organiz' => 'field_os2web_base_field_organiz',
    'field_os2web_postlist_afs_name' => 'field_os2web_postlist_afs_name',
    'field_s2web_postlist_docdate_uni' => 'field_s2web_postlist_docdate_uni',
    'field_os2web_postlist_id' => 'field_os2web_postlist_id',
    'field_os2web_postlist_resp' => 'field_os2web_postlist_resp',
    'field_s2web_postlist_journda_uni' => 'field_s2web_postlist_journda_uni',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'feed_nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_base_field_organiz' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_postlist_afs_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s2web_postlist_docdate_uni' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_postlist_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_postlist_resp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s2web_postlist_journda_uni' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<span class="glyphicon glyphicon-pencil"></span>';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alt'] = 'Rediger';
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'btn-xs btn btn-warning';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Rediger';
  /* Felt: Indhold: Slet-link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['alter']['text'] = '<span class="glyphicon glyphicon-remove"></span>';
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['alter']['alt'] = 'Slet';
  $handler->display->display_options['fields']['delete_node']['alter']['link_class'] = 'btn btn-danger btn-xs';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Dokumenttitel';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[edit_node] [delete_node] [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Feeds item: Owner feed nid */
  $handler->display->display_options['fields']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['fields']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['fields']['feed_nid']['label'] = '';
  $handler->display->display_options['fields']['feed_nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['feed_nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['feed_nid']['separator'] = '';
  /* Felt: Indhold: Organisation */
  $handler->display->display_options['fields']['field_os2web_base_field_organiz']['id'] = 'field_os2web_base_field_organiz';
  $handler->display->display_options['fields']['field_os2web_base_field_organiz']['table'] = 'field_data_field_os2web_base_field_organiz';
  $handler->display->display_options['fields']['field_os2web_base_field_organiz']['field'] = 'field_os2web_base_field_organiz';
  $handler->display->display_options['fields']['field_os2web_base_field_organiz']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_organiz']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_organiz']['delta_offset'] = '0';
  /* Felt: Indhold: Afs/Modtager navn */
  $handler->display->display_options['fields']['field_os2web_postlist_afs_name']['id'] = 'field_os2web_postlist_afs_name';
  $handler->display->display_options['fields']['field_os2web_postlist_afs_name']['table'] = 'field_data_field_os2web_postlist_afs_name';
  $handler->display->display_options['fields']['field_os2web_postlist_afs_name']['field'] = 'field_os2web_postlist_afs_name';
  $handler->display->display_options['fields']['field_os2web_postlist_afs_name']['label'] = 'Afsender';
  $handler->display->display_options['fields']['field_os2web_postlist_afs_name']['type'] = 'text_plain';
  /* Felt: Indhold: Dokumentdato */
  $handler->display->display_options['fields']['field_s2web_postlist_docdate_uni']['id'] = 'field_s2web_postlist_docdate_uni';
  $handler->display->display_options['fields']['field_s2web_postlist_docdate_uni']['table'] = 'field_data_field_s2web_postlist_docdate_uni';
  $handler->display->display_options['fields']['field_s2web_postlist_docdate_uni']['field'] = 'field_s2web_postlist_docdate_uni';
  $handler->display->display_options['fields']['field_s2web_postlist_docdate_uni']['settings'] = array(
    'format_type' => 'os2web_base_date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Løbenummer */
  $handler->display->display_options['fields']['field_os2web_postlist_id']['id'] = 'field_os2web_postlist_id';
  $handler->display->display_options['fields']['field_os2web_postlist_id']['table'] = 'field_data_field_os2web_postlist_id';
  $handler->display->display_options['fields']['field_os2web_postlist_id']['field'] = 'field_os2web_postlist_id';
  $handler->display->display_options['fields']['field_os2web_postlist_id']['type'] = 'text_plain';
  /* Felt: Indhold: Sagsansvarlig */
  $handler->display->display_options['fields']['field_os2web_postlist_resp']['id'] = 'field_os2web_postlist_resp';
  $handler->display->display_options['fields']['field_os2web_postlist_resp']['table'] = 'field_data_field_os2web_postlist_resp';
  $handler->display->display_options['fields']['field_os2web_postlist_resp']['field'] = 'field_os2web_postlist_resp';
  $handler->display->display_options['fields']['field_os2web_postlist_resp']['type'] = 'text_plain';
  /* Felt: Indhold: Journaldato */
  $handler->display->display_options['fields']['field_s2web_postlist_journda_uni']['id'] = 'field_s2web_postlist_journda_uni';
  $handler->display->display_options['fields']['field_s2web_postlist_journda_uni']['table'] = 'field_data_field_s2web_postlist_journda_uni';
  $handler->display->display_options['fields']['field_s2web_postlist_journda_uni']['field'] = 'field_s2web_postlist_journda_uni';
  $handler->display->display_options['fields']['field_s2web_postlist_journda_uni']['settings'] = array(
    'format_type' => 'os2web_base_date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Feeds item: Owner feed nid */
  $handler->display->display_options['arguments']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['arguments']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['arguments']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['arguments']['feed_nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['feed_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['feed_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['feed_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['feed_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_acadre_postlists' => 'os2web_acadre_postlists',
  );
  $translatables['nypostliste'] = array(
    t('Master'),
    t('Postlister'),
    t('mere'),
    t('Find'),
    t('Nulstil'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Vælg noget'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Owner feed'),
    t('Owner feed nid'),
    t('.'),
    t(','),
    t('Feed node id'),
    t('Vis'),
    t('Page'),
    t('<br/>
[field_os2web_postlistedato]'),
    t('[field_os2web_postlistedato] - [field_os2web_base_field_organiz] '),
    t('[field_os2web_postlistedato] - [field_os2web_postlist_dept]'),
    t('[field_os2web_base_field_organiz]'),
    t('Ingen post denne dato'),
    t('<span class="glyphicon glyphicon-pencil"></span>'),
    t('<span class="glyphicon glyphicon-remove"></span>'),
    t('<h3>[field_os2web_base_field_organiz]</h3><p> - Ingen post at offentliggøre [edit_node] [delete_node]</p>'),
    t('Direktørområde'),
    t('Efter dato'),
    t('Før dato'),
    t('Bilag'),
    t('Rediger'),
    t('Slet'),
    t('Dokumenttitel'),
    t('[edit_node] [delete_node] [title]'),
    t('Afsender'),
    t('Dokumentdato'),
    t('Løbenummer'),
    t('Sagsansvarlig'),
    t('Journaldato'),
    t('Alle'),
  );
  $export['nypostliste'] = $view;

  return $export;
}
