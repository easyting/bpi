<?php
/**
 * @file
 * review_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function review_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_revidws_images|node|review|form';
  $field_group->group_name = 'group_revidws_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'review';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_reviews';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '11',
    'children' => array(
      0 => 'field_list_image',
      1 => 'field_main_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_revidws_images|node|review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reviews_content|node|review|form';
  $field_group->group_name = 'group_reviews_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'review';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_reviews';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '10',
    'children' => array(
      0 => 'body',
      1 => 'field_reviews',
      2 => 'field_type',
      3 => 'field_editorial_base_n',
      4 => 'title',
      5 => 'path',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_reviews_content|node|review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reviews_relation|node|review|form';
  $field_group->group_name = 'group_reviews_relation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'review';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_reviews';
  $field_group->data = array(
    'label' => 'Relations',
    'weight' => '12',
    'children' => array(
      0 => 'group_audience',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_reviews_relation|node|review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reviews_taxonomies|node|review|form';
  $field_group->group_name = 'group_reviews_taxonomies';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'review';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_reviews';
  $field_group->data = array(
    'label' => 'Taxonomies',
    'weight' => '13',
    'children' => array(
      0 => 'field_category',
      1 => 'field_dams_tags',
      2 => 'field_audience_n',
      3 => 'field_genre_n',
      4 => 'field_material_type_n',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_reviews_taxonomies|node|review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reviews|node|review|form';
  $field_group->group_name = 'group_reviews';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'review';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Reviews',
    'weight' => '0',
    'children' => array(
      0 => 'group_reviews_content',
      1 => 'group_revidws_images',
      2 => 'group_reviews_relation',
      3 => 'group_reviews_taxonomies',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_reviews|node|review|form'] = $field_group;

  return $export;
}
