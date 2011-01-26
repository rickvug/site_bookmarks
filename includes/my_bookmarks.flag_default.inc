<?php
// $Id: my_bookmarks.flag_default.inc,v 1.1.4.1 2011/01/11 15:48:39 sheetal Exp $

function _my_bookmarks_page_flags(&$flags) {
  $flags = array();
  // Exported flag: "Flag Bookmark".
  $flags['flag_bookmark'] = array(
    'content_type' => 'page',
    'title' => 'Flag Bookmark',
    'global' => '0',
    'types' => array(),
    'flag_short' => 'Bookmark',
    'flag_long' => 'Bookmark this page',
    'flag_message' => 'This page has been saved in your bookmarks',
    'unflag_short' => 'Remove Bookmark',
    'unflag_long' => 'Remove this page from your bookmarks',
    'unflag_message' => 'This page has been removed from your bookmarks',
    'unflag_denied_text' => '',
    'link_type' => 'flag_note_form',
    'roles' => array(
      'flag' => array(
        '0' => 2,
      ),
      'unflag' => array(
        '0' => 2,
      ),
    ),
    'override_page_title' => 0,
    'flag_note_title' => 'Create or edit page bookmark',
    'flag_note_fieldset' => '',
    'flag_note_label' => 'Bookmark name',
    'flag_note_help' => 'You can give this bookmark a memorable name or use the default suggestion.',
    'flag_note_history_disabled' => 1,
    'flag_note_delete_unflags' => 1,
    'flag_note_default_text' => '[query-title]',
    'flag_note_maxlength' => '0',
    'flag_note_vocab' => '0',
    'flag_note_vocab_label' => 'Reason',
    'flag_note_vocab_help' => 'Please select a reason.',
    'flag_note_hide_text' => 0,
    'module' => 'my_bookmarks',
    'api_version' => 2,
  );
  return $flags;
}