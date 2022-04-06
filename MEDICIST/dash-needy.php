<?php
session_start();
if(isset($_SESSION["active_user"])==false) {
    header("location:index.php");
}
?>
<html lang="en">

<head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="css/bootstrap.css">
    <!-- Optional JavaScript; choose one of the two! -->

    <script src="javascript/jquery-1.8.2.min.js"></script>

    <script src="javascript/bootstrap.bundle.min.js"></script>
    
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css">


    <title>Hello, world!</title>
    
    <style>
    
    
        body{
            background-color: #f0f0f0;
        }
    </style>
    
    <script>
    
    
    $(document).ready(function(){
        $("#needy").click(function(){
            location.href="needy-editor.php";
        });
        
        //-----------------------
        $("#med").click(function(){
            location.href="find-medicine.php";
        });
        
        //------------------------
        
        $("#update").click(function() {
                
                var qstring = $("#frmupdate").serialize();
                var url = "change-password.php?"+qstring;
                $.get(url, function(response) {
                    $("#lo").html(response);
                });
            });
        
    });
    
    </script>
    
   
    </head>
    
    <body>
        <div class="container">
           
            <div class="row mt-4 justify-content-center text-center">
                <div class="col-md-12">
                    <center>
                        <font size="8"><b><i>QUICK MED</i></b></font>
                    </center>
                </div>
                <div class="row justify-content-center">
                <div class="col-md-6">
                   <center>
                    <h1><label type="" readonly value="<?php echo $_SESSION['active_user']?>" style="float:left;">Welcome:<?php echo $_SESSION['active_user']?></label></h1><a href="logout.php"><button type="submit" class="btn btn-warning" style="margin-top:10px;"><i class="fa fa-sign-out" aria-hidden="true"></i>LOGOUT</button></a>
                    </center>
                </div>
                </div>
            </div>
            
            
            <div class="row mt-5 justify-content-center" style="margin-left:50px;">
                
                <div class="col-md-5">
                    
                    <div class="card shadow-lg" style="width: 18rem; border-radius:40px; border:3px solid black;">
  <img src="pics/man-profile-avatar-user-social-icon-man-profile-png-512_512.png" class="card-img-top" alt="...">
  <div class="card-body">
    <button type="submit" class="btn btn-outline-dark" style="margin-left:80px; border-radius:20px; border: 2px dotted black;" id="needy" >PROFILE</button>
  </div>
</div>
                </div>
                
<!--********************************************-->
               
               <div class="col-md-4">
                    
                    <div class="card shadow-lg" style="width: 18rem; border-radius:40px; border:3px solid black;">
  <img src="pics/apple-settings-1-493162.webp" class="card-img-top" alt="...">
  <div class="card-body">
    <button type="button" id="set" class="btn btn-outline-dark" style="margin-left:80px; border-radius:20px; border: 2px dotted black;" data-bs-toggle="modal" data-bs-target="#iupdate">SETTINGS</button>
  </div>
</div>
                </div>
                
                <!--**********************************-->
                
                <div class="col-md-4">
                    
                    <div class="card shadow-lg" style="width: 18rem; border-radius:40px; border:3px solid black;">
  <img src="pics/drugstore-medicine-bottle-pills-medicament-260nw-749714665.jpg" class="card-img-top" alt="..." style="margin-top:30px;" height="250">
  <div class="card-body">
    <button type="submit" class="btn btn-outline-dark" style="margin-left:60px; border-radius:20px; border: 2px dotted black;" id="med">FIND MEDICINE</button>
  </div>
</div>
                </div>
                
            </div>
            
            <!--------------modal-------------->
            
            <div class="modal fade" id="iupdate" tabindex="-1" aria-labelledby="exampleModalLabel" aria-hidden="true">
        <div class="modal-dialog">
            <div class="modal-content">
                <div class="modal-header bg-danger text-white">
                    <h5 class="modal-title" id="exampleModalLabel">CHANGE YOUR PASSWORD HERE</h5>
                    <button type="button" class="btn-close" data-bs-dismiss="modal" aria-label="Close"></button>
                </div>
                <div class="modal-body">
                    <form id="frmupdate">
                        <div class="mb-3">
                           <i class="fa fa-envelope" aria-hidden="true"></i>
                            <label for="exampleInputEmail1" class="form-label">Email address</label>
                            <input type="email" class="form-control" id="checkemail1" required aria-describedby="emailHelp" name="checkemail1" placeholder="eg:123@gmail.com">
                            <div id="emailHelp" class="form-text">We'll never share your email with anyone else.</div>
                        </div>
                        <div class="mb-3">
                           <i class="fa fa-lock" aria-hidden="true"></i>
                            <label for="exampleInputPassword1" class="form-label">Old Password</label>
                            <input type="password" class="form-control" required id="checkpassword1" name="checkpassword1" >
                        </div>
                        <div class="mb-3">
                           <i class="fa fa-unlock-alt" aria-hidden="true"></i>
                            <label for="exampleInputPassword1" class="form-label">New Password</label>
                            <input type="password" class="form-control" required id="npwd" name="npwd">
                            <i class="fa fa-eye-slash" aria-hidden="true" style="float:right;"></i>
                        </div>
                    </form>
                </div>
                <div class="modal-footer justify-content-center">
                    <input id="update" type="button" value="UPDATE NOW" class="btn btn-dark" name="update">
                    <span id="lo">*</span>
                </div>
            </div>
        </div>
    </div>
        </div>
        <br><br>
        
    </body>
</html>