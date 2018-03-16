<?php
//require_once('path.inc');
//require_once('get_host_info.inc');
require_once('rabbitMQLib.inc');


$client = new rabbitMQClient("allRBMQ.ini", "apiServer");


$str = "look at me im in the que";

$response = $client->send_request($str);

print_r($response);

?>
