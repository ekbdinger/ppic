<?php
/**
 * @file
 * ppic.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ppic_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ppic_programs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PPIC Programs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'PPIC Programs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    47 => '47',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_ppic_state' => 'field_ppic_state',
    'field_ppic_specialty' => 'field_ppic_specialty',
    'field_ppic_payer' => 'field_ppic_payer',
    'title' => 'title',
    'field_ppic_payment_rating' => 'field_ppic_payment_rating',
    'field_ppic_additional_info' => 'field_ppic_additional_info',
  );
  $handler->display->display_options['style_options']['default'] = 'field_ppic_state';
  $handler->display->display_options['style_options']['info'] = array(
    'field_ppic_state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ppic_specialty' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ppic_payer' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ppic_payment_rating' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ppic_additional_info' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<br /> <p>This is a list of insurance incentive programs put together by the eCW PPIC (Private Payer Incentive Consulting) Team.  This list will be updated on a regular basis by the PPIC team.</p><br />';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_ppic_state']['id'] = 'field_ppic_state';
  $handler->display->display_options['fields']['field_ppic_state']['table'] = 'field_data_field_ppic_state';
  $handler->display->display_options['fields']['field_ppic_state']['field'] = 'field_ppic_state';
  /* Field: Content: Specialty */
  $handler->display->display_options['fields']['field_ppic_specialty']['id'] = 'field_ppic_specialty';
  $handler->display->display_options['fields']['field_ppic_specialty']['table'] = 'field_data_field_ppic_specialty';
  $handler->display->display_options['fields']['field_ppic_specialty']['field'] = 'field_ppic_specialty';
  /* Field: Content: Payer */
  $handler->display->display_options['fields']['field_ppic_payer']['id'] = 'field_ppic_payer';
  $handler->display->display_options['fields']['field_ppic_payer']['table'] = 'field_data_field_ppic_payer';
  $handler->display->display_options['fields']['field_ppic_payer']['field'] = 'field_ppic_payer';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Payment Rating */
  $handler->display->display_options['fields']['field_ppic_payment_rating']['id'] = 'field_ppic_payment_rating';
  $handler->display->display_options['fields']['field_ppic_payment_rating']['table'] = 'field_data_field_ppic_payment_rating';
  $handler->display->display_options['fields']['field_ppic_payment_rating']['field'] = 'field_ppic_payment_rating';
  /* Field: Content: Additional Info */
  $handler->display->display_options['fields']['field_ppic_additional_info']['id'] = 'field_ppic_additional_info';
  $handler->display->display_options['fields']['field_ppic_additional_info']['table'] = 'field_data_field_ppic_additional_info';
  $handler->display->display_options['fields']['field_ppic_additional_info']['field'] = 'field_ppic_additional_info';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ppic_program' => 'ppic_program',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'ppic-programs';
  $handler->display->display_options['menu']['title'] = 'PPIC Programs';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['ppic_programs'] = $view;

  return $export;
}
