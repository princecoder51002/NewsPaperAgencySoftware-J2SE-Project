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

    <script src="javascript/bootstrap.bundle.min.js"></script>

    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css">

    <title>Hello, world!</title>

    <style>

    </style>

    <script>
        function nospaces(t) {
            if (t.value.match(/\s/g)) {
                t.value = t.value.replace(/\s/g, '');
            }
        }
        //------------------------------
        $(document).ready(function() {
            //-----------------



            //-------------------

            $(".fa").mousedown(function() {

                $(this).removeClass("fa fa-eye-slash").addClass("fa fa-eye");
                $("#password").prop("type", "text");
            });

            $(".fa").mouseup(function() {
                $(this).removeClass("fa fa-eye").addClass("fa fa-eye-slash");
                $("#password").attr("type", "password");
            });

            //-------------------

            $(".fa").mousedown(function() {

                $(this).removeClass("fa fa-eye-slash").addClass("fa fa-eye");
                $("#logpwd").prop("type", "text");
            });

            $(".fa").mouseup(function() {
                $(this).removeClass("fa fa-eye").addClass("fa fa-eye-slash");
                $("#logpwd").attr("type", "password");
            });

            //-----------------------

            $(document).ajaxStart(function() {

                $("#chakkar").css("display", "inline");
            });
            $(document).ajaxStop(function() {

                $("#chakkar").css("display", "none");
            });

            //-----------------------

            $("#sign").click(function() {
                var qstring = $("#frmsignup").serialize();

                var uid = document.getElementById("email").value;
                var uid1 = document.getElementById("password").value;
                var uid2 = document.getElementById("mobile").value;
                var uid3 = document.getElementById("category").value;

                if (uid == "") {
                    alert("Enter User Id");
                } else if (uid1 == "") {
                    alert("please fill password");
                } else if (uid2 == "") {
                    alert("please enter mobile number");
                } else if (uid3 == "") {
                    alert("please select category");
                }
                //----------without serialization

                /*var uid=$("#email").val();
                var pwd=$("#password").val();
                
                var qstring="uid="+uid
                */
                else {
                    var url = "profile-db.php?" + qstring;
                    $.get(url, function(response) {
                        $("#reg").html(response);

                    });
                }
            });
            //---------------
            $("#email").blur(function() {



                //$.get(url,call-back-function);
                var uid = $("#email").val();

                var url = "ajax-profile-db.php?uidy=" + uid; // ? is used for where

                $.get(url, function(responsex) {
                    $("#emailHelp").html(responsex); //string format
                });

            });

            //----------------------


            $("#logi").click(function() {
                var email1 = $("#log").val();
                var pass1 = $("#logpwd").val();

                var url = "json-db.php?email1=" + email1 + "&pass1=" + pass1;

                $.get(url, function(msg) {
                    if (msg.trim() == "INVALID")
                        $("#lo").html("<font color='red'>INVALID ID OR PASSWORD</font>");
                    else
                    if (msg.trim() == "PROVIDER")
                        location.href="dash-provider.php";
                    else
                        location.href = "dash-needy.php";

                });
            });

        });

    </script>

    <script>
        $(document).ready(function() {
            $("#email").blur(function() {
                var uid = $(this).val();
                var regExp = /^\w+@[a-zA-Z_]+?\.[a-zA-Z]{2,3}$/;

                if (regExp.test(uid) == false) {
                    alert("Invalid email ID")
                }
            });

            //------------------------------------

            $("#mobile").blur(function() {
                var mob = $(this).val();
                if (mob.length < 10 || mob.length > 10) {
                    alert("contact number must contain 10 digits")
                }

            });
            
            //--------------------
            
            $("#forgot").click(function(){
                var email= $("#log").val();
//                alert($("#loginuid").val());
                var url="forget-sms.php?email1="+email;
//                alert(url);
                
                 $.get(url, function(response) {
                     alert(response);
                 });
                

            });
        });

    </script>

    <style>
        #chakkar {
            display: none;
        }

    </style>
</head>

