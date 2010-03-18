
# OpenID Simple Sign On (OSSO)

Sign on to a Drupal site by relying on another Drupal site as a dedicated 
Identity Provider. For the Identity Provider use the OSSO Provider feature.

## Set up:

1. Install Drupal
2. Install drush and drush_make
3. Run rebuild.sh to build dependencies.
4. Install OSSO Relying module from admin/build/features page.
5. Go to admin/settings/openid-sso and add trusted OpenID Provider
   (the assumption is that the provider has the [OSSO
   Provider](https://github.com/developmentseed/osso_provider) feature
   installed.
