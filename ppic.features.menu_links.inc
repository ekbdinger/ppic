<?php
/**
 * @file
 * ppic.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ppic_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/structure/menu/manage/menu-ppic-navigation
  $menu_links['management:admin/structure/menu/manage/menu-ppic-navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-ppic-navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'PPIC Links',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-ppic-worker
  $menu_links['management:admin/structure/menu/manage/menu-ppic-worker'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-ppic-worker',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'PPIC Worker',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: menu-ppic-navigation:http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/2013-04-11%2015.06%20Private%20Payer%20Incentives%20Overview.wmv
  $menu_links['menu-ppic-navigation:http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/2013-04-11%2015.06%20Private%20Payer%20Incentives%20Overview.wmv'] = array(
    'menu_name' => 'menu-ppic-navigation',
    'link_path' => 'http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/2013-04-11%2015.06%20Private%20Payer%20Incentives%20Overview.wmv',
    'router_path' => '',
    'link_title' => 'PPIC Webinar',
    'options' => array(
      'attributes' => array(
        'title' => 'Webinar recording from April 11, 2013',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-ppic-navigation:http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/Incentive%20Consulting%20Flyer.pdf
  $menu_links['menu-ppic-navigation:http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/Incentive%20Consulting%20Flyer.pdf'] = array(
    'menu_name' => 'menu-ppic-navigation',
    'link_path' => 'http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/Incentive%20Consulting%20Flyer.pdf',
    'router_path' => '',
    'link_title' => 'Marketing Flyer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-ppic-navigation:http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/PPIC%20Internal%20Presentation.pdf
  $menu_links['menu-ppic-navigation:http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/PPIC%20Internal%20Presentation.pdf'] = array(
    'menu_name' => 'menu-ppic-navigation',
    'link_path' => 'http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/PPIC%20Internal%20Presentation.pdf',
    'router_path' => '',
    'link_title' => 'PPIC Internal Presentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-ppic-navigation:ppic-programs
  $menu_links['menu-ppic-navigation:ppic-programs'] = array(
    'menu_name' => 'menu-ppic-navigation',
    'link_path' => 'ppic-programs',
    'router_path' => 'ppic-programs',
    'link_title' => 'PPIC Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-ppic-worker:node/add/ppic-program
  $menu_links['menu-ppic-worker:node/add/ppic-program'] = array(
    'menu_name' => 'menu-ppic-worker',
    'link_path' => 'node/add/ppic-program',
    'router_path' => 'node/add/ppic-program',
    'link_title' => 'New PPIC Program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-ppic-worker:ppic-programs
  $menu_links['menu-ppic-worker:ppic-programs'] = array(
    'menu_name' => 'menu-ppic-worker',
    'link_path' => 'ppic-programs',
    'router_path' => 'ppic-programs',
    'link_title' => 'PPIC Programs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Marketing Flyer');
  t('New PPIC Program');
  t('PPIC Home');
  t('PPIC Internal Presentation');
  t('PPIC Links');
  t('PPIC Programs');
  t('PPIC Webinar');
  t('PPIC Worker');


  return $menu_links;
}
