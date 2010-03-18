<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function osso_relying_ctools_plugin_api() {
  module_load_include('inc', 'osso_relying', 'osso_relying.defaults');
  $args = func_get_args();
  return call_user_func_array('_osso_relying_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function osso_relying_strongarm() {
  module_load_include('inc', 'osso_relying', 'osso_relying.defaults');
  $args = func_get_args();
  return call_user_func_array('_osso_relying_strongarm', $args);
}
