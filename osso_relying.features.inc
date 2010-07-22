<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function osso_relying_user_default_permissions() {
  module_load_include('inc', 'osso_relying', 'osso_relying.defaults');
  $args = func_get_args();
  return call_user_func_array('_osso_relying_user_default_permissions', $args);
}
