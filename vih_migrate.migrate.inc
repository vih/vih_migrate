<?php

/**
 * @file
 *  Contains base migration classes used by other Commerce Kickstart modules.
 */

/**
 * Common features for all the migrations.
 */
abstract class VIHMigration extends Migration {

  public function processImport(array $options = array()) {
    parent::processImport($options);
    // Do not force menu rebuilding. Otherwise pathauto will try to rebuild
    // in each node_insert invocation.
    variable_set('menu_rebuild_needed', FALSE);
  }
}
