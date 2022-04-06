<?php
$a=$_POST["mob"];
$b=$_POST["book"];
$c=$_POST["laptop"];

if(isset($_POST["tot"])==true)
    $btn=$_POST["tot"];
else if(isset($_POST["dis"])==true)
    $btn=$_POST["dis"];
else if(isset($_POST["net"])==true)
    $btn=$_POST["net"];

if($btn=="Total")
{
    $d=$a+$b+$c;
echo "Total=$d";
}
else if($btn=="Discount"){
    $e=($a+$b+$c)/10;
   echo "Discount=$e";
}
else if($btn=="Net"){
$Net=($a+$b+$c)-($a+$b+$c)/10;
    echo "Net= $Net";
}

?>