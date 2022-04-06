<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Document</title>
</head>
<body>
   
   <center>
       
       <form action="53.bill-process.php" method="post">
           
           units: <input type="text" name="txtunits">
           <br>
           <br>
           <br>
           <br>
           
           <input type="radio" name="tech" value="com">COMMERCIAL  (10%)
           <input type="radio" name="tech" value="res">RESIDENTIAL  (20%)
           
           <br>
           <br>
           <br>
           <br>
           
           SELECT APPLIANCES:
           <br>
           <br>
           <select name="electronics[]" multiple>
               
               <option value="none" disabled>select</option>
               <option value="FAN">FAN</option>
               <option value="AC">AC</option>
               <option value="COOLER">COOLER</option>
               <option value="HEATER">HEATER</option>
               
           </select>
           
           <br>
           <br>
           <br>
           <br>
           
           
           AREA: 
           <input type="radio" name="area" value="1acr"> 100acres or less
           <input type="radio" name="area" value="2acr"> 200acres or less
           <input type="radio" name="area" value="nacr"> more than 200 acres
           
           <br>
           <br>
           <br>
           <br>
           <br>
           
           
           <input type="submit" value="BILL" style="width:150px; cursor:pointer;">
           
           
       </form>
       
       
       
   </center>
    
</body>
</html>