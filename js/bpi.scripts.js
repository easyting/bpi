/**
 * @file
 * Trigger Drupal's ajax on page load.
 */

(function($){
  Drupal.ajax.prototype.bpi_syndicate_images = function() {
    var ajax = this;

    // Do not perform another ajax command if one is already in progress.
    if (ajax.ajaxing) {
      return false;
    }

    try {
      $.ajax(ajax.options);
    }
    catch (err) {
    }

    return false;
  };

  var custom_settings = {};
  custom_settings.url = '/admin/bpi/images/nojs';
  custom_settings.event = 'onload';
  custom_settings.keypress = false;
  custom_settings.prevent = false;
  Drupal.ajax['bpi_syndicate_images'] = new Drupal.ajax(null, $(document.body), custom_settings);

  /**
   * Define a point to trigger our custom actions. e.g. on page load.
   */
  $(document).ready(function() {
    Drupal.ajax['bpi_syndicate_images'].bpi_syndicate_images();
  });

  Drupal.behaviors.bpi = {
   attach: function (context, settings) {
     jQuery('input#edit-bpi-assets-syndicate:not(.ajax-processed)').addClass('ajax-processed').each(function() {
        var element_settings = {};
        element_settings.progress = { 'type' : 'none' };
        element_settings.url = '/system/ajax'
        element_settings.event = 'mousedown';
        element_settings.prevent = 'click';
        element_settings.callback = 'bpi_asset_action_ajax_callback';
        element_settings.submit = {
          _triggering_element_name: "op",
          _triggering_element_value: "Отправить"
        };
        element_settings.effect = 'fade';
        var base = jQuery(this).attr('id');
        Drupal.ajax[base] = new Drupal.ajax(base, this, element_settings);
      });
    }
  };
})(jQuery);
