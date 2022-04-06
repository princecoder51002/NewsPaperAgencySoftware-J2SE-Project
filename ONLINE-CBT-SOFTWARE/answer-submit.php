<?php

include_once("connection.php");

$rid=$_GET["ridx"];
$examid=$_GET["examid"];
$uid=$_GET["uid"];
$answer=$_GET["answer"];
$check=$_GET["check"];
$query1="select * from questionpaper where rid='$rid'";
$query2="update participants set score=score+$check where userid='$uid'";
$query3="update participants set score=score+0 where userid='$uid'";
$query4="insert into participants (examid,userid) values('$examid','$uid')";

$table=mysqli_query($dbcon,$query1);
$num=mysqli_num_rows($table);

if($num==0)
    echo "INVALID";

else
{

 while($row=mysqli_fetch_array($table))
    {
        if($row["ans"]==$answer)
        {
            mysqli_query($dbcon,$query4);
            mysqli_query($dbcon,$query2);
            echo "deleted";
        }
        else
        {
            mysqli_query($dbcon,$query4);
            mysqli_query($dbcon,$query3);
            echo "deleted";
        }
    }
}

?>
