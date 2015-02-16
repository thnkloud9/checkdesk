<?php

/**
 * List all reports.
 */
function _media_resource_index($page, $page_size) {
    $output = array();
    $sql = '
            SELECT nid, title
            FROM node
            WHERE type = :type
            ';
    $result = db_query_range($sql,$page * $page_size, $page_size,  array(':type' => 'media'));
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
