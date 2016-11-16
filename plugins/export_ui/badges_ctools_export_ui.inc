<?php

$plugin = array(
  'schema' => 'badge',  // As defined in hook_schema().
  'access' => 'administer site configuration',  // Define a permission users must have to access these pages.

  // Define the menu item.
  'menu' => array(
    'menu prefix' => 'admin/config/people',
    'menu item' => 'badges',
    'menu title' => 'Badges',
    'menu description' => 'Configure user badges.',
  ),

  // Define user interface texts.
  'title singular' => t('badge'),
  'title plural' => t('badge'),
  'title singular proper' => t('Badges'),
  'title plural proper' => t('Badges'),

  // Define the names of the functions that provide the add/edit forms.
  'form' => array(
    'settings' => 'badges_ctools_export_ui_form',
    // 'submit' and 'validate' are also valid callbacks.
  ),
);

function badges_ctools_export_ui_form(&$form, $form_state){
  dsm($form);
  dsm($form_state);
}
