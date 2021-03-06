<?php
/**
 * @file
 * smart_search_string.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function smart_search_string_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_elements|ting_type|smart_search_string|form';
  $field_group->group_name = 'group_elements';
  $field_group->entity_type = 'ting_type';
  $field_group->bundle = 'smart_search_string';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Smart Search',
    'weight' => '1',
    'children' => array(
      0 => 'field_status',
      1 => 'field_sss_hits_per_year',
      2 => 'field_sss_hits_per_month',
      3 => 'field_sss_date',
      4 => 'field_sss_hits_score',
      5 => 'group_sss_boost',
      6 => 'group_sss_search_and_ref',
      7 => 'group_sss_sort_group',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Smart Search',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-elements field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_elements|ting_type|smart_search_string|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_smart_search_left|node|smart_search_content|teaser';
  $field_group->group_name = 'group_smart_search_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'smart_search_content';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_smart_search_content_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-smart-search-left field-group-fieldset ting-object-left',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_smart_search_left|node|smart_search_content|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_smart_search_right|node|smart_search_content|teaser';
  $field_group->group_name = 'group_smart_search_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'smart_search_content';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-smart-search-right field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_smart_search_right|node|smart_search_content|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sss_boost|ting_type|smart_search_string|form';
  $field_group->group_name = 'group_sss_boost';
  $field_group->entity_type = 'ting_type';
  $field_group->bundle = 'smart_search_string';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_elements';
  $field_group->data = array(
    'label' => 'Fremhæv og boost',
    'weight' => '7',
    'children' => array(
      0 => 'field_sss_boost_materials',
      1 => 'field_custom_boost_values',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Fremhæv og boost',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-sss-boost field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_sss_boost|ting_type|smart_search_string|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sss_search_and_ref|ting_type|smart_search_string|form';
  $field_group->group_name = 'group_sss_search_and_ref';
  $field_group->entity_type = 'ting_type';
  $field_group->bundle = 'smart_search_string';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_elements';
  $field_group->data = array(
    'label' => 'Alternativ søgestreng og reference',
    'weight' => '6',
    'children' => array(
      0 => 'field_content_reference',
      1 => 'field_alternate_search_string',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Alternativ søgestreng og reference',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-sss-search-and-ref field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_sss_search_and_ref|ting_type|smart_search_string|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sss_sort_group|ting_type|smart_search_string|form';
  $field_group->group_name = 'group_sss_sort_group';
  $field_group->entity_type = 'ting_type';
  $field_group->bundle = 'smart_search_string';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_elements';
  $field_group->data = array(
    'label' => 'Sortering',
    'weight' => '8',
    'children' => array(
      0 => 'field_sss_sort',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sortering',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-sss-sort-group field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_sss_sort_group|ting_type|smart_search_string|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Alternativ søgestreng og reference');
  t('Fremhæv og boost');
  t('Smart Search');
  t('Sortering');

  return $field_groups;
}
