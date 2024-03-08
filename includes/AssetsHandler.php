<?php

namespace TestTask;

class AssetsHandler {

    public function adminStyles() {
        //Meh
    }

    public function adminScripts() {
        if( !wp_script_is( 'test-task-admin.js' , 'enqueued' ) ){
            wp_enqueue_script('compariqo-integration-admin-script', COMPARIQO_INTEGRATION_URL . 'assets/admin/js/compariqo-integration-admin.js', array('jquery'), '1.5', true);
            wp_localize_script('compariqo-integration-admin-script', 'compariqoIntegrationAjax', array('ajaxurl' => admin_url('admin-ajax.php')));
        }
    }

}
