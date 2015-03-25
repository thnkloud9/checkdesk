<?php

/**
 * Ctools plugin definition
 */
$plugin = array(
    'title' => t('Container'),
    'description' => t('Displays content container.'),
    'single' => TRUE,
    'content_types' => array('container'),
    'render callback' => 'container_content_type_render',
    'edit form' => 'container_content_type_edit_form',
    'category' => array(t('Checkdesk'), -9),
    'all contexts' => TRUE
);

/**
 * Ctools edit form.
 *
 * @param $form
 * @param $form_state
 * @return mixed
 */
function container_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $form['columns'] = array(
      '#type' => 'select',
      '#title' => t('Columns'),
      '#options' => array(
          1 => '1',
          2 => '2',
          3 => '3',
          4 => '4',
      ),
      '#default_value' => $conf['columns'],
      '#description' => t('How many columns should this container span.'),
  );
  $form['emphasize'] = array(
      '#type' =>
      'checkbox',
      '#title' => t('Emphasize.'),
      '#default_value' => $conf['emphasize'],
      '#description' => t('Make this column wider than its siblings.'),
  );

  return $form;
}

/**
 * Ctools edit form submit handler.
 *
 * @param $form
 * @param $form_state
 */
function container_content_type_edit_form_submit($form, &$form_state) {
  foreach (array('columns','emphasize') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

/**
 * Render callback function.
 *
 * @param $subtype
 * @param $conf
 * @param $args
 * @param $context
 * @return stdClass
 */
function container_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();

  $block->content = "<div class='cols-" . $conf['columns'] . "' style='border: 1px solid #000;padding: 5px;margin: 5px;'>Content container with " . $conf['columns'] . " column(s) and emphasize is " . $conf['emphasize'] . "</div>";

  return $block;
}
