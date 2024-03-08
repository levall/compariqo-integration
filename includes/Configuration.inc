<?php
namespace CompariqoIntegration;

class Configuration
{
    static public $data;

    static private function from_file()
    {
        $data = parse_ini_file(COMPARIQO_INTEGRATION_DIR . 'config/config.ini', true);
        if (!is_array($data))
            throw new Exception('Could not parse config/config.ini');
        return $data;
    }

    static private function data()
    {
        static $data;

        if (is_array($data))
            return $data;

        $data = self::from_file();

        return $data;
    }

    /** @return array */
    static public function load($subset)
    {
        $data = self::data();
        if (!array_key_exists($subset, $data))
            throw new Exception('Unknown group: ' . $subset);
        self::$data = $data[$subset];
    }
}

