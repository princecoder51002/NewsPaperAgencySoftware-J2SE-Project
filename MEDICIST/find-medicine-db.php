<?php

include_once("mysql-connection.php");

$med=$_GET["medx"];
$query="select distinct city from medicines where medname='$med'";

$table=mysqli_query($dbcon,$query);

$city=array();

while($row=mysqli_fetch_assoc($table))
    {
        $city[]=$row["city"];
    }

echo json_encode($city);
?>