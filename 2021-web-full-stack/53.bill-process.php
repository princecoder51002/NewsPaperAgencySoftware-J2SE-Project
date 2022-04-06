<?php
$units=$_POST["txtunits"];
echo "<center>";
echo "<table border='1'>";
echo "<tr><th>UNITS CONSUMED: ".$units." units</th></tr><br><br>";


$a=($units*5)/10;
$b=($units*5)/5;
$c=($units*5)/20;
$d=$units*5*(0.07);
$bill=0;
$tec=$_POST["tech"];
if($tec=="com")
{
    $bill=$bill+(($units*5)-$a);
    echo "<tr><th>DISCOUNT: ".$a." rs.</th></tr><br><br>";
}
else if($tec=="res")
{
    $bill=$bill+(($units*5)-$b);
    echo "<tr><th>DISCOUNT: ".$b." rs.</th></tr><br><br>";
}

$ary=$_POST["electronics"];

$all="";

for($i=0;$i<count($ary);$i++)
{
    $all=$all.$ary[$i]." , ";
}

echo " <tr><th> USED APPLIANCES:     ";
echo $all."</th></tr><br><br>";

$jameen=$_POST["area"];

if($jameen=="1acr")
{
    $bill=$bill-$c;
    echo "<tr><th>AGRICULTURAL LAND DISCOUNT: ".$c."</th></tr><br><br>";
    echo "<tr><th>TOTAL BIL: ".$bill."</th></tr>";
}
else if($jameen=="2acr")
{
    $bill=$bill-$d;
    echo "<tr><th>AGRICULTURAL LAND DISCOUNT: ".$d."</th></tr><br><br>";
    echo "<tr><th>TOTAL BIL: ".$bill."</th></tr>";
}
else if($jameen=="nacr")
{
    $bill=$bill-$a;
    echo "<tr><th>AGRICULTURAL LAND DISCOUNT: ".$a."</th></tr><br><br>";
    echo "<tr><th>TOTAL BIL: ".$bill."</th></tr>";
}

echo "</table>";
?>