<?php

namespace TestTask;

class Hooks{

    static function activation(){
       Seeder::seed();
    }

    static function deactivation(){
      Seeder::clean();
      delete_option('test_task_custom_template_enabled');
      delete_option('test_task_custom_template_category');
      delete_option('test_task_custom_posts_per_page');
      delete_option('test_task_404_url_pattern');
      delete_option('test_task_enable_widget');
    }

    static function uninstall(){
      //Meh, will uninstall anyway xD 
    }

}