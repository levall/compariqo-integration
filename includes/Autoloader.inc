<?php

namespace CompariqoIntegration;

class Autoloader {

    static function register() {
    //    require_once COMPARIQO_INTEGRATION_DIR . 'includes/AjaxHandler.inc';
    //    require_once COMPARIQO_INTEGRATION_DIR . 'includes/AssetsHandler.inc';
        require_once COMPARIQO_INTEGRATION_DIR . 'includes/Configuration.inc';
        require_once COMPARIQO_INTEGRATION_DIR . 'includes/SalesForce.inc';
        require_once COMPARIQO_INTEGRATION_DIR . 'includes/SalesForceForms.inc';

    }

}