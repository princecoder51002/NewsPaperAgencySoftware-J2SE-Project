<?php
include_once("56.mysql-connection.php");

$btn=$_POST["btn"];
if($btn=="Delete")
{
	$uid=$_POST["txtUid"];
	$query="delete from profile where uid='$uid'";
	mysqli_query($dbcon,$query);
	$count=mysqli_affected_rows($dbcon);
	if($count==0)
	{
		echo "Invalid id";
	}
	else
		echo $count." Records Deleted";
	
}
else
if($btn=="Signup Here")
{
	$uid=$_POST["txtUid"];
	$pwd=$_POST["txtPwd"];
	$name=$_FILES["ppic"]["name"];
	$tmp_name=$_FILES["ppic"]["tmp_name"];

	$name=$uid."-".$name;


	$query="insert into profile values('$uid','$pwd',current_date(),'$name')";

	mysqli_query($dbcon,$query);
	//fires the query in database/table

	move_uploaded_file($tmp_name,"uploads/".$name);

	$msg=mysqli_error($dbcon);
	if($msg=="")
		echo "Records Saved...";
	else
		echo $msg;

}
else
	if($btn=="Update")
	{
	$uid=$_POST["txtUid"];
	$pwd=$_POST["txtPwd"];
	$name=$_FILES["ppic"]["name"];
	$tmp_name=$_FILES["ppic"]["tmp_name"];

	$name=$uid."-".$name;

	$query="update profile set pwd='$pwd', name='$name' where uid='$uid'";

	mysqli_query($dbcon,$query);
	//fires the query in database/table
	move_uploaded_file($tmp_name,"uploads/".$name);


	$msg=mysqli_error($dbcon);
	if($msg=="")
	{
		$count=mysqli_affected_rows($dbcon);//1 or zero possibility-primary key
		if($count==1)
			echo $count ." Records Updated";
		else
			echo "Invalid Id";
			
	}
	else
		echo $msg;
	}
?>