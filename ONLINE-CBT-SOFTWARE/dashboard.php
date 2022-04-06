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
        body {
            background: #e8cbc0;
            background: -webkit-linear-gradient(to right, #e8cbc0, #636fa4);
            background: linear-gradient(to right, #e8cbc0, #636fa4);
            min-height: 100vh;
        }

        .social-link {
            width: 30px;
            height: 30px;
            border: 1px solid #ddd;
            display: flex;
            align-items: center;
            justify-content: center;
            color: #666;
            border-radius: 50%;
            transition: all 0.3s;
            font-size: 0.9rem;
        }

        .social-link:hover,
        .social-link:focus {
            background: #ddd;
            text-decoration: none;
            color: #555;
        }

        .spinner-wrapper {
            position: fixed;
            top: 0;
            left: 0;
            right: 0;
            bottom: 0;
            background-color: #ff6347;
            z-index: 999999;
        }

        .spinner {
            position: absolute;
            top: 48%;
            left: 48%;
        }

    </style>

    <script>
        $(document).ready(function() {
            $("#student").click(function() {
                location.href = "student-dashboard.php";
            });

            //----------------------------------

            $("#teacher").click(function() {
                location.href = "teacher-dashboard.php";
            });

            //------------------------

            preloaderFadeOutTime = 10;

            function hidePreloader() {
                var preloader = $('.spinner-wrapper');
                preloader.fadeOut(preloaderFadeOutTime);
            }
            hidePreloader();
        });

    </script>

</head>

<body>
    <div class="spinner-wrapper">
        <div class="spinner"></div>
    </div>


    <!-- For demo purpose -->
    <div class="container py-5">

        <div class="row text-center text-white">
            <div class="col-lg-8 mx-auto">
                <h1 class="display-4"><b>Welcome To CBT World</b></h1>
                <p class="lead mb-0">Here U can experience As a Teacher As well as a student</p>
                <p class="lead mb-0">Developed By: <span><i><b>Prince Wadhwa</b></i></span></p>
                <a href="logout.php"><button type="submit" class="btn btn-warning" style="margin-top:10px;"><i class="fa fa-sign-out" aria-hidden="true"></i>LOGOUT</button></a>
            </div>
        </div>
    </div><!-- End -->


    <div class="container">
        <div class="row justify-content-center">

            <!-- Team item -->
            <div class="col-md-4 mb-5 justify-content-center">
                <div class="bg-white rounded shadow-sm py-5 px-4">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<img src="images/little-students-kids-reading-books-classroom-animated-characters-k-video-animation-192055565.jpg" alt="" width="350" class="img-fluid  mb-3 img-thumbnail shadow-sm">
                    <h2 class="mb-0 btn-light">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<i>STUDENT SECTION</i></h2> <br> <span class="small text-uppercase text-muted">here students u can create your profile and give your class test with ur classmates along with chatting facility for helping each other</span> <br> <br>
                    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<button class="btn btn-warning" id="student">GET STARTED&nbsp;&nbsp;<i class="fa fa-paper-plane" aria-hidden="true"></i></button>

                </div>
            </div><!-- End -->

            <!-- Team item -->
            <div class="col-md-4 mb-5 justify-content-center">
                <div class="bg-white rounded shadow-sm py-5 px-4">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<img src="images/unnamed.jpg" alt="" width="295" class="img-fluid mb-3 img-thumbnail shadow-sm" style="margin-top:7px;">
                    <h2 class="mb-0">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<i>TEACHER SECTION</i></h2> <br> <span class="small text-uppercase text-muted">here teachers can make assignments or can prepare tests for their students to check their performances and can get their regular updates</span> <br> <br>

                    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<button class="btn btn-warning" id="teacher">GET STARTED&nbsp;&nbsp;<i class="fa fa-paper-plane" aria-hidden="true"></i></button>

                </div>
            </div><!-- End -->
            <!-- Team item -->

            <!-- Team item -->
        </div>
    </div>

</body>

</html>
