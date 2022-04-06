<?php


include_once("mysql-connection.php");
$uid=$_GET["email"];
	$pwd=$_GET["password"];
	$mob=$_GET["mobile"];
    $cat=$_GET["cat"];
	$query="insert into users (email,pwd,mobile,category,dos)values('$uid','$pwd','$mob','$cat', CURRENT_DATE())";

	mysqli_query($dbcon,$query);
	//fires the query in database/table
	$msg=mysqli_error($dbcon);
	if($msg=="")
		echo "<font color='green'>SUCCESSFULLY REGISTERED &reg;</font>";
	else
		echo "<font color='red'>INVALID ID AND PASSWORD</font>";
?>
