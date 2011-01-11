<?php
// $Id: my_bookmarks.flag_default.inc,v 1.1.4.1 2011/01/11 15:48:39 sheetal Exp $

function _my_bookmarks_page_flags(&$flags) {
  $flags = array();
  // Exported flag: "Flag Bookmark".
  $flags[] = array (
    'content_type' => 'page',
    'name' => 'flag_bookmark',
    'title' => 'Flag Bookmark',
    'global' => '0',
    'types' => array (
    ),
    'flag_short' => 'Bookmark',
    'flag_long' => 'Bookmark this page',
    'flag_message' => 'This page has been saved in your bookmarks',
    'unflag_short' => 'Remove Bookmark',
    'unflag_long' => 'Remove this page from your bookmarks',
    'unflag_message' => 'This page has been removed from your bookmarks',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'roles' => array (
      'flag' => array (
        0 => 2,
      ),
      'unflag' => array (
        0 => 2,
      ),
    ),
    'override_page_title' => 0,
    'api_version' => 2,
  );
  return $flags;
}