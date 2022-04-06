<?php

include_once("mysql-connection.php");
    $rid=100;
    $btn=$_POST["btn"];
    $uid=$_POST["txtUid"];
	$medname=$_POST["medname"];
	$company=$_POST["company"];
    $doe=$_POST["doe"];
    $ptype=$_POST["ptype"];
    $quant=$_POST["quant"];
    $potency=$_POST["potency"];
    $name1=$_FILES["fpic"]["name"];
	$tmpname1=$_FILES["fpic"]["tmp_name"];

	$fullname1=$uid."-".$name1;
    $docity="";

    $name2=$_FILES["bpic"]["name"];
    $tmpname2=$_FILES["bpic"]["tmp_name"];

    $fullname2=$uid."-".$name2;

    $query1="select city from profiles where uid='$uid'";
    $table=mysqli_query($dbcon,$query1);

    
    while($row=mysqli_fetch_array($table))
    {
        $docity= $row["city"];
    }
        
    
    if($btn=="AVAIL TO PUBLIC")
    {
	$query="insert into medicines (uid,medname,company,expirydate,city,packtype,quantity,power,pic1,pic2) values( '$uid', '$medname', '$company', '$doe','$docity',  '$ptype', '$quant', '$potency', '$fullname1', '$fullname2')";
    
    mysqli_query($dbcon,$query);
    move_uploaded_file($tmpname1,"uploads/".$fullname1);
    move_uploaded_file($tmpname2,"uploads/".$fullname2);

	
   
	//fires the query in database/table
	$msg=mysqli_error($dbcon);
	if($msg=="")
    {
		
        echo "<script type='text/javascript'>
        alert('SERVICE AVAILED');
        window.location='dash-provider.php';
        </script>";
    }
	else
		echo "INVALID ID AND PASSWORD";  
    }

?>