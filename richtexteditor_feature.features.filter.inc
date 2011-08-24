<?php
/**
 * @file
 * richtexteditor_feature.features.filter.inc
 */

/**
 * Implementation of hook_filter_default_formats().
 */
function richtexteditor_feature_filter_default_formats() {
  $formats = array();

  // Exported format: Site Content
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Site Content',
    'cache' => '1',
    'status' => '1',
    'weight' => '-9',
    'filters' => array(
      'filter_url' => array(
        'weight' => '-49',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_html' => array(
        'weight' => '-47',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <h3> <h4> <h5> <h6> <br> <blockquote> <sup> <sub> <span> <div><img>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(),
      ),
      'typogrify' => array(
        'weight' => '-44',
        'status' => '1',
        'settings' => array(
          'smartypants_enabled' => 1,
          'smartypants_hyphens' => '2',
          'wrap_ampersand' => 1,
          'widont_enabled' => 1,
          'wrap_caps' => 1,
          'wrap_initial_quotes' => 1,
          'long_s' => 0,
          'ligatures' => array(
            'ffi' => 0,
            'ffl' => 0,
            'ff' => 0,
            'fi' => 0,
            'fl' => 0,
            'ij' => 0,
            'IJ' => 0,
            'st' => 0,
            'ss' => 0,
          ),
          'arrows' => array(
            '->>' => 0,
            '<<-' => 0,
            '->|' => 0,
            '|<-' => 0,
            '<->' => 0,
            '->' => 0,
            '<-' => 0,
            '<=>' => 0,
            '=>' => 0,
            '<=' => 0,
          ),
        ),
      ),
    ),
  );

  // Exported format: Full HTML
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '-8',
    'filters' => array(
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => '1',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => '1',
    'status' => '1',
    'weight' => '-10',
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '1',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => '2',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
