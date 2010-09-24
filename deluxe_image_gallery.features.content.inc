<?php

/**
 * Implementation of hook_content_default_fields().
 */
function deluxe_image_gallery_content_default_fields() {
  $fields = array();

  // Exported field: field_computed_aperturefnumber
  $fields['photo-field_computed_aperturefnumber'] = array(
    'field_name' => 'field_computed_aperturefnumber',
    'type_name' => 'photo',
    'display_settings' => array(
      'weight' => '43',
      'parent' => 'group_exif',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '5',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_computed_aperturefnumber][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Aperture',
      'weight' => '43',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_exif_datetimeoriginal
  $fields['photo-field_exif_datetimeoriginal'] = array(
    'field_name' => 'field_exif_datetimeoriginal',
    'type_name' => 'photo',
    'display_settings' => array(
      'weight' => '45',
      'parent' => 'group_exif',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'exif',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'exif',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'datetime',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
      'second' => 'second',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'exif',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'M j Y - g:i:sa',
      'input_format_custom' => 'Y:m:d H:i:s',
      'increment' => 1,
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Capture Time',
      'weight' => '45',
      'description' => '',
      'type' => 'date_text',
      'module' => 'date',
    ),
  );

  // Exported field: field_exif_exposuretime
  $fields['photo-field_exif_exposuretime'] = array(
    'field_name' => 'field_exif_exposuretime',
    'type_name' => 'photo',
    'display_settings' => array(
      'weight' => '42',
      'parent' => 'group_exif',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '5',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_exif_exposuretime][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Shutter Speed',
      'weight' => '42',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_exif_isospeedratings
  $fields['photo-field_exif_isospeedratings'] = array(
    'field_name' => 'field_exif_isospeedratings',
    'type_name' => 'photo',
    'display_settings' => array(
      'weight' => '44',
      'parent' => 'group_exif',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_exif_isospeedratings][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'ISO',
      'weight' => '44',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_gps_gpslatitude
  $fields['photo-field_gps_gpslatitude'] = array(
    'field_name' => 'field_gps_gpslatitude',
    'type_name' => 'photo',
    'display_settings' => array(
      'weight' => '48',
      'parent' => 'group_exif',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_gps_gpslatitude][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Latitude',
      'weight' => '48',
      'description' => 'The <strong>Latitude</strong> is automatically populated from the <em>EXIF Data</em> embedded in your uploaded digital image from an embedded or attached <abbr title="Global Positioning System">GPS</abbr>.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_gps_gpslongitude
  $fields['photo-field_gps_gpslongitude'] = array(
    'field_name' => 'field_gps_gpslongitude',
    'type_name' => 'photo',
    'display_settings' => array(
      'weight' => '49',
      'parent' => 'group_exif',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_gps_gpslongitude][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Longitude',
      'weight' => '49',
      'description' => 'The <strong>Longitude</strong> is automatically populated from the <em>EXIF Data</em> embedded in your uploaded digital image from an embedded or attached <abbr title="Global Positioning System">GPS</abbr>.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_ifd0_make
  $fields['photo-field_ifd0_make'] = array(
    'field_name' => 'field_ifd0_make',
    'type_name' => 'photo',
    'display_settings' => array(
      'weight' => '46',
      'parent' => 'group_exif',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '15',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_ifd0_make][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Camera Make',
      'weight' => '46',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_ifd0_model
  $fields['photo-field_ifd0_model'] = array(
    'field_name' => 'field_ifd0_model',
    'type_name' => 'photo',
    'display_settings' => array(
      'weight' => '47',
      'parent' => 'group_exif',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '30',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_ifd0_model][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Camera Model',
      'weight' => '47',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_ifd0_software
  $fields['photo-field_ifd0_software'] = array(
    'field_name' => 'field_ifd0_software',
    'type_name' => 'photo',
    'display_settings' => array(
      'weight' => '50',
      'parent' => 'group_exif',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_ifd0_software][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Software',
      'weight' => '50',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_iptc_by_line
  $fields['photo-field_iptc_by_line'] = array(
    'field_name' => 'field_iptc_by_line',
    'type_name' => 'photo',
    'display_settings' => array(
      'weight' => '47',
      'parent' => 'group_iptc',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_iptc_by_line][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'By Line',
      'weight' => '47',
      'description' => 'The <strong>By Line</strong> field is automatically populated from the <em>metadata</em> embedded in your uploaded digital image. It is also sometimes known as the <strong>Creator</strong> field.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_iptc_caption
  $fields['photo-field_iptc_caption'] = array(
    'field_name' => 'field_iptc_caption',
    'type_name' => 'photo',
    'display_settings' => array(
      'weight' => '45',
      'parent' => 'group_iptc',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_iptc_caption][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Caption/Description',
      'weight' => '45',
      'description' => 'The <strong>Caption</strong> field is automatically populated from the <em>metadata</em> embedded in your uploaded digital image. You may enter a value in this field.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_iptc_keywords
  $fields['photo-field_iptc_keywords'] = array(
    'field_name' => 'field_iptc_keywords',
    'type_name' => 'photo',
    'display_settings' => array(
      'weight' => '48',
      'parent' => 'group_iptc',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_iptc_keywords][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Keywords',
      'weight' => '48',
      'description' => 'The <strong>Keywords</strong> field is automatically populated from the <em>metadata</em> embedded in your uploaded digital image.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_photo
  $fields['photo-field_photo'] = array(
    'field_name' => 'field_photo',
    'type_name' => 'photo',
    'display_settings' => array(
      'weight' => '31',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'slideshow_large__colorbox',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'slideshow_large__colorbox',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '[field_iptc_caption-formatted]',
      'custom_alt' => 1,
      'title' => '[field_iptc_caption-formatted]',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'fupload_mode' => 'single',
      'fupload_previewlist_img_attributes' => '',
      'fupload_title_replacements' => '_;{;};-',
      'fupload_previewlist_field_settings' => array(
        'imagefield_title' => 'imagefield_title',
        'imagefield_alt' => 'imagefield_alt',
        'node_title' => 0,
        'node_description' => 0,
        'imagefield_description' => 0,
        'cck_field_portfolio' => 0,
        'cck_field_exif_exposuretime' => 0,
        'cck_field_computed_aperturefnumber' => 0,
        'cck_field_exif_isospeedratings' => 0,
        'cck_field_iptc_caption' => 0,
        'cck_field_exif_datetimeoriginal' => 0,
        'cck_field_ifd0_make' => 0,
        'cck_field_iptc_by_line' => 0,
        'cck_field_ifd0_model' => 0,
        'cck_field_iptc_keywords' => 0,
        'cck_field_gps_gpslatitude' => 0,
        'cck_field_gps_gpslongitude' => 0,
        'cck_field_ifd0_software' => 0,
      ),
      'fupload_previewlist_redirecturl' => '',
      'label' => 'Photo',
      'weight' => '31',
      'description' => '<p>Upload your photo here. If you\'re replacing an existing image, click the <strong>Remove</strong> button first.</p>
<ol>
<li>Click <strong>Choose File</strong> and select the image you wish to upload from your computer. It must be in <em>JPG format</em> and its file size can be <em>no more than 2MB</em>.</li>
<li>Click the <strong>Upload</strong> button to send your file to the server.</li>
<li>If you wish, you may enter a custom <strong>Alternate Text</strong> and/or <strong>Title</strong> tag for your image. They will be automatically filled in with the content of your image\'s <em>IPTC Caption</em> field if:
<ul>
<li>that IPTC field has been filled out and saved into the metadata of the JPG you are uploading and</li>
<li>you leave the <em>[field_iptc_caption-formatted]</em> placeholder in the fields.</li>
</ul>
</li>
<li>Click the <strong>Save</strong> button at the bottom of this form once you are finished to save your changes.</li>
</ol>',
      'type' => 'image_fupload_imagefield_widget',
      'module' => 'image_fupload_imagefield',
    ),
  );

  // Exported field: field_portfolio
  $fields['photo-field_portfolio'] = array(
    'field_name' => 'field_portfolio',
    'type_name' => 'photo',
    'display_settings' => array(
      'weight' => '32',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'portfolio' => 'portfolio',
      'page' => 0,
      'photo' => 0,
      'story' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'node_link' => array(
        'teaser' => 0,
        'full' => 1,
        'title' => 'Add Photo(s)',
        'hover_title' => 'Add one or more Photo(s) to this Portfolio',
        'destination' => 'node',
      ),
      'fallback' => 'select',
      'edit_fallback' => 1,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'autocomplete_match' => 'contains',
      'size' => 60,
      'label' => 'Portfolio',
      'weight' => '32',
      'description' => '<p>Choose the <em>Portfolio(s)</em> in which you\'d like this Photo to appear. You may select as many Portfolios as you wish.</p>
<p>To select multiple portfolios, hold down the Control key on a PC or the Command key on a Mac while clicking on the desired portfolio names. Click again on a selected portfolio to deselect it.</p>
<p>Remember to click the <strong>Save</strong> button at the bottom of this form to save your changes.</p>',
      'type' => 'nodereference_url',
      'module' => 'nodereference_url',
    ),
  );

  // Exported field: field_portfolio_descr
  $fields['portfolio-field_portfolio_descr'] = array(
    'field_name' => 'field_portfolio_descr',
    'type_name' => 'portfolio',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '15',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_portfolio_descr][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Description',
      'weight' => '-3',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Aperture');
  t('By Line');
  t('Camera Make');
  t('Camera Model');
  t('Caption/Description');
  t('Capture Time');
  t('Description');
  t('ISO');
  t('Keywords');
  t('Latitude');
  t('Longitude');
  t('Photo');
  t('Portfolio');
  t('Shutter Speed');
  t('Software');

  return $fields;
}
