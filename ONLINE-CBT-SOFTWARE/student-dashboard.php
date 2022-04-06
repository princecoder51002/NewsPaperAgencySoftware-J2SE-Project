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

    <script src="js/jquery-1.8.2.min.js"></script>

    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css">

    <script src="js/bootstrap.bundle.min.js"></script>

    <title>Dashboard.com</title>

    <link rel="shortcut icon" href="images/unnamed.jpg">

    <style>
        @import url("https://fonts.googleapis.com/css?family=Roboto:400,400i,700");

        body {
            font-family: Roboto, sans-serif;
            margin: 0;
            height: 100vh;
            display: grid;
            align-items: center;
            justify-items: center;
            background-image: linear-gradient(to top, #96fbc4 0%, #f9f586 100%);
        }

        .card {
            background: #fff;
            border-radius: 4px;
            box-shadow: 0px 14px 80px rgba(34, 35, 58, 0.5);
            max-width: 400px;
            display: flex;
            flex-direction: row;
            border-radius: 25px;
            position: relative;
        }

        .card h2 {
            margin: 0;
            padding: 0 1rem;
        }

        .card .title {
            padding: 1rem;
            text-align: right;
            color: green;
            font-weight: bold;
            font-size: 12px;
        }

        .card .desc {
            padding: 0.5rem 1rem;
            font-size: 12px;
        }

        .card .actions {
            display: grid;
            grid-template-columns: repeat(3, 1fr);
            align-items: center;
            padding: 0.5rem 1rem;
        }

        .card svg {
            width: 85px;
            height: 85px;
            margin: 0 auto;
        }

        .img-avatar {
            width: 80px;
            height: 80px;
            position: absolute;
            border-radius: 50%;
            border: 6px solid white;
            background-image: linear-gradient(-60deg, #16a085 0%, #f4d03f 100%);
            top: 15px;
            left: 85px;
        }

        .card-text {
            display: grid;
            grid-template-columns: 1fr 2fr;
        }

        .title-total {
            padding: 2.5em 1.5em 1.5em 1.5em;
        }

        path {
            fill: white;
        }

        .img-portada {
            width: 100%;
        }

        .portada {
            width: 100%;
            height: 100%;
            border-top-left-radius: 20px;
            border-bottom-left-radius: 20px;
            background-image: url(images/pngtree-business-people-avatar-icon-user-profile-free-vector-png-image_4815126.jpg);
            background-position: bottom center;
            background-size: cover;
        }

        button {
            border: none;
            background: none;
            font-size: 24px;
            color: #8bc34a;
            cursor: pointer;
            transition: .5s;

            &:hover {
                color: #4CAF50;
                transform: rotate(22deg)
            }
        }

    </style>

</head>

<script>
    $(document).ready(function() {
        $("#profile").click(function() {
            location.href = "student-profile.php";
        });

        //---------------------

        $("#center").click(function() {
            window.open("exam-center.php");
        });
        
        //-------------
        
        $("#cllo").click(function() {
                $("#chat-login").modal("hide");
            });
        
        //-----------------------
        
        $("#chatstart").click(function() {
            var email1 = $("#emailid3").val();
            var pass1 = $("#pwd9").val();
            var url = "login-db.php?email1=" + email1 + "&pass1=" + pass1;

            $.get(url, function(msg) {
                if (msg.trim() == "INVALID")
                    $("#lo").html("<font color='red'>INVALID ID OR PASSWORD</font>");
                else if (msg.trim() == "VALID")
                    location.href = "chat-app.php";
            });
        });
    });

</script>

<body>

    <div class="container py-5">
        <div class="row text-center text-white">
            <div class="col-lg-8 mx-auto">
                <h1 class="display-4"><b>Welcome To CBT World As A Student</b></h1>
                <a href="logout.php"><button type="submit" class="btn btn-warning" style="margin-top:10px;"><i class="fa fa-sign-out" aria-hidden="true"></i>LOGOUT</button></a>
            </div>
        </div>
    </div><!-- End -->

    <div class="card">
        <div class="img-avatar">
        </div>
        <div class="card-text">
            <div class="portada">

            </div>
            <div class="title-total">
                <h2>CREATE PROFILE</h2>

                <div class="desc">Students can create their profile here for better experience.</div>&nbsp;&nbsp;&nbsp;
                <button class="btn btn-outline-danger" id="profile">CREATE&nbsp;&nbsp;<i class="fa fa-plus" aria-hidden="true"></i></button>
            </div>

        </div>



    </div>

    <!---------------->

    <div class="card mt-5">
        <div class="img-avatar">
        </div>
        <div class="card-text">
            <div class="portada">
                <img src="images/Tips-Online-Exams-1110x380.jpg" alt="" width="132" height="270" style="border-top-left-radius: 20px;
  border-bottom-left-radius: 20px;">
            </div>
            <div class="title-total">
                <h2>EXAM SECTION</h2>

                <div class="desc">Here u can solve question papers or assignments provided by your teacher and can discuss with your freinds too.
                </div>&nbsp;&nbsp;&nbsp;
                <button class="btn btn-outline-danger" id="center">OPEN EXAM PAPER &nbsp;&nbsp;<i class="fa fa-plus" aria-hidden="true"></i></button>
            </div>

        </div>
    </div>
    
    <!--------------------->
    
    <div class="card mt-5">
        <div class="img-avatar">
        </div>
        <div class="card-text">
            <div class="portada">
                <img src="images/mobile-messaging@2x.png" alt="" width="132" height="270" style="border-top-left-radius: 20px;
  border-bottom-left-radius: 20px;">
            </div>
            <div class="title-total">
                <h2>CHAT SECTION</h2>

                <div class="desc">Here students can chat with their freinds so they can solve problems together and help each other.
                </div>&nbsp;&nbsp;&nbsp;
                <button class="btn btn-outline-danger" id="chu" data-bs-toggle="modal"data-bs-target="#chat-login">START CHAT &nbsp;&nbsp;<i class="fa fa-location-arrow" aria-hidden="true"></i>
</button>
            </div>

        </div>
    </div>


<!-------------------------->

<div class="modal" tabindex="-1" role="dialog" id="chat-login">
        <div class="modal-dialog" role="document">
            <div class="modal-content"  style="border: 8px solid black;">
                <button class="btn btn-light" id="cllo"><span aria-hidden="true"><i class="fa fa-times fa-2x" aria-hidden="true" style="float:right;"></i></span></button>
                <div>
                    <h5 class="modal-title">USER ID</h5>
                    <input type="text" class="form-control" id="emailid3" value="<?php echo $_SESSION['active_user'] ?>" readonly>
                </div>
                <div>
                    <h5 class="modal-title">PASSWORD(with which you logged in!!)</h5>
                    <input type="text" class="form-control" id="pwd9">
                </div>
                <div class="modal-footer">
                    <button class="btn btn-dark" type="button" id="chatstart">CONTINUE TO CHAT</button>
                    <span id="lo">*</span>
                </div>
            </div>
        </div>
    </div>

</body>

</html>
