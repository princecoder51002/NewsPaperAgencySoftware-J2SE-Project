<?php
session_start();
include_once("connection.php");
//echo "login page";

$email=$_GET["email1"];
$pass=$_GET["pass1"];
$query="select * from users where id='$email' and password='$pass'";

$table=mysqli_query($dbcon,$query);
$num=mysqli_num_rows($table);

if($num==0)
    echo "INVALID";
else 
{
     echo "VALID";  
    $_SESSION["active_user"]=$email;
}
?>
