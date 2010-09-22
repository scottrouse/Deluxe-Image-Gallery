<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function deluxe_image_gallery_imagecache_default_presets() {
  $items = array(
    'upload_preview' => array(
      'presetname' => 'upload_preview',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '400',
            'height' => '400',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}
