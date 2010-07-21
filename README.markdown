
# OpenID Simple Sign On (OSSO)

Sign on to a Drupal site by relying on another Drupal site as a dedicated 
Identity Provider. For the Identity Provider use the OSSO Provider feature.

## Set up:

1. Install Drupal
2. Download the module's dependencies. See note below to use drush_make.
3. Install OSSO Relying module from admin/build/features page.
4. Go to admin/settings/openid-sso and add trusted OpenID Provider
   (the assumption is that the provider has the [OSSO
   Provider](https://github.com/developmentseed/osso_provider) feature
   installed.

## Makefile

The following lines of makefile code will download this module's dependencies:

core = "6.x"

projects[ctools][version] = "1.3"
projects[feeds][version] = "1.0-alpha12"

; KeyAuth
projects[keyauth][type] = "module"
projects[keyauth][download][type] = "git"
projects[keyauth][download][url] = "git://github.com/developmentseed/keyauth.git"

; Open ID SSO
projects[openid_sso][type] = "module"
projects[openid_sso][download][type] = "git"
projects[openid_sso][download][url] = "git://github.com/developmentseed/openid_sso.git"
