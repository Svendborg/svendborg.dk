<?php
/**
 * @file
 * os2web_news_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function os2web_news_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-os2web_base_news-field_os2web_news_page_type'
  $field_instances['node-os2web_base_news-field_os2web_news_page_type'] = array(
    'bundle' => 'os2web_base_news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'smallteaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'spotbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_os2web_news_page_type',
    'label' => 'Nyhedstype',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => 0,
        'use_select2' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'taxonomy_term-os2web_news_page_newstypes-field_os2web_news_date_end_txt'
  $field_instances['taxonomy_term-os2web_news_page_newstypes-field_os2web_news_date_end_txt'] = array(
    'bundle' => 'os2web_news_page_newstypes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Den tekst der vises ved slutdato på indhold af typen nyhed når denne nyhedstype er valgt.
Eksempel: <i>Høringsfrist</i>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_os2web_news_date_end_txt',
    'label' => 'Slutdato tekst',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'blokindhold' => 'blokindhold',
          'emails' => 'emails',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'raw' => 'raw',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'blokindhold' => array(
              'weight' => -7,
            ),
            'emails' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
            'raw' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'taxonomy_term-os2web_news_page_newstypes-field_os2web_news_date_start_txt'
  $field_instances['taxonomy_term-os2web_news_page_newstypes-field_os2web_news_date_start_txt'] = array(
    'bundle' => 'os2web_news_page_newstypes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Den tekst der vises til de besøgende på indhold af typen nyhed, når denne nyhedstype er valgt.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_os2web_news_date_start_txt',
    'label' => 'Startdato tekst',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'blokindhold' => 'blokindhold',
          'emails' => 'emails',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'raw' => 'raw',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'blokindhold' => array(
              'weight' => -7,
            ),
            'emails' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
            'raw' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'taxonomy_term-os2web_news_page_newstypes-field_os2web_news_showdate'
  $field_instances['taxonomy_term-os2web_news_page_newstypes-field_os2web_news_showdate'] = array(
    'bundle' => 'os2web_news_page_newstypes',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_os2web_news_showdate',
    'label' => 'Vis dato på nyhed',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Den tekst der vises til de besøgende på indhold af typen nyhed, når denne nyhedstype er valgt.');
  t('Den tekst der vises ved slutdato på indhold af typen nyhed når denne nyhedstype er valgt.
Eksempel: <i>Høringsfrist</i>');
  t('Nyhedstype');
  t('Slutdato tekst');
  t('Startdato tekst');
  t('Vis dato på nyhed');

  return $field_instances;
}
