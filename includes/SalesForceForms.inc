<?php
Class SalesForceForms
{
    const ContactForm = 'ContactForm';
    const AccountForm = 'AccountForm';
    const OpportunityForm = 'OpportunityForm';



    public static function show($form)
    {
        $path = get_template_directory() . '/templates/' . $form . '.php';
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