<body>

    <!-- nav bar -->



    <nav class="navbar navbar-expand-lg navbar-dark bg-dark">
        <div class="container-fluid">
            <a class="navbar-brand" href="#">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<img src="pics/b10c1261f8e21d722801762f426754d3.png" alt="" width="45" height="40" style="border-radius:50%;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font size="5" class="mt-2"><i><b></b>QuickMed.com</i></font></a>
            <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
                <span class="navbar-toggler-icon"></span>
            </button>
            <div class="collapse navbar-collapse justify-content-end" id="navbarSupportedContent">
                <ul class="navbar-nav">
                    <i class="fa fa-home" aria-hidden="true" style="color:white;margin-top:13px;"></i>
                    <li class="nav-item">
                        <a class="nav-link active" aria-current="page" href="#services">HOME</a>
                    </li>
                    <label for="">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</label>
                    <i class="fa fa-handshake-o" aria-hidden="true" style="color:white;margin-top:13px;"></i>
                    <li class="nav-item">
                        <a class="nav-link" href="#develop">DEVELOPED BY</a>
                    </li>
                    <label for="">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</label>
                    <i class="fa fa-map-marker" aria-hidden="true" style="color:white;margin-top:13px;"></i>
                    <li class="nav-item">
                        <a class="nav-link" href="#reach">REACH US</a>
                    </li>
                    <label for="">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</label>
                    <li class="nav-item">
                        <button type="button" class="btn btn-warning" data-bs-toggle="modal" data-bs-target="#signupWin"><i class="fa fa-user-plus" aria-hidden="true"></i>&nbsp;&nbsp;SIGNUP</button>
                    </li>
                    <label for="">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</label>
                    <li class="nav-item">
                        <button type="button" class="btn btn-warning" data-bs-toggle="modal" data-bs-target="#login"><i class="fa fa-sign-in" aria-hidden="true"></i>&nbsp;&nbsp;LOGIN</button>
                    </li>
                </ul>
            </div>
        </div>
    </nav>



    <!------------------display1---------------->

    <div class="container">
        <div class="row mt-5">
            <div class="col-md-6 mt-5">

                <font size="9">Making Health
                    Better Together
                </font><br>
                we change the world when we simply meet the needs of another bcz as a dedicated health care worker you have gone above and beyond to serve the suffering individuals and give them a new life.

            </div>
            <div class="col-md-6 d-flex justify-content-center">
                <img src="pics/istockphoto-887354516-612x612.jpg" alt="" width="280" height="280" class="rounded-circle">
            </div>
        </div>

        <!----------------display2------------->

        <div class="row mt-5">

            <div class="col-md-6 d-flex justify-content-center">
                <img src="pics/yoga-meditating-sunrise-woman-mindfulness-meditation-beach-girl-back-view-nature-scene-74149792.jpg" alt="" width="280" height="280" class="rounded-circle">
            </div>

            <div class="col-md-6 mt-5">
                <font size="9">Red Line On The Strip Of Medicine
                </font><br>
                Medicines such as antibiotics have a red verticle line on their packs to indicate that these should be consumed only on doctors advice.Always complete the full course as prescribed by the doctor.

            </div>

        </div>

        <!-----------display3--------------->

        <div class="row mt-5">
            <div class="col-md-6 mt-5">

                <font size="9">Covid 19 Precautions And Symptoms
                </font><br>
                Avoid close contact with someone who is sick.Limit Social gatherings and time spent in crouded places.Cough and sneeze in your bent elbow-not your hands!!!!!!!!!!!!!

            </div>
            <div class="col-md-6 d-flex justify-content-center">
                <img src="pics/GettyImages-1209373304_1350.jpg" alt="" width="280" height="280" class="rounded-circle">
            </div>
        </div>

        <!---------------carousel---------->
        <div class="row justify-content-center">
            <div class="col-md-12">

                <div id="carouselExampleDark" class="carousel carousel-dark slide" data-bs-ride="carousel">
                    <div class="carousel-indicators">
                        <button type="button" data-bs-target="#carouselExampleDark" data-bs-slide-to="0" class="active" aria-current="true" aria-label="Slide 1"></button>
                        <button type="button" data-bs-target="#carouselExampleDark" data-bs-slide-to="1" aria-label="Slide 2"></button>
                        <button type="button" data-bs-target="#carouselExampleDark" data-bs-slide-to="2" aria-label="Slide 3"></button>
                    </div>
                    <div class="carousel-inner">
                        <div class="carousel-item active" data-bs-interval="10000">
                            <img src="pics/team-group-doctors-nurses-medicine-healthcare-concept-43916218.jpg" class="d-block w-100" alt="..." height="400">
                            <div class="carousel-caption d-none d-md-block">

                            </div>
                        </div>
                        <div class="carousel-item" data-bs-interval="2000">
                            <img src="pics/popi.jpg" class="d-block w-100" alt="..." height="400">
                            <div class="carousel-caption d-none d-md-block">

                            </div>
                        </div>
                        <div class="carousel-item">
                            <img src="pics/popiki.jpg" class="d-block w-100" alt="..." height="400">
                            <div class="carousel-caption d-none d-md-block">

                            </div>
                        </div>
                    </div>
                    <button class="carousel-control-prev" type="button" data-bs-target="#carouselExampleDark" data-bs-slide="prev">
                        <span class="carousel-control-prev-icon" aria-hidden="true"></span>
                        <span class="visually-hidden">Previous</span>
                    </button>
                    <button class="carousel-control-next" type="button" data-bs-target="#carouselExampleDark" data-bs-slide="next">
                        <span class="carousel-control-next-icon" aria-hidden="true"></span>
                        <span class="visually-hidden">Next</span>
                    </button>
                </div>
            </div>
        </div>
        <div class="row justify-content-center bg-dark mt-5" style="border-radius:100px;">
            <div class="col-md-3" id="services">
                <label for="">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</label>
                <font size="5" color="white"><i><b>OUR SERVICES</b></i></font>
            </div>
        </div>

        <!---------cards------------------->
        <div class="row justify-content-center mt-5">
            <div class="col-md-3">
                <div class="card text-black-50 bg-light mb-3 shadow-lg p-3 bg-white rounded" style="max-width: 18rem;">
                    <img src="pics/flickr-marco-verch.jpg" class="card-img-top rounded-circle mt-3" alt="..." width="50" height="250">
                    <div class="card-body">
                        <h5 class="card-title">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;GET MEDICINES</h5>
                        <p class="card-text">A non profit organization that provides online information to thos who cannot afford medicine or healthcare costs so that they can get medicines easily</p>
                    </div>
                </div>
            </div>

            <div class="col-md-3">
                <div class="card text-black-50 bg-light mb-3 shadow-lg p-3 bg-white rounded" style="max-width: 18rem;">
                    <img src="pics/paapi.jpg" class="card-img-top rounded-circle mt-3" alt="..." width="50" height="250">
                    <div class="card-body">
                        <h5 class="card-title">&nbsp;&nbsp;&nbsp;DONATE MEDICINES</h5>
                        <p class="card-text">Donations should benefit the recipient and meet the needs of the users and patient and it will lead to best usage of drugs/medicines also. <br><br></p>
                    </div>
                </div>
            </div>

            <div class="col-md-3">
                <div class="card text-black-50 bg-light mb-3 shadow-lg p-3 bg-white rounded" style="max-width: 18rem;">
                    <img src="pics/images%20(9).jfif" class="card-img-top rounded-circle mt-3" alt="..." width="200" height="250">
                    <div class="card-body">
                        <h5 class="card-title">&nbsp;&nbsp;&nbsp;HELPING PLATFORM</h5>
                        <p class="card-text">it is an helping platform for those who need medicines and who have extra meds so this platform provides a service for providers as well as needy. <br><br></p>
                    </div>
                </div>
            </div>


        </div>

        <div class="row justify-content-center bg-dark mt-4" style="border-radius:100px;">
            <div class="col-md-3" id="develop">

                <font size="5" color="white"><i><b>ABOUT DEVELOPERS</b></i></font>
            </div>
        </div>


        <div class="row justify-content-center mt-5">
            <div class="col-md-3">
                <div class="card text-black-50 bg-light mb-3 shadow-lg p-3 bg-white rounded" style="max-width: 18rem;">
                    <img src="pics/IMG_20200830_193338.jpg" class="card-img-top rounded-circle mt-3" alt="..." width="50" height="250">
                    <div class="card-body">
                        <h5 class="card-title">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;DEVELOPED BY</h5>
                        <p class="card-text">
                            Having knowledge about C Language concepts and Data Structure and algorithms in c , Object Oriented Programming Language(OOPs) , Full Stack Web Develepment Project (QuickMed.com)
                            <b> Contact: </b>
                            Email:-wadhwacorporations51002@gmail.com<br>
                            Contact:- +91 8360515094
                        </p>
                    </div>
                </div>
            </div>

            <div class="col-md-3">
                <div class="card text-black-50 bg-light mb-3 shadow-lg p-3 bg-white rounded" style="max-width: 18rem;">
                    <img src="pics/1616050227635.jpg" class="card-img-top rounded-circle mt-3" alt="..." width="50" height="250">
                    <div class="card-body">
                        <h5 class="card-title">&nbsp;&nbsp;UNDER GUIDANCE OF</h5>
                        <p class="card-text">A brilliant coder with
                            20 Years of experience in Training &amp; Development. Founder of realJavaOnline.com and also the author of book <b>"</b>Real Java<b>"</b>.<br><br>
                            <b> Contact: </b><br>
                            Email :- bcebti@gmail.com<br>
                            Contact :- +91 98722-46056 <br><br><br></p>
                    </div>
                </div>
            </div>

        </div>

        <div class="row justify-content-center bg-dark" style="border-radius:100px;">
            <div class="col-md-3" id="reach">
                <label for="">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</label>
                <font size="5" color="white"><i><b>REACH US</b></i></font>
            </div>
        </div>

        <div class="row mt-4 justify-content-center">
            <div class="col-md-5">
                <iframe src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d6894.558551866924!2d74.9296119752726!3d30.229111477261924!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x391732ed8d1b537b%3A0xe9cbdc14fcd934e8!2sVishal%20Nagar%2C%20Bathinda%2C%20Punjab%20151001!5e0!3m2!1sen!2sin!4v1616012203198!5m2!1sen!2sin" width="500" height="350" style="border:0;" allowfullscreen="" loading="lazy"></iframe>
            </div>
        </div>

    </div>

    <div class="mt-3" style="width:100%">
        <div class="col-md-12">
            <nav class="navbar navbar-light bg-dark">
                <div class="container-fluid justify-content-center">
                    <span class="navbar-brand mb-0 h1 text-white">COPYRIGHT RESERVED <i class="fa fa-copyright" aria-hidden="true"></i></span>
                </div>
            </nav>
        </div>
    </div>

    <br>
    <!-- modal -->

    <div class="modal fade" id="signupWin" tabindex="-1" aria-labelledby="exampleModalLabel" aria-hidden="true">
        <div class="modal-dialog">
            <div class="modal-content">
                <div class="modal-header bg-danger text-white">
                    <h5 class="modal-title" id="exampleModalLabel">WELCOME</h5>
                    <button type="button" class="btn-close" data-bs-dismiss="modal" aria-label="Close"></button>
                </div>
                <div class="modal-body">
                    <form id="frmsignup">
                        <div class="mb-3">
                            <i class="fa fa-envelope" aria-hidden="true"></i>
                            <label for="exampleInputEmail1" class="form-label">Email address
                                <img src="pics/wait2.gif" id="chakkar" alt="" width="40" height="40"></label>

                            <input type="email" onkeyup="nospaces(this)" required name="email" class="form-control" id="email" aria-describedby="emailHelp" placeholder="Eg:123@gmail.com" required>
                            <div id="emailHelp" class="form-text">We'll never share your email with anyone else.</div>
                        </div>
                        <div class="mb-3">
                            <i class="fa fa-lock" aria-hidden="true"></i>
                            <label for="exampleInputPassword1" class="form-label">Password</label>
                            <input type="password" class="form-control" id="password" required name="password">
                            <i class="fa fa-eye-slash" aria-hidden="true" style="float:right;"></i>
                        </div>
                        <div class="mb-3">
                            <i class="fa fa-mobile" aria-hidden="true"></i>
                            <label for="exampleInputPassword1" class="form-label">MOBILE</label>
                            <input type="text" class="form-control" id="mobile" name="mobile" onkeypress="return (event.charCode >= 48 && event.charCode <= 57)" maxlength="10">
                        </div>
                        <div class="mb-3">
                            <i class="fa fa-sign-language" aria-hidden="true"></i>
                            <label for="exampleInputPassword1" class="form-label">CATEGORY</label><br>
                            <select name="cat" id="category" class="form-control">
                                <option></option>
                                <option value="PROVIDER">PROVIDER</option>
                                <option value="NEEDY">NEEDY</option>
                            </select>
                        </div>
                        <div class="modal-footer justify-content-center">
                            <input type="button" id="sign" value="SIGNUP" class="btn btn-dark">
                        </div>
                        <div class="modal-footer justify-content-center">
                            <span id="reg">*</span>
                        </div>

                    </form>
                </div>

            </div>
        </div>
    </div>
    <div class="modal fade" id="login" tabindex="-1" aria-labelledby="exampleModalLabel" aria-hidden="true">
        <div class="modal-dialog">
            <div class="modal-content">
                <div class="modal-header bg-danger text-white">
                    <h5 class="modal-title" id="exampleModalLabel">WELCOME</h5>
                    <button type="button" class="btn-close" data-bs-dismiss="modal" aria-label="Close"></button>
                </div>
                <div class="modal-body">
                    <form action="json-db.php">
                        <div class="mb-3">
                            <i class="fa fa-envelope" aria-hidden="true"></i>
                            <label for="exampleInputEmail1" class="form-label">Email address</label>
                            <input type="email" class="form-control" id="log" required aria-describedby="emailHelp" placeholder="eg:123@gmail.com">
                        </div>
                        <div class="mb-3">
                            <i class="fa fa-lock" aria-hidden="true"></i>
                            <label for="exampleInputPassword1" class="form-label">Password</label>
                            <input type="password" class="form-control" required id="logpwd">
                            <i class="fa fa-eye-slash" aria-hidden="true" style="float:right;"></i>
                        </div>
                    </form>
                </div>
                <div class="modal-footer justify-content-center">
                    <input id="logi" type="button" value="LOGIN" class="btn btn-dark">
                    <span id="lo">*</span>
                </div>
                <div class="form-text" style="cursor:pointer;color:#5DADE2; margin-left:20px; margin-bottom:20px;" name="forgot" id="forgot">Forgot Password?</div>
            </div>
        </div>
    </div>
</body>

</html>
