<?php
/**
 * @file
 * Metatag integration for the metatag kle module.
 */

/**
 * Implements hook_metatag_config_default_alter().
 */
function metatag_kle_metatag_config_default_alter(array &$configs) {
  foreach ($configs as &$config) {
    switch ($config->instance) {
      case 'global':
        $config->config += array();
        break;

      case 'global:frontpage':
        $config->config += array();
        break;

      case 'global:403':
      case 'global:404':
        $config->config += array();
        break;

      case 'node':
        $config->config += array();
        break;

      case 'taxonomy_term':
        $config->config += array();
        break;

      case 'user':
        $config->config += array();
        break;
    }
  }
}

/**
 * Implements hook_metatag_info().
 */
function metatag_kle_metatag_info() {
  $info['groups']['kle'] = array(
    'label' => t('KL Emneord'),
    'description' => t('Til KL Emneord'),
    'form' => array(
      '#weight' => 60,
    ),
  );
  $info['tags']['kle'] = array(
    'label' => t('Content'),
    'description' => t('Indhold'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'kle',
  );

  $info['tags']['kle:id'] = array(
    'label' => t('ID'),
    'description' => t('ID'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'kle',
  );

  $info['tags']['kle:title'] = array(
    'label' => t('Titel'),
    'description' => t('Sidens titel'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'kle',
  );

  return $info;
}
