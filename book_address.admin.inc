<?php

/**
 *Implements hook_form()
 *
 * @file
 * @param $form
 * @param $form_state
 * @param $book_address
 * @param string $op
 * @return mixed
 */
function book_address_form($form, &$form_state, $book_address, $op = 'edit') {

  drupal_add_js(drupal_get_path('module', 'book_address') . '/js/delete_and_show.js');

  $form['uid'] = array(
    '#type' => 'int',
    '#access' => FALSE,
  );
  $form['actions'] = array(
    '#type' => 'actions',
    '#attributes' => array(
      'id' => 'submit',
    ),
    'submit' => array(
      '#type' => 'submit',
      '#value' => t('Save'),
    ),
  );

  // Attach fields to the form.
  field_attach_form('book_address', $book_address, $form, $form_state);

  // добавляю кнопки next и prev в форме добавления контакта
  $form['next'] = array(
    '#type' => 'button',
    '#value' => t('Next'),
    '#attributes' => array(
      'id' => 'next', // по id буду подвязваться к js
    ),
  );
  $form['prev'] = array(
    '#type' => 'button',
    '#value' => t('Previous'),
    '#attributes' => array(
      'id' => 'prev', //по id буду подвязваться к js
    ),
  );

  return $form;
}

/**
 * Implements hook_form_submit()
 *
 * @param $form
 * @param $form_state
 */
function book_address_form_submit($form, &$form_state) {
  global $user;
 if(!empty($user)) {
    $form_state['values']['uid'] = $user->uid;
 }
  $book_address = entity_ui_form_submit_build_entity($form, $form_state);

  $book_address->save();

  $form_state['redirect'] = 'book-address';
}