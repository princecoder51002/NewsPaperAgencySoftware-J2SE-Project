<?php

// service
include_once("56.mysql-connection.php");

$uidy=$_GET["uidy"];
$query="select * from profile where uid='$uidy'";

$table=mysqli_query($dbcon,$query); // 1 or 0 possibility
$count=mysqli_num_rows($table);
if($count==0)
    echo "Available";
else 
    echo "Aready occupied";

?>