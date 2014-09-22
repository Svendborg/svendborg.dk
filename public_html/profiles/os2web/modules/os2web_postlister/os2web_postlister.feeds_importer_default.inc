<?php
/**
 * @file
 * os2web_postlister.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function os2web_postlister_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'os2web_postlister';
  $feeds_importer->config = array(
    'name' => 'OS2Web Postlister',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml xlsx xls',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'source_required' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExcelParser',
      'config' => array(
        'no_headers' => 0,
        'all_worksheets' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Journaldato',
            'target' => 'field_s2web_postlist_journda_uni:start',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Dokumentdato',
            'target' => 'field_s2web_postlist_docdate_uni:start',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Afsender/modtager',
            'target' => 'field_os2web_postlist_afs_id',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Afs/modt navn',
            'target' => 'field_os2web_postlist_afs_name',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Dokumenttitel',
            'target' => 'title',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Sagsansvarlig enhed',
            'target' => 'field_os2web_postlist_resp',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          6 => array(
            'source' => 'Løbenr.',
            'target' => 'field_os2web_postlist_id',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'os2web_acadre_postlists',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => 'postliste_import',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['os2web_postlister'] = $feeds_importer;

  return $export;
}
