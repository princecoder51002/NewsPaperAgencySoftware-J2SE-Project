<?php

include_once("connection.php");
$uidy=$_GET["uidy"];
$query="select * from users where id='$uidy'";

$table=mysqli_query($dbcon,$query); // 1 or 0 possibility
$count=mysqli_num_rows($table);
if($count==0)
    echo "<font color='green'>Available</font>";
else 
    echo "<font color='red'>Aready occupied</font>";
?>
