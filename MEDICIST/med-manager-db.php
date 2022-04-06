<?php
include_once("mysql-connection.php");

$med=$_GET["medmed"];
$quant=$_GET["quantu"];

$query="update medicines set quantity='$quant' where rid='$med'";

mysqli_query($dbcon,$query);

echo "<font color='green'>UPDATED!!!!</font>";
?>