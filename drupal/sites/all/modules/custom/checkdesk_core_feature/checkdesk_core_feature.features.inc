<?php
/**
 * @file
 * checkdesk_core_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function checkdesk_core_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "heartbeat" && $api == "heartbeat") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function checkdesk_core_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function checkdesk_core_feature_flag_default_flags() {
  $flags = array();
  // Exported flag: "Needing deletion".
  $flags['delete'] = array(
    'entity_type' => 'node',
    'title' => 'Needing deletion',
    'global' => 0,
    'types' => array(
      0 => 'media',
    ),
    'flag_short' => 'Request deletion',
    'flag_long' => '',
    'flag_message' => '<a href="[node:url:unaliased]">[node:author]\'s report</a> was flagged for deletion.',
    'unflag_short' => 'Cancel deletion request',
    'unflag_long' => '',
    'unflag_message' => '<a href="[node:url:unaliased]">[node:author]\'s report</a> was unflagged for deletion.',
    'unflag_denied_text' => 'Flagged for deletion',
    'link_type' => 'checkdesk_modal',
    'weight' => -6,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 'rss',
      'search_index' => 'search_index',
      'search_result' => 'search_result',
      'meedan_oembed' => 'meedan_oembed',
      'checkdesk_collaborate' => 'checkdesk_collaborate',
      'collaborate_status' => 'collaborate_status',
      'token' => 'token',
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => 'own',
    'show_contextual_link' => 1,
    'i18n' => 0,
    'confirm_modal_style' => 'modal-popup-small',
    'flag_confirmation' => 'Are you sure you want to flag this report?',
    'unflag_confirmation' => 'Are you sure you want to unflag this report?',
    'module' => 'checkdesk_core_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Needing fact-checking".
  $flags['factcheck'] = array(
    'entity_type' => 'node',
    'title' => 'Needing fact-checking',
    'global' => 0,
    'types' => array(
      0 => 'media',
    ),
    'flag_short' => 'Flag for fact-checking',
    'flag_long' => '',
    'flag_message' => '<a href="[node:url:unaliased]">[node:author]\'s report</a> was flagged for fact-checking.',
    'unflag_short' => 'Unflag for fact-checking',
    'unflag_long' => '',
    'unflag_message' => '<a href="[node:url:unaliased]">[node:author]\'s report</a> was unflagged for fact-checking.',
    'unflag_denied_text' => 'Flagged for fact-checking',
    'link_type' => 'checkdesk_modal',
    'weight' => -7,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 'rss',
      'search_index' => 'search_index',
      'search_result' => 'search_result',
      'meedan_oembed' => 'meedan_oembed',
      'checkdesk_collaborate' => 'checkdesk_collaborate',
      'collaborate_status' => 'collaborate_status',
      'token' => 'token',
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 1,
    'i18n' => 0,
    'confirm_modal_style' => 'modal-popup-small',
    'flag_confirmation' => 'Are you sure you want to flag this report?',
    'unflag_confirmation' => 'Are you sure you want to unflag this report?',
    'module' => 'checkdesk_core_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Needing fact-checking".
  $flags['factcheck_journalist'] = array(
    'entity_type' => 'node',
    'title' => 'Needing fact-checking',
    'global' => 1,
    'types' => array(
      0 => 'media',
    ),
    'flag_short' => 'Turn on fact-checking',
    'flag_long' => '',
    'flag_message' => 'Fact-checking has been enabled for <a href="[node:url:unaliased]">[node:author]\'s report</a>.',
    'unflag_short' => 'Turn off fact-checking',
    'unflag_long' => '',
    'unflag_message' => 'Fact-checking has been disabled for <a href="[node:url:unaliased]">[node:author]\'s report</a>.',
    'unflag_denied_text' => 'Fact-checking activated',
    'link_type' => 'toggle',
    'weight' => -10,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 'rss',
      'search_index' => 'search_index',
      'search_result' => 'search_result',
      'meedan_oembed' => 'meedan_oembed',
      'checkdesk_collaborate' => 'checkdesk_collaborate',
      'collaborate_status' => 'collaborate_status',
      'token' => 'token',
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 1,
    'i18n' => 0,
    'module' => 'checkdesk_core_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Follow story".
  $flags['follow_story'] = array(
    'entity_type' => 'node',
    'title' => 'Follow story',
    'global' => 0,
    'types' => array(
      0 => 'discussion',
    ),
    'flag_short' => 'Follow story',
    'flag_long' => 'Follow a story to stay up to date with the latest developments',
    'flag_message' => '',
    'unflag_short' => 'Following story',
    'unflag_long' => 'Unfollow story',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'checkdesk_collaborate' => 'checkdesk_collaborate',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'meedan_oembed' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'checkdesk_core_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Graphic content".
  $flags['graphic'] = array(
    'entity_type' => 'node',
    'title' => 'Graphic content',
    'global' => 0,
    'types' => array(
      0 => 'media',
    ),
    'flag_short' => 'Flag graphic content',
    'flag_long' => '',
    'flag_message' => '<a href="[node:url:unaliased]">[node:author]\'s report</a> was flagged as containing graphic content.',
    'unflag_short' => 'Unflag graphic content',
    'unflag_long' => '',
    'unflag_message' => '<a href="[node:url:unaliased]">[node:author]\'s report</a> was unflagged as containing graphic content.',
    'unflag_denied_text' => 'Flagged for graphic content',
    'link_type' => 'checkdesk_modal',
    'weight' => -8,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 'rss',
      'search_index' => 'search_index',
      'search_result' => 'search_result',
      'meedan_oembed' => 'meedan_oembed',
      'checkdesk_collaborate' => 'checkdesk_collaborate',
      'collaborate_status' => 'collaborate_status',
      'token' => 'token',
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 1,
    'i18n' => 0,
    'confirm_modal_style' => 'modal-popup-small',
    'flag_confirmation' => 'Are you sure you want to flag this report?',
    'unflag_confirmation' => 'Are you sure you want to unflag this report?',
    'module' => 'checkdesk_core_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Graphic content".
  $flags['graphic_journalist'] = array(
    'entity_type' => 'node',
    'title' => 'Graphic content',
    'global' => 1,
    'types' => array(
      0 => 'media',
    ),
    'flag_short' => 'Flag graphic content',
    'flag_long' => '',
    'flag_message' => '<a href="[node:url:unaliased]">[node:author]\'s report</a> was flagged as containing graphic content.',
    'unflag_short' => 'Unflag graphic content',
    'unflag_long' => '',
    'unflag_message' => '<a href="[node:url:unaliased]">[node:author]\'s report</a> was unflagged as containing graphic content.',
    'unflag_denied_text' => 'Flagged for graphic content',
    'link_type' => 'toggle',
    'weight' => -11,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 'rss',
      'search_index' => 'search_index',
      'search_result' => 'search_result',
      'meedan_oembed' => 'meedan_oembed',
      'checkdesk_collaborate' => 'checkdesk_collaborate',
      'collaborate_status' => 'collaborate_status',
      'token' => 'token',
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 1,
    'i18n' => 0,
    'module' => 'checkdesk_core_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Spam".
  $flags['spam'] = array(
    'entity_type' => 'node',
    'title' => 'Spam',
    'global' => 0,
    'types' => array(
      0 => 'media',
    ),
    'flag_short' => 'Flag spam',
    'flag_long' => '',
    'flag_message' => '<a href="[node:url:unaliased]">[node:author]\'s report</a> was flagged as spam.',
    'unflag_short' => 'Unflag spam',
    'unflag_long' => '',
    'unflag_message' => '<a href="[node:url:unaliased]">[node:author]\'s report</a> was unflagged as spam.',
    'unflag_denied_text' => 'Flagged for spam',
    'link_type' => 'checkdesk_modal',
    'weight' => -9,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 'rss',
      'search_index' => 'search_index',
      'search_result' => 'search_result',
      'meedan_oembed' => 'meedan_oembed',
      'checkdesk_collaborate' => 'checkdesk_collaborate',
      'collaborate_status' => 'collaborate_status',
      'token' => 'token',
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 1,
    'i18n' => 0,
    'confirm_modal_style' => 'modal-popup-small',
    'flag_confirmation' => 'Are you sure you want to flag this report?',
    'unflag_confirmation' => 'Are you sure you want to unflag this report?',
    'module' => 'checkdesk_core_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function checkdesk_core_feature_image_default_styles() {
  $styles = array();

  // Exported image style: featured_image.
  $styles['featured_image'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 900,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'featured_image',
  );

  // Exported image style: featured_stories_lead_image.
  $styles['featured_stories_lead_image'] = array(
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 360,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'featured_stories_lead_image',
  );

  // Exported image style: footer_partner_logo.
  $styles['footer_partner_logo'] = array(
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'footer_partner_logo',
  );

  // Exported image style: navigation_avatar.
  $styles['navigation_avatar'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 24,
          'height' => 24,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'navigation_avatar',
  );

  // Exported image style: partner_logo.
  $styles['partner_logo'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'partner_logo',
  );

  // Exported image style: report_thumbnail.
  $styles['report_thumbnail'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 350,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 320,
          'height' => 144,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'report_thumbnail',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function checkdesk_core_feature_node_info() {
  $items = array(
    'discussion' => array(
      'name' => t('Story'),
      'base' => 'node_content',
      'description' => t('Where reports are verified and blog posts created.'),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => '',
    ),
    'media' => array(
      'name' => t('Report'),
      'base' => 'node_content',
      'description' => t('A report containing a media item.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'post' => array(
      'name' => t('Update'),
      'base' => 'node_content',
      'description' => t('A liveblog post.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
