<?php

/**
 * List all reports.
 */
function _media_resource_index() {
    $output = array();
    $result = db_query('
       SELECT nid, title
       FROM node
       WHERE type = :type
    ', array(':type' => 'media'));
    foreach ($result as $row) {
        $node = node_load($row->nid);
        $render = field_view_field('node', $node, 'field_link',
            array(
                'type' => 'meedan_oembed_thumbnail',
                'settings' => array('imagestyle' => 'report_thumbnail'),
            )
        );
        $row->thumbnail = render($render);
        $output[] = $row;
    }
    return $output;
}
