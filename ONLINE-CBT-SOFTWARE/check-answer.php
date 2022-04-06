<?php

include_once("connection.php");

$question=$_GET["question"];
$answer=$_GET["answer"];
$query="select * from questionpaper where ques='$question' and ans='$answer'";

$table=mysqli_query($dbcon,$query);
$num=mysqli_num_rows($table);

if($num==0)
    echo "INVALID";
else 
{
     echo "VALID";  
}
?>
