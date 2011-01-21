<?php
$view = new view;
$view->name = 'bookmarks';
$view->description = 'View for user\'s Bookmarks';
$view->tag = '';
$view->view_php = '';
$view->base_table = 'flag_page_data_url';
$view->is_cacheable = FALSE;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'My Bookmarks';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'url' => 'url',
  'note' => 'note',
  'edit_note' => 'edit_note',
  'delete_note' => 'delete_note',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
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
);
$handler->display->display_options['style_options']['override'] = 1;
$handler->display->display_options['style_options']['sticky'] = 0;
$handler->display->display_options['style_options']['order'] = 'desc';
/* Empty text: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = '';
$handler->display->display_options['empty']['area']['empty'] = FALSE;
$handler->display->display_options['empty']['area']['content'] = '<strong>Nothing bookmarked yet - why not bookmark your favourite pages?</strong>

This is where your bookmarks will be stored - enabling you to return to any content you have found useful on the site.

You can bookmark most pages on the site by clicking on the \'bookmark\' link at the top of pages.';
/* Relationship: Flags: flag_bookmark */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'flag_page_data_url';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Boomark';
/* Relationship: Flag page: flag notes */
$handler->display->display_options['relationships']['flag_note_page_rel']['id'] = 'flag_note_page_rel';
$handler->display->display_options['relationships']['flag_note_page_rel']['table'] = 'flag_page_data_url';
$handler->display->display_options['relationships']['flag_note_page_rel']['field'] = 'flag_note_page_rel';
$handler->display->display_options['relationships']['flag_note_page_rel']['label'] = 'Bookmark Notes';
$handler->display->display_options['relationships']['flag_note_page_rel']['required'] = 0;
/* Field: Flag page: URL */
$handler->display->display_options['fields']['url']['id'] = 'url';
$handler->display->display_options['fields']['url']['table'] = 'flag_page_data_url';
$handler->display->display_options['fields']['url']['field'] = 'url';
$handler->display->display_options['fields']['url']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['url']['exclude'] = TRUE;
$handler->display->display_options['fields']['url']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['url']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['url']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['url']['alter']['trim'] = 0;
$handler->display->display_options['fields']['url']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['url']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['url']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['url']['alter']['html'] = 0;
$handler->display->display_options['fields']['url']['hide_empty'] = 0;
$handler->display->display_options['fields']['url']['empty_zero'] = 0;
/* Field: Flag note: Note text */
$handler->display->display_options['fields']['note']['id'] = 'note';
$handler->display->display_options['fields']['note']['table'] = 'flag_note';
$handler->display->display_options['fields']['note']['field'] = 'note';
$handler->display->display_options['fields']['note']['relationship'] = 'flag_note_page_rel';
$handler->display->display_options['fields']['note']['label'] = 'Title';
$handler->display->display_options['fields']['note']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['note']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['note']['alter']['path'] = '[url]';
$handler->display->display_options['fields']['note']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['note']['alter']['trim'] = 0;
$handler->display->display_options['fields']['note']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['note']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['note']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['note']['alter']['html'] = 0;
$handler->display->display_options['fields']['note']['hide_empty'] = 0;
$handler->display->display_options['fields']['note']['empty_zero'] = 0;
/* Field: Flag note: Edit flag note */
$handler->display->display_options['fields']['edit_note']['id'] = 'edit_note';
$handler->display->display_options['fields']['edit_note']['table'] = 'flag_note';
$handler->display->display_options['fields']['edit_note']['field'] = 'edit_note';
$handler->display->display_options['fields']['edit_note']['relationship'] = 'flag_note_page_rel';
$handler->display->display_options['fields']['edit_note']['label'] = 'Edit';
$handler->display->display_options['fields']['edit_note']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['edit_note']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['edit_note']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['edit_note']['alter']['trim'] = 0;
$handler->display->display_options['fields']['edit_note']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['edit_note']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['edit_note']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['edit_note']['alter']['html'] = 0;
$handler->display->display_options['fields']['edit_note']['hide_empty'] = 0;
$handler->display->display_options['fields']['edit_note']['empty_zero'] = 0;
$handler->display->display_options['fields']['edit_note']['text'] = 'Edit';
/* Field: Flag note: Delete flag note */
$handler->display->display_options['fields']['delete_note']['id'] = 'delete_note';
$handler->display->display_options['fields']['delete_note']['table'] = 'flag_note';
$handler->display->display_options['fields']['delete_note']['field'] = 'delete_note';
$handler->display->display_options['fields']['delete_note']['relationship'] = 'flag_note_page_rel';
$handler->display->display_options['fields']['delete_note']['label'] = 'Remove';
$handler->display->display_options['fields']['delete_note']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['delete_note']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['delete_note']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['delete_note']['alter']['trim'] = 0;
$handler->display->display_options['fields']['delete_note']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['delete_note']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['delete_note']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['delete_note']['alter']['html'] = 0;
$handler->display->display_options['fields']['delete_note']['hide_empty'] = 0;
$handler->display->display_options['fields']['delete_note']['empty_zero'] = 0;
$handler->display->display_options['fields']['delete_note']['text'] = 'Remove';
/* Sort criterion: Flags: Flagged time */
$handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['table'] = 'flag_content';
$handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['relationship'] = 'flag_content_rel';
$handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';