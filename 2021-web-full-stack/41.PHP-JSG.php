<!--.php=HTML+JS+CSS3+PHP lang code
.jsp=                +java code
.js=                 +java script
.aps=                +c#.Net
-->

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <title>Document</title>
</head>

<body>

    <hr>

    <?php
       $x=13;
       $y=12;
       $z=$x+$y;
    
    echo "hello programmers...".$z."<br>";
    echo "<h3><marquee> x=$x y=$y  sum=$z</marquee>";
    echo "<script>alert('bale bale');</script>"
    ?>

    <?php
        if($y<=$x)
            echo "real";
    else 
        echo "java";
        ?>
        
        <hr>
        date:
        <select>
            <option value="none">select</option>
            <?php
            for($i=1;$i<=31;$i++)
            {
                echo "<option value='$i'>$i</option>";
            }
            ?>
        </select>
        <hr>
        <hr>
	Date:
	<select>
		<option value="none">Select</option>
		<?php
			for($i=1;$i<=31;$i++)
			{
		?>
			<option value='<?php echo $i;?>'> <?php echo $i;?>  </option>
		<?php
				}
		 ?>
	</select>
	
	<?php
	
	doHi(2,3);
	function doHi($x,$y)
	{
		echo "<h2>x+y=".($x+$y)."</h2>";
	}
	
	?>
        
</body>

</html>
