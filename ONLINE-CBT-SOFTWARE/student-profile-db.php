<?php

include_once("connection.php");

    $btn=$_POST["btn"];
    $name=$_POST["name"];
	$surname=$_POST["surname"];
	$mob=$_POST["phonenumber"];
    $add=$_POST["address"];
    $email=$_POST["emailid"];
    $qualify=$_POST["qualification"];
    $country=$_POST["country"];
    $state=$_POST["state"];
    $ppic=$_FILES["profilepic"]["name"];
	$tmpname1=$_FILES["profilepic"]["tmp_name"];

	$fullname1=$email."-".$ppic;

    if($btn=="SAVE")
    {
	$query="insert into sprofile values('$name' , '$surname' , '$mob', '$add', '$email', '$qualify', '$country', '$state', '$fullname1')";
    
    mysqli_query($dbcon,$query);
    move_uploaded_file($tmpname1,"uploads/".$fullname1);
   
	//fires the query in database/table
	$msg=mysqli_error($dbcon);
	if($msg=="")
    {
        echo "<script type='text/javascript'>
        alert('PROFILE CREATED SUCESFULLY');
        window.location='student-dashboard.php';
        </script>";
    }
	else
        echo "$msg";
		echo "INVALID ID AND PASSWORD";  
    }

?>
