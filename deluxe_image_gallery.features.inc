<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function deluxe_image_gallery_imagecache_default_presets() {
  $items = array(
    'edit_table' => array(
      'presetname' => 'edit_table',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '100',
            'height' => '100',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'slideshow_large' => array(
      'presetname' => 'slideshow_large',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '940',
            'height' => '600',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_definecanvas',
          'data' => array(
            'RGB' => array(
              'HEX' => 'FFFFFF',
            ),
            'under' => 1,
            'exact' => array(
              'width' => '940',
              'height' => '',
              'xpos' => 'center',
              'ypos' => 'center',
            ),
            'relative' => array(
              'leftdiff' => '',
              'rightdiff' => '',
              'topdiff' => '',
              'bottomdiff' => '',
            ),
          ),
        ),
      ),
    ),
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

/**
 * Implementation of hook_node_info().
 */
function deluxe_image_gallery_node_info() {
  $items = array(
    'photo' => array(
      'name' => t('Photo'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => t('<h3>Uploading Photos</h3>
<ol>
<li>Click the blue and green <strong>Select Images</strong> and choose the image or images you\'d like to upload from your computer.</li>
<li>(Optional) If you have not already specified a Portfolio for these images, you may do so in the <strong>Portfolio</strong> field.</li>
<li>Click the <strong>Save</strong> button at the bottom of this form to begin sending the files to the server.</li>
<li>Once the upload is complete, you will be prompted to click the <strong>Next step</strong> button. Click it.</li>
<li>If you wish, you may enter custom <strong>Alternate Text</strong> and/or <strong>Title</strong> tags for your images. They will be automatically filled in with the content of your images\' <em>IPTC Caption</em> fields if:
<ul>
<li>that IPTC field has been filled out and saved into the metadata of the JPGs you are uploading and</li>
<li>you leave the <em>[field_iptc_caption-formatted]</em> placeholder in the fields.</li>
</ul>
</li>
<li>Click the <strong>Done Editing</strong> button at the bottom to save your newly-uploaded image(s).</li>
</ol>
</ol>'),
    ),
    'portfolio' => array(
      'name' => t('Portfolio'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => t('<p>You are creating or editing a <em>Portfolio</em>. Portfolios are containers in which Photos can exist.</p>
<h3>Creating a New Portfolio</h3>
<ol>
<li>Enter a <strong>Title</strong> for the new Portfolio. All Portfolios must have a title, but you may use the word <em>Untitled</em>, if you\'d like.</li>
<li>(Optional) Enter a <strong>Description</strong> for this Portfolio.</li>
<li>Create a menu link to this Portfolio by entering the Portfolio\'s name in the <strong>Menu link title</strong> and selecting <em>Portfolios</em> from the <strong>Parent item</strong> drop-down list.</li>
<li>(Optional) You may add <strong>Keywords</strong> and a <strong>Description</strong> in the <strong>Meta tags</strong> section near the bottom of this form.</li>
<li>Click the <strong>Save</strong> button to publish the Portfolio. After you\'ve saved it, you may add Photos by clicking the <strong>Add Photo(s)</strong> link on the newly-created Portfolio page.</li>
</ol>'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function deluxe_image_gallery_views_api() {
  return array(
    'api' => '2',
  );
}
