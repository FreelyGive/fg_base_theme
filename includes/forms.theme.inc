<?php

/**
 * @file
 * Form related theme functions and hooks for FG Base Theme.
 */

/**
 * Implements hook_preprocess_HOOK().
 */
function fg_base_theme_preprocess_input(&$variables) {
  switch ($variables['element']['#type']) {
    case 'file':
      $variables['attributes']['class'][] = 'custom-file-input';
      $variables['children'][] = [
        '#type' => 'html_tag',
        '#tag' => 'span',
        '#attributes' => ['class' => ['custom-file-control']],
        '#value' => '',
      ];
      break;
  }
}
