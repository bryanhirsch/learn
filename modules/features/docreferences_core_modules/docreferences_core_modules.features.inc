<?php
/**
 * @file
 * docreferences_core_modules.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function docreferences_core_modules_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "docreferences" && $api == "default_docreferences") {
    return array("version" => "1");
  }
}
