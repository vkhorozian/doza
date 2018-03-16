<?php
$path = '/usr/local/lib/system_libs';
    if (file_exists('local.ini'))
    {
        $parse = parse_ini_file('local.ini',true);
        if (isset($parse['paths']))
        {
            $path = $parse['paths']['libraries'];
        }
        else
        {
           trigger_error("local.ini missing paths field\n",E_USER_NOTICE); 
        }
    }
    set_include_path(get_include_path().PATH_SEPARATOR.$path);




    /*
[dbServer]
BROKER_HOST = 127.0.0.1
BROKER_PORT = 5672
USER = test
PASSWORD = test
VHOST = testHost
EXCHANGE = dbExchange
QUEUE = dbQueue
;EXCHANGE_TYPE = ????
AUTO_DELETE = true

[apacheServer]
BROKER_HOST = 127.0.0.1
BROKER_PORT = 5672
USER = test
PASSWORD = test
VHOST = testHost
EXCHANGE = appacheExchange
QUEUE = appacheQueue
;EXCHANGE_TYPE = ????
AUTO_DELETE = true

[rabbitServer]
BROKER_HOST = 127.0.0.1
BROKER_PORT = 5672
USER = test
PASSWORD = test
VHOST = testHost
EXCHANGE = testExchange
QUEUE = testQueue
;EXCHANGE_TYPE = ????
AUTO_DELETE = true
*/
?>
