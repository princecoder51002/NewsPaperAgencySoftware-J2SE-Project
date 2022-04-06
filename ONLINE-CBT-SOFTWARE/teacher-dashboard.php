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

    <title>teacher-Dashboard.com</title>

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
            location.href = "teacher-profile.php";
        });

        //---------------------

        $("#createexam").click(function() {
            var uid3 = document.getElementById("ques").value;

            var url = "exam-modal.php?answer=" + uid3;

            $.get(url, function(msg) {
                if (msg.trim() == "INVALID")
                    $("#lo").html("<font color='red'>ID/NO. ALREADY EXISTS</font>");
                else if (msg.trim() == "VALID")
                    location.href = "create-exam.php";
            });
        });

        //---------------------------

        $("#manager").click(function() {
            location.href = "manage-records.php";
        });

    });

</script>

<body>

    <div class="container py-5">
        <div class="row text-center text-white">
            <div class="col-lg-8 mx-auto">
                <h1 class="display-4"><b>Welcome To CBT World As A Teacher</b></h1>
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

                <div class="desc">Teachers can create their profile here for better experience.</div>&nbsp;&nbsp;&nbsp;
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
                <h2>PREPARE EXAM</h2>

                <div class="desc">you can prepare exam or assignments here for the stuents, so that they can do regular studies.</div>&nbsp;&nbsp;&nbsp;
                <button class="btn btn-outline-danger" data-bs-toggle="modal" data-bs-target="#exam">MAKE&nbsp;&nbsp;<i class="fa fa-plus-circle" aria-hidden="true"></i></button>
            </div>

        </div>



    </div>

    <!---------------------------->
    <div class="card mt-5">
        <div class="img-avatar">
        </div>
        <div class="card-text">
            <div class="portada">
            </div>
            <div class="title-total">
                <h2>MANAGE RECORDS</h2>

                <div class="desc">Here , you can manage students records so that u will get regular updates about students.</div>&nbsp;&nbsp;&nbsp;
                <button class="btn btn-outline-danger" id="manager">SHOW&nbsp;&nbsp;<i class="fa fa-info-circle" aria-hidden="true"></i></button>
            </div>

        </div>



    </div>

    <!------------------------------>

    <!-- Vertically centered modal -->
    <div class="modal btn-dark" tabindex="-1" id="exam">
        <div class="modal-dialog modal-dialog-centered">
            <div class="modal-content">
                <div class="modal-header">
                    <h3 class="modal-title">
                        <font color="black">Create Your Exam</font>
                    </h3>
                    <button type="button" class="btn-close" data-bs-dismiss="modal" aria-label="Close"></button>
                </div>
                <div class="modal-body">
                    <h4>
                        <font color="black">Exam No./ID</font>
                    </h4>
                    <input type="text" name="ques" id="ques" class="form-control">
                    <span id="lo">*</span>

                </div>
                <div class="modal-footer">
                    <button type="button" class="btn btn-warning" data-bs-dismiss="modal">Close</button>
                    <button type="button" class="btn btn-warning" id="createexam" name="GO">Let's GO&nbsp;&nbsp;<i class="fa fa-paper-plane" aria-hidden="true"></i></button>
                </div>
            </div>
        </div>
    </div>




</body>

</html>
