<?php

namespace CompariqoIntegration;

class Hooks{

    static function activation(){

    }

    static function deactivation(){
      delete_option('compariqo_integration_config');
    }

    static function uninstall(){

    }

}