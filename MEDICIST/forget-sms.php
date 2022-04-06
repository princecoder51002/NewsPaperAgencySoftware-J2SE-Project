<?php
include_once("mysql-connection.php");
include_once("SMS_OK_sms.php");

$email=$_GET["email1"];
$query="select * from users where email='$email'";

$table=mysqli_query($dbcon,$query);
$num=mysqli_num_rows($table);

if($num==0)
    echo "Enter email Id";
else 
{
    while($row=mysqli_fetch_array($table))
    {
        $msg=SendSMS($row['mobile'],"password:".$row['pwd']);
        echo $msg;
        
    }
        
}
?>