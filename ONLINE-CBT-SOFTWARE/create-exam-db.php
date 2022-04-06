<?php
    include_once("connection.php");

    $btn=$_POST["btn"];
    $id=$_POST["id"];
	$question=trim($_POST['ques']);
	$answer=$_POST["answer"];
    $marks=$_POST["marks"];

    if($btn=="SAVE")
    {
	$query="insert into questionpaper(id,ques,ans,marks) values('$id' , '$question' , '$answer', '$marks')";
    
    mysqli_query($dbcon,$query);
	//fires the query in database/table
	$msg=mysqli_error($dbcon);
	if($msg=="")
    {
        echo "<script type='text/javascript'>
        alert('QUESTION SUCCESSFULLY UPLOADED');
        window.location='create-exam.php';
        </script>";
    }
	else
        echo $msg;
		echo "INVALID ID AND PASSWORD";  
    }

?>
