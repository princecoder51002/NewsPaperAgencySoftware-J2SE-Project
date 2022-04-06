<?php


    include_once("connection.php");
    $uid=$_GET["email"];
	$pwd=$_GET["password"];
	$mob=$_GET["mobile"];
    $name=$_GET["name"];
	$query="insert into users (name,id,password,mobile)values('$name','$uid','$pwd','$mob')";

	mysqli_query($dbcon,$query);
	//fires the query in database/table
	$msg=mysqli_error($dbcon);
	if($msg=="")
		echo "<font color='black'>SUCCESSFULLY REGISTERED &reg;</font>";
	else
		echo "<font color='black'>INVALID ID AND PASSWORD</font>";
?>
