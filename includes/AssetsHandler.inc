<?php

namespace CompariqoIntegration;

class AssetsHandler {

    public function adminStyles() {

    }

    public function adminScripts() {
        if( !wp_script_is( 'compariqo-integration-admin.js' , 'enqueued' ) ){
            wp_enqueue_script('compariqo-integration-admin-script', COMPARIQO_INTEGRATION_URL . 'assets/admin/js/compariqo-integration-admin.js', array('jquery'), '1.6', true);
            wp_localize_script('compariqo-integration-admin-script', 'compariqoIntegrationAjax', array('ajaxurl' => admin_url('admin-ajax.php')));
        }
    }

}
