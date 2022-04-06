<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>Document</title>
</head>
<body>




<?php


include_once("mysql-connection.php");
$btn=$_POST["btn"];
$uid=$_POST["txtUid"];
	$name=$_POST["namee"];
	$mob=$_POST["contact"];
    $add=$_POST["address"];
    $city=$_POST["shehar"];
    $adhar=$_POST["adhar"];
    $name1=$_FILES["adharpic"]["name"];
	$tmpname1=$_FILES["adharpic"]["tmp_name"];

	$fullname1=$uid."-".$name1;

    $name2=$_FILES["profilepic"]["name"];
	$tmpname2=$_FILES["profilepic"]["tmp_name"];

	$fullname2=$uid."-".$name2;

    if($btn=="SAVE")
    {
	$query="insert into profiles values('$uid', '$name', '$mob', '$add', '$city', '$fullname2', '$fullname1', '$adhar')";
    
    mysqli_query($dbcon,$query);
    move_uploaded_file($tmpname1,"uploads/".$fullname1);
    move_uploaded_file($tmpname2,"uploads/".$fullname2);

	
   
	//fires the query in database/table
	$msg=mysqli_error($dbcon);
	if($msg=="")
    {
		
        echo "<script type='text/javascript'>
        alert('SUCCESSFULLY REGISTERED');
        window.location='dash-provider.php';
        </script>";
    }
	else
		echo "INVALID ID AND PASSWORD";  
    }
    
   
    if($btn=="UPDATE") 
    {
        
        $hdn=$_POST["hdn"];
        $hdn1=$_POST["hdn1"];
		
		if($name1=="")
		{
			$name1=$hdn;
		}
		else
        {
			$name1=$uid."-".$name1;
            move_uploaded_file($tmpname1,"uploads/".$name1);
        }
        
        if($name2=="")
		{
			$name2=$hdn1;
		}
		else
        {
			$name2=$uid."-".$name2;
            move_uploaded_file($tmpname2,"uploads/".$name2);
        }
        $query="update profiles set name='$name', contact='$mob', address='$add', city='$city', picpath='$name2', idpath='$name1', idnumber='$adhar' where uid='$uid'";

	mysqli_query($dbcon,$query);
	//fires the query in database/table
	$msg=mysqli_error($dbcon);
	if($msg=="")
	{
		$count=mysqli_affected_rows($dbcon);//1 or zero possibility-primary key
		if($count==1)
			 echo "<script type='text/javascript'>
        alert('SUCCESSFULLY UPDATED');
        window.location='dash-provider.php';
        </script>";
		else
			echo "Invalid Id";
	}
    }  
?>
    </body>
</html>
