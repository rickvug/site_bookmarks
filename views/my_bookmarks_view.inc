<?php
$view = new view;
$view->name = 'bookmarks';
$view->description = 'View for user bookmarks';
$view->tag = '';
$view->view_php = '';
$view->base_table = 'flag_page_data_url';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults (used for block)', 'default');
$handler->override_option('relationships', array(
  'flag_content_rel' => array(
    'label' => 'Boomark',
    'required' => 1,
    'flag' => 'flag_bookmark',
    'user_scope' => 'current',
    'id' => 'flag_content_rel',
    'table' => 'flag_page_data_url',
    'field' => 'flag_content_rel',
    'relationship' => 'none',
  ),
  'flag_note_page_rel' => array(
    'label' => 'Bookmark Notes',
    'required' => 1,
    'user_scope' => 'current',
    'id' => 'flag_note_page_rel',
    'table' => 'flag_page_data_url',
    'field' => 'flag_note_page_rel',
    'relationship' => 'flag_content_rel',
  ),
));
$handler->override_option('fields', array(
  'url' => array(
    'id' => 'url',
    'table' => 'flag_page_data_url',
    'field' => 'url',
    'relationship' => 'flag_content_rel',
    'exclude' => TRUE,
    'alter' => array(
      'alter_text' => 0,
      'make_link' => 0,
      'absolute' => 0,
      'trim' => 0,
      'word_boundary' => 1,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'hide_empty' => 0,
    'empty_zero' => 0,
  ),
  'note' => array(
    'id' => 'note',
    'table' => 'flag_note',
    'field' => 'note',
    'relationship' => 'flag_note_page_rel',
    'label' => 'Title',
    'alter' => array(
      'alter_text' => 0,
      'make_link' => 1,
      'path' => '[url]',
      'absolute' => 0,
      'trim' => 0,
      'word_boundary' => 1,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'hide_empty' => 0,
    'empty_zero' => 0,
  ),
  'edit_note' => array(
    'id' => 'edit_note',
    'table' => 'flag_note',
    'field' => 'edit_note',
    'relationship' => 'flag_note_page_rel',
    'label' => 'Edit',
    'alter' => array(
      'alter_text' => 0,
      'make_link' => 0,
      'absolute' => 0,
      'trim' => 0,
      'word_boundary' => 1,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'hide_empty' => 0,
    'empty_zero' => 0,
    'text' => 'Edit',
  ),
  'delete_note' => array(
    'id' => 'delete_note',
    'table' => 'flag_note',
    'field' => 'delete_note',
    'relationship' => 'flag_note_page_rel',
    'label' => 'Remove',
    'alter' => array(
      'alter_text' => 0,
      'make_link' => 0,
      'absolute' => 0,
      'trim' => 0,
      'word_boundary' => 1,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'hide_empty' => 0,
    'empty_zero' => 0,
    'text' => 'Remove',
  ),
));
$handler->override_option('sorts', array(
  'timestamp' => array(
    'id' => 'timestamp',
    'table' => 'flag_content',
    'field' => 'timestamp',
    'relationship' => 'flag_content_rel',
    'order' => 'DESC',
  ),
));
$handler->override_option('access', array(
  'type' => 'none',
));
$handler->override_option('cache', array(
  'type' => 'none',
));
$handler->override_option('title', 'My Bookmarks');
$handler->override_option('empty', '<strong>Nothing bookmarked yet - why not bookmark your favourite pages?</strong>

This is where your bookmarks will be stored - enabling you to return to any content you have found useful on the site.

You can bookmark most pages on the site by clicking on the \'bookmark\' link at the top of pages.');
$handler->override_option('empty_format', '1');
$handler->override_option('items_per_page', 5);
$handler->override_option('use_more', 1);
$handler->override_option('use_more_always', 0);
$handler->override_option('style_plugin', 'table');
$handler->override_option('style_options', array(
  'columns' => array(
    'url' => 'url',
    'note' => 'note',
    'edit_note' => 'edit_note',
    'delete_note' => 'delete_note',
  ),
  'default' => '-1',
  'info' => array(
    'url' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'note' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'edit_note' => array(
      'align' => '',
      'separator' => '',
    ),
    'delete_note' => array(
      'align' => '',
      'separator' => '',
    ),
  ),
  'override' => 1,
  'sticky' => 0,
  'order' => 'desc',
));
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->override_option('items_per_page', 25);
$handler->override_option('use_pager', '1');
$handler->override_option('path', 'my-bookmarks');
$handler->override_option('menu', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
