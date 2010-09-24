<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function deluxe_image_gallery_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_exif
  $groups['photo-group_exif'] = array(
    'group_type' => 'standard',
    'type_name' => 'photo',
    'group_name' => 'group_exif',
    'label' => 'EXIF Data',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '<p><abbr title="Exchangeable Image File Format">EXIF</abbr> data is metadata which is stored in images from most digital cameras. These fields are <strong>automatically populated</strong> from the information embedded in your digital files. If any of the fields are blank, you may add your own content, however, editing a field which was automatically populated from the digital file will not work.</p>',
      ),
      'display' => array(
        'weight' => '33',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '33',
    'fields' => array(
      '0' => 'field_exif_exposuretime',
      '1' => 'field_computed_aperturefnumber',
      '2' => 'field_exif_isospeedratings',
      '3' => 'field_exif_datetimeoriginal',
      '4' => 'field_ifd0_make',
      '5' => 'field_ifd0_model',
      '6' => 'field_gps_gpslatitude',
      '7' => 'field_gps_gpslongitude',
      '8' => 'field_ifd0_software',
    ),
  );

  // Exported group: group_iptc
  $groups['photo-group_iptc'] = array(
    'group_type' => 'standard',
    'type_name' => 'photo',
    'group_name' => 'group_iptc',
    'label' => 'IPTC Data',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '<p>IPTC data is from specific metadata fields in your digital files. These fields are <strong>automatically populated</strong> from the information embedded in those files. If any of the fields are blank, you may add your own content, however, editing a field which was automatically populated from the digital file will not work.</p>',
      ),
      'display' => array(
        'weight' => '34',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '34',
    'fields' => array(
      '0' => 'field_iptc_caption',
      '1' => 'field_iptc_by_line',
      '2' => 'field_iptc_keywords',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('EXIF Data');
  t('IPTC Data');

  return $groups;
}
