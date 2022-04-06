<?php
// service

include_once("mysql-connection.php");

$uidy=$_GET["uidy"];
$query="select * from profiles where uid='$uidy'";

$table=mysqli_query($dbcon,$query); // 1 or 0 possibility

$ary=array(); // creation of empty array

while($row=mysqli_fetch_array($table))
{
    $ary[]=$row; // storing row in array
}
echo json_encode($ary); // gives us json format
?>