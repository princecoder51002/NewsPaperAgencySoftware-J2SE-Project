<?php
session_start();
if(isset($_SESSION["active_user"])==false) {
    header("location:index.php");
}
?>


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
        
        $(".fa").mousedown(function() {

                $(this).removeClass("fa fa-eye-slash").addClass("fa fa-eye");
                $("#npwd").prop("type", "text");
            });

            $(".fa").mouseup(function() {
                $(this).removeClass("fa fa-eye").addClass("fa fa-eye-slash");
                $("#npwd").attr("type", "password");
            });
        
        //---------------------------
        $("#profile").click(function(){
            location.href="profile-editor.php";
        });
        
        
        //----------------------------
        
        $("#update").click(function() {
                
                var qstring = $("#frmupdate").serialize();
                var url = "change-password.php?"+qstring;
                $.get(url, function(response) {
                    $("#lo").html(response);
                });
            });
        
        //------------------
        
        $("#medicine").click(function(){
            location.href="provider-med-post.php";
        });
        
        //------------------------
        
        $("#manager").click(function(){
            location.href="med-manager.php";
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
            <div  class="row mt-5 justify-content-center" style="margin-left:150px;">
                
                <div class="col-md-5">
                    
                    <div class="card shadow-lg " style="width: 18rem; border-radius:40px; border:3px solid black;">
  <img src="pics/man-profile-avatar-user-social-icon-man-profile-png-512_512.png" class="card-img-top" alt="...">
  <div class="card-body">
    <button type="submit" class="btn btn-outline-dark" style="margin-left:80px; border-radius:20px; border: 2px dotted black;" id="profile">PROFILE</button>
  </div>
</div>
                </div>
                
<!--********************************************-->
               
               <div class="col-md-5 ">
                    
                    <div class="card shadow-lg " style="width: 18rem; border-radius:40px; border:3px solid black;">
  <img src="pics/apple-settings-1-493162.webp" class="card-img-top" alt="...">
  <div class="card-body">
    <button type="button" class="btn btn-outline-dark" style="margin-left:80px; border-radius:20px; border: 2px dotted black;" data-bs-toggle="modal" data-bs-target="#iupdate">SETTINGS</button>
  </div>
</div>
                </div>
                
                <!--**********************************-->
                
                <div class="col-md-5 mt-4">
                    
                    <div class="card shadow-lg " style="width: 18rem; border-radius:40px; border:3px solid black;">
  <img src="pics/unnamed.png" alt="..." width="200" height="275" style="margin-left:40px; margin-top:5px;">
  <div class="card-body">
    <button type="submit" class="btn btn-outline-dark" style="margin-left:60px; border-radius:20px; border: 2px dotted black;" id="medicine">AVAIL MEDICINES</button>
  </div>
</div>
                </div>
                
                <div class="col-md-5 mt-4">
                    
                    <div class="card shadow-lg" style="width: 18rem; border-radius:40px; border:3px solid black;">
  <img src="pics/48135420-hospital-manager-presenting-medicine-sales-and-financial-prediction-charts-with-like-gesture.jpg" class="card-img-top" alt="..." width="150" height="250" style="margin-left:0px; margin-top:30px;">
  <div class="card-body">
    <button type="submit" class="btn btn-outline-dark" style="margin-left:40px; border-radius:20px; border: 2px dotted black;" id="manager">MEDICINE MANAGER</button>
  </div>
</div>
                </div>
                
            </div>
        <!--**********************************************-->
        
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