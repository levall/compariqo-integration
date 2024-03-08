<?php 

namespace CompariqoIntegration;

class AjaxHandler {

    public function update_compariqo_integration_save_assigment_1_settings() {

        if (!wp_verify_nonce($_POST['compariqo_integration_save_assigment_1_nonce'], 'compariqo_integration_save_assigment_1_settings')) {
            wp_die('Invalid nonce');
        }
        
        $compariqo_integration_custom_template_enabled = isset($_POST['compariqo_integration_custom_template_enabled']) ? 1 : 0;
        update_option('compariqo_integration_custom_template_enabled', $compariqo_integration_custom_template_enabled);

        // Save the selected category
        $selected_category = sanitize_text_field($_POST['compariqo_integration_custom_template_category']);
        update_option('compariqo_integration_custom_template_category', $selected_category);

        // Save the selected posts per page
        $posts_per_page = (int) $_POST['compariqo_integration_custom_posts_per_page'];
        update_option('compariqo_integration_custom_posts_per_page', $posts_per_page);
    
        // wp_send_json_success();
        exit;

    }

    public function update_compariqo_integration_save_assigment_2_settings() {

        if (!wp_verify_nonce($_POST['compariqo_integration_save_assigment_2_nonce'], 'compariqo_integration_save_assigment_2_settings')) {
            wp_die('Invalid nonce');
        }
        
        $url_pattern = sanitize_text_field($_POST['compariqo_integration_404_url_pattern']);
        update_option('compariqo_integration_404_url_pattern', $url_pattern);
    
        // wp_send_json_success();
        exit;

    }

    public function update_compariqo_integration_save_assigment_3_settings() {

        if (!wp_verify_nonce($_POST['compariqo_integration_save_assigment_3_nonce'], 'compariqo_integration_save_assigment_3_settings')) {
            wp_die('Invalid nonce');
        }
        
        $enable_widget = isset($_POST['compariqo_integration_enable_widget']) ? 1 : 0;
        update_option('compariqo_integration_enable_widget', $enable_widget);
    
        // wp_send_json_success();
        exit;

    }

}