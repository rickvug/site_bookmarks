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
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'flag_page_link' => 'flag_page_link',
  'url' => 'url',
  'ops' => 'ops',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'flag_page_link' => array(
    'align' => '',
    'separator' => '',
  ),
  'url' => array(
    'sortable' => 0,
    'align' => '',
    'separator' => '',
  ),
  'ops' => array(
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
/* Field: Flag page: Flag page link */
$handler->display->display_options['fields']['flag_page_link']['id'] = 'flag_page_link';
$handler->display->display_options['fields']['flag_page_link']['table'] = 'flag_page_data_url';
$handler->display->display_options['fields']['flag_page_link']['field'] = 'flag_page_link';
$handler->display->display_options['fields']['flag_page_link']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['flag_page_link']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['flag_page_link']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['flag_page_link']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['flag_page_link']['alter']['trim'] = 0;
$handler->display->display_options['fields']['flag_page_link']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['flag_page_link']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['flag_page_link']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['flag_page_link']['alter']['html'] = 0;
$handler->display->display_options['fields']['flag_page_link']['hide_empty'] = 0;
$handler->display->display_options['fields']['flag_page_link']['empty_zero'] = 0;
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops']['id'] = 'ops';
$handler->display->display_options['fields']['ops']['table'] = 'flag_content';
$handler->display->display_options['fields']['ops']['field'] = 'ops';
$handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['ops']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['ops']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['ops']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['ops']['alter']['trim'] = 0;
$handler->display->display_options['fields']['ops']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['ops']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['ops']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['ops']['alter']['html'] = 0;
$handler->display->display_options['fields']['ops']['hide_empty'] = 0;
$handler->display->display_options['fields']['ops']['empty_zero'] = 0;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'bookmarks';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');