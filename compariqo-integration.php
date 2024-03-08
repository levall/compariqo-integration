<?php

/*
Plugin Name: Compariqo Integrations Plugin
Description: Simple Integration between Compariqo site, SalesForce and Xero
Author: Leonid Lukyanov
Version: 1.1
*/

define( 'COMPARIQO_INTEGRATION_DIR', plugin_dir_path(__FILE__) );
define( 'COMPARIQO_INTEGRATION_URL', plugin_dir_url(__FILE__) );
define( 'COMPARIQO_SALESFORCE_CONFIG', 'Compariqo');
define( 'COMPARIQO_XERO_CONFIG', 'Xero');

require_once COMPARIQO_INTEGRATION_DIR . 'includes/Autoloader.inc';

CompariqoIntegration\Autoloader::register();
CompariqoIntegration\Configuration::load(COMPARIQO_SALESFORCE_CONFIG );

//Here we can add loading of admin if we need it
//$compariqoIntegration = new CompariqoIntegraion \Plugin();
//add_action('plugin_loaded', array($compariqoIntegration, 'load'));

//register_activation_hook(__FILE__, 'TestTask\Hooks::activation' );
//register_deactivation_hook(__FILE__, 'TestTask\Hooks::deactivation');
//register_uninstall_hook(__FILE__, 'TestTask\Hooks::uninstall');
