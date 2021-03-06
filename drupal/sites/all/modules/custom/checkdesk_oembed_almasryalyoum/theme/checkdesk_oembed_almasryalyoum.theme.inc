<?php

/**
 * Template preprocessor for 'oembed_link' with provider 'meedan_oembed_almasryalyoum'.
 */
function template_preprocess_oembed__link__meedan_oembed_almasryalyoum(&$vars) {
  $embed = $vars['embed'];
  $vars['favicon_link'] = l(theme('image', array('path' => $embed->favicon_link)), $embed->provider_url, array('html' => TRUE));
  $vars['title_link'] = l($embed->title, $embed->url);
  $vars['content'] = $embed->description;
  $vars['thumbnail'] = l(theme('image', array('path' => $embed->thumbnail_url)), $embed->url, array('html' => TRUE));
  $vars['domain_link'] = l($embed->provider_name, $embed->provider_url);
}
