<?php
session_start();
include_once("connection.php");

    $exam=$_GET["answer"];
	$query="insert into examid values('$exam')";
    mysqli_query($dbcon,$query);
	//fires the query in database/table
	$msg=mysqli_error($dbcon);
	if($msg=="")
    {
        $_SESSION["active_user1"]=$exam;
        echo "VALID";
    }
	else
		echo "INVALID";  

?>
