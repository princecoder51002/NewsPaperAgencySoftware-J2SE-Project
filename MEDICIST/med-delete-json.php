<?php

include_once("mysql-connection.php");

$rid=$_GET["ridx"];
$query="delete from medicines where rid='$rid'";

mysqli_query($dbcon,$query);

echo "deleted";
?>