<?php

session_start();
include_once("mysql-connection.php");
//echo "login page";

$email=$_GET["email1"];
$pass=$_GET["pass1"];
$query="select * from users where email='$email' and pwd='$pass'";

$table=mysqli_query($dbcon,$query);
$num=mysqli_num_rows($table);

if($num==0)
    echo "INVALID";
else 
{
    while($row=mysqli_fetch_array($table))
    {
        $_SESSION["active_user"]=$email;
        echo $row["category"];
        
    }
        
}
?>