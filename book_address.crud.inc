<?php

/**
 * @file
 * Contains CRUD functions for Address book 2.0 entities.
 */

/**
 * Create Address book 2.0 entity.
 *
 * @param $values
 * @return bool
 */
function book_address_create($values) {
  return entity_create('book_address', $values);
}

/**
 * Save Address book 2.0 entity.
 *
 * @param $recipe
 * @return bool
 */
function book_address_save($book_address) {
  return entity_save('book_address', $book_address);
}

/**
 * Load multiple entities. *
 *
 * @param bool $ids
 * @param array $conditions
 * @return mixed
 */
function book_address_load_multiple($ids = FALSE, $conditions = array()) {
  return entity_load('book_address', $ids, $conditions);
}

/**
 * Load single Address book 2.0 by its id.
 *
 * @param $id
 * @return mixed
 */
function book_address_load($id) {
  return current(book_address_load_multiple((array) $id));
}

/**
 * Delete multiple contacts at once.
 *
 * @param $ids
 * @return bool
 */

function book_address_delete_multiple($ids) {
  return entity_delete_multiple('book_address', $ids);
}

/**
 * Delete single contact its id.
 *
 * @param $id
 * @return bool
 */
function book_address_delete($id) {
  return entity_delete('book_address', $id);
}

/**
 * View Address book 2.0 entity.
 *
 * @param $recipe
 * @param string $view_mode
 * @param null $langcode
 * @return bool
 */
function book_address_view($book_address, $view_mode = 'full', $langcode = NULL) {
  return entity_view('book_address', array($book_address), $view_mode, $langcode);
}
