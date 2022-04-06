<?php
// service

include_once("connection.php");

$exam=$_GET["exam"];
$query="select * from questionpaper where id='$exam'";

$table=mysqli_query($dbcon,$query); // 1 or 0 possibility

$ary=array(); // creation of empty array

while($row=mysqli_fetch_array($table))
{
    $ary[]=$row; // storing row in array
}
echo json_encode($ary); // gives us json format
?>
