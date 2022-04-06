<?php
include_once("mysql-connection.php");

$uid=$_GET["checkemail1"];
$pw=$_GET["checkpassword1"];
$npwd=$_GET["npwd"];

$query="select * from users where email='$uid' and pwd='$pw'";

$table=mysqli_query($dbcon,$query);
$num=mysqli_num_rows($table);


if($num==0)
{
    echo "INVALID ID AND PASSWORD";
}
  
else 
{
    $to_email = "$uid";
    $subject = "YOUR PASSWORD IS UPDATED";
    $body = "your old password was '$pw' and new password is '$npwd'";
    $headers = "From: chahatkumar40@gmail.com";

    if (mail($to_email, $subject, $body, $headers)) {
    $query1="update users set pwd='$npwd' where email='$uid'";
    mysqli_query($dbcon,$query1);
	$msg=mysqli_error($dbcon);
    if($msg=="")
	{
		$count=mysqli_affected_rows($dbcon);//1 or zero possibility-primary key
		if($count==1)
			 echo "<font color='green'>SUCCESSFULLY UPDATED &reg;</font>";
    }
    } else {
    echo "Email sending failed...";
    }
}
?>