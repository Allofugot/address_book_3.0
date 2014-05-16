<?php
/**
 * @file
 * book_address_2_0_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function book_address_2_0_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_address-book-20:book-address
  $menu_links['main-menu_address-book-20:book-address'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'book-address',
    'router_path' => 'book-address',
    'link_title' => 'Address book 2.0',
    'options' => array(
      'identifier' => 'main-menu_address-book-20:book-address',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Address book 2.0');


  return $menu_links;
}
