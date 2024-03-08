<?php

namespace CompariqoIntegration;

class Autoloader {

    static function register() {
        require_once TEST_TASK_DIR . 'classes/AjaxHandler.php';
        require_once TEST_TASK_DIR . 'classes/AssetsHandler.php';
        require_once TEST_TASK_DIR . 'classes/Extend404.php';
        require_once TEST_TASK_DIR . 'classes/ExtendCategory.php';
        require_once TEST_TASK_DIR . 'classes/ExtendWidget.php';
        require_once TEST_TASK_DIR . 'classes/Hooks.php';
        require_once TEST_TASK_DIR . 'classes/Menu.php';
        require_once TEST_TASK_DIR . 'classes/Plugin.php';
        require_once TEST_TASK_DIR . 'classes/Seeder.php';
    }

}