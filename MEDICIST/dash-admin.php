<!doctype html>
<html lang="en">

<head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="css/bootstrap.css">
    <!-- Optional JavaScript; choose one of the two! -->

    <script src="javascript/jquery-1.8.2.min.js"></script>
    
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css">

    <script src="javascript/bootstrap.bundle.min.js"></script>

    <title>Hello, world!</title>
    
    <style>
        body{
            background-color: #f0f0f0;
        }
    </style>
    
    <script>
    $(document).ready(function(){
        $("#control").click(function(){
            window.open("admin-manager-users.php");
        });
        
        //---------------------------
        
        $("#medicine").click(function(){
            window.open("admin-med-manager.php");
        });
        
        //----------------------------
        
        $("#console").click(function(){
            window.open("admin-provide-manager.php");
        });
    });
     
    </script>
    
    </head>
    <body>
        
        <div class="container">
            
            <div class="row mt-5 justify-content-center">
                
                <div class="col-md-5">
                    
                    <div class="card shadow-lg" style="width: 18rem; border-radius:40px; border:3px solid black;">
  <img src="pics/download%20(2).png" class="card-img-top" alt="..." height="250" style="margin-top:30px; background-size:contain;">
  <div class="card-body">
    <button type="submit" class="btn btn-outline-dark" style="margin-left:40px; border-radius:20px; border: 2px dotted black;" id="control">USERS CONTROLLER</button>
  </div>
</div>
                </div>
                
                <!----------------------->
                
                <div class="col-md-4">
                    
                    <div class="card shadow-lg" style="width: 18rem; border-radius:40px; border:3px solid black;">
  <img src="pics/images%20(3).png" alt="..." height="250" style="margin-top:30px; background-size:contain;">
  <div class="card-body">
    <button type="submit" class="btn btn-outline-dark" style="margin-left:40px; border-radius:20px; border: 2px dotted black;" id="medicine">MEDICINES MANAGER</button>
  </div>
</div>
                </div>
                
                <!-------------------------->
                
                <div class="col-md-4">
                    
                    <div class="card shadow-lg" style="width: 18rem; border-radius:40px; border:3px solid black;">
  <img src="pics/download%20(3).png" class="card-img-top" alt="..." height="250" style="margin-top:30px; background-size:contain;">
  <div class="card-body">
    <button type="submit" class="btn btn-outline-dark" style="margin-left:40px; border-radius:20px; border: 2px dotted black;" id="console">PROVIDERS CONSOLE</button>
  </div>
</div>
                </div>
                
            </div>
        </div>
        
        
        
    </body>
</html>