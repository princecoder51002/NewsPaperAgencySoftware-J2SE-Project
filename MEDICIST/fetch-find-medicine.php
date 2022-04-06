<?php

include_once("mysql-connection.php");

$query="select distinct medname from medicines";

$table=mysqli_query($dbcon,$query);

$city=array();

while($row=mysqli_fetch_assoc($table))
    {
        $city[]=$row;
    }

echo json_encode($city);
?>