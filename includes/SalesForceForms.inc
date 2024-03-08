<?php

namespace CompariqoIntegration;

Class SalesForceForms
{
    const ContactForm = 'ContactForm';
    const AccountForm = 'AccountForm';
    const OpportunityForm = 'OpportunityForm';



    public static function show($form)
    {
        $path = COMPARIQO_INTEGRATION_DIR . 'templates/' . $form . '.php';
        include $path;
    }

    public static function checkRequestedData()
    {

    }


    public static function processForm()
    {
        if(isset($_POST)){

        }

        return false;
    }
}