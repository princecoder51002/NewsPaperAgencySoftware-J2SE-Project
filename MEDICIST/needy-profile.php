<?php

include_once("mysql-connection.php");

$btn=$_POST["btn"];
$uid=$_POST["txtUid"];
	$name=$_POST["namee"];
	$mob=$_POST["contact"];
    $add=$_POST["address"];
    $city=$_POST["shehar"];
    $adhar=$_POST["adhar"];
    $state=$_POST["state"];
    $name1=$_FILES["profilepic"]["name"];
	$tmpname1=$_FILES["profilepic"]["tmp_name"];

	$fullname1=$uid."-".$name1;

    if($btn=="SEND TO SERVER")
    {
	$query="insert into needy values('$uid', '$name', '$mob', '$add', '$city', '$adhar', '$state', '$fullname1')";
    
    mysqli_query($dbcon,$query);
    move_uploaded_file($tmpname1,"uploads/".$fullname1);

	
   
	//fires the query in database/table
	$msg=mysqli_error($dbcon);
	if($msg=="")
    {
		
        echo "<script type='text/javascript'>
        alert('SUCCESSFULLY REGISTERED');
        window.location='dash-needy.php';
        </script>";
    }
	else
		echo "INVALID ID AND PASSWORD";  
    }

?>