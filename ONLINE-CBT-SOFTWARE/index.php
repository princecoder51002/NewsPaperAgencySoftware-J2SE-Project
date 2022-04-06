<!DOCTYPE html>
<html class="no-js" lang="en">

<head>

    <!--- basic page needs
    ================================================== -->
    <meta charset="utf-8">
    <title>Online CBT Software.com</title>
    <meta name="description" content="">
    <meta name="author" content="">

    <!-- mobile specific metas
    ================================================== -->
    <meta name="viewport" content="width=device-width, initial-scale=1">

    <!-- CSS
    ================================================== -->
    <link rel="stylesheet" href="css/bootstrap.css">
    <link rel="stylesheet" href="css/styles.css">
    <link rel="stylesheet" href="css/vendor.css">

    <!-- Optional JavaScript; choose one of the two! -->


    <script src="js/bootstrap.bundle.min.js"></script>
    <script src="js/jquery-1.8.2.min.js"></script>



    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css">

    <!-- script
    ================================================== -->
    <script src="js/modernizr.js"></script>
    <script defer src="js/fontawesome/all.min.js"></script>

    <!-- favicons
    ================================================== -->
    <link rel="apple-touch-icon" sizes="180x180" href="apple-touch-icon.png">
    <link rel="icon" type="image/png" sizes="32x32" href="favicon-32x32.png">
    <link rel="icon" type="image/png" sizes="16x16" href="favicon-16x16.png">
    <link rel="manifest" href="site.webmanifest">
    <link rel="shortcut icon" href="images/cbt.png">

</head>

<script>
    function nospaces(t) {
        if (t.value.match(/\s/g)) {
            t.value = t.value.replace(/\s/g, '');
        }
    }

    //-----------------------------

    $(document).ready(function() {
        //------------------------------------------------

        $("#sign").click(function() {
            var qstring = $("#frmsignup").serialize();

            var uid = document.getElementById("emaildo").value;
            var uid1 = document.getElementById("pass").value;
            var uid2 = document.getElementById("mobli").value;
            var uid3 = document.getElementById("user").value;

            if (uid == "") {
                alert("Enter User Id");
            } else if (uid1 == "") {
                alert("please fill password");
            } else if (uid2 == "") {
                alert("please enter mobile number");
            } else if (uid3 == "") {
                alert("please enter user name");
            } else {
                var url = "signup-db.php?" + qstring;
                $.get(url, function(response) {
                    $("#reg").html(response);

                });
            }
        });

        //----------------------------------------------------

        $("#dologin").click(function() {
            var email1 = $("#email90").val();
            var pass1 = $("#pwd90").val();

            var url = "login-db.php?email1=" + email1 + "&pass1=" + pass1;

            $.get(url, function(msg) {
                if (msg.trim() == "INVALID")
                    $("#lo").html("<font color='red'>INVALID ID OR PASSWORD</font>");
                else if (msg.trim() == "VALID")
                    location.href = "dashboard.php";
            });
        });
        //-------------------------------------------------

        $("#emaildo").blur(function() {



            //$.get(url,call-back-function);
            var uid = $("#emaildo").val();

            var url = "ajax-profile-db.php?uidy=" + uid; // ? is used for where

            $.get(url, function(responsex) {
                $("#check1").html(responsex); //string format
            });

        });

    });

</script>

<body id="top">


    <!-- preloader
    ================================================== -->
    <div id="preloader">
        <div id="loader"></div>
    </div>


    <!-- header
    ================================================== -->


    <!--
    <div class="row justify-content-center">
        <div class="col-md-12">
            <center><font><i><b>ONLINE</b></i></font></center>
        </div>
    </div>
-->
    <header class="s-header">
        <div class="row">

            <!--
            <div class="s-header__logo">
                <a href="index.html">
                    <img src="images/logo.svg" alt="Homepage">
                </a>
            </div>
-->
            <nav class="s-header__nav">
                <ul>
                    <li class="current"><a class="smoothscroll" href="#home"><i class="fa fa-home" aria-hidden="true" style="color:white;margin-top:13px;"></i>&nbsp;&nbsp;Home</a></li>
                    <li><a class="smoothscroll" href="#services"><i class="fa fa-info-circle" aria-hidden="true" style="color:white;margin-top:13px;"></i>&nbsp;&nbsp;Our Services</a></li>
                    <li><a class="smoothscroll" href="#portfolio"><i class="fa fa-handshake-o" aria-hidden="true" style="color:white;margin-top:13px;"></i>&nbsp;&nbsp;Developed By</a></li>
                    <li><a class="smoothscroll" href="#contact"><i class="fa fa-mobile" aria-hidden="true" style="color:white;margin-top:13px;"></i>&nbsp;&nbsp;Contact Us</a>
                    <li><a class="smoothscroll" href="#map"><i class="fa fa-map-marker" aria-hidden="true" style="color:white;margin-top:13px;"></i>&nbsp;&nbsp;Reach Us</a>

                    </li>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                    <li><a class="smoothscroll"><button class="btn btn-warning" style="border-radius:70px; height:60px; margin-top:8px;" data-bs-toggle="modal" data-bs-target="#SignupWin"><i class="fa fa-user-plus" aria-hidden="true"></i>&nbsp;&nbsp;SIGNUP</button></a></li>
                    <li><a class="smoothscroll"><button class="btn btn-warning" id="log" style="border-radius:70px; height:60px; margin-top:8px;" data-bs-toggle="modal" data-bs-target="#login"><i class="fa fa-power-off" aria-hidden="true"></i>&nbsp;&nbsp;LOGIN</button></a></li>
                </ul>
            </nav>

            <a class="s-header__menu-toggle" href="#0" title="Menu">
                <span class="s-header__menu-icon"></span>
            </a>

        </div> <!-- end row -->
    </header> <!-- end s-header -->


    <!-- home
    ================================================== -->
    <section id="home" class="s-home target-section" data-parallax="scroll" data-image-src="images/hero-bg.jpg" data-natural-width="3000" data-natural-height="2000">

        <div class="s-home__content">

            <div class="s-home__slider">

                <div class="s-home__slide s-home__slide--1">
                    <div class="row">
                        <div class="column large-12 s-home__slide-text">
                            <h2>
                                Features of <span>Best</span>
                                Assessment &amp; Online Exam Software
                            </h2>
                            <p>
                                It is basically a software for students as well as
                                teachers who came here and perform regular tasks.
                            </p>
                        </div>
                    </div>
                </div> <!-- end s-home__slide -->

                <div class="s-home__slide s-home__slide--2">
                    <div class="row">
                        <div class="column large-12 s-home__slider-text">
                            <h2>
                                See some of our works or
                                get in
                                touch to discuss how we could help you.
                            </h2>
                            <p>
                                It is best platform for web based examination conduction so as to help for the welfare of people as it is a covid-19 pandemic problem
                            </p>
                        </div>
                    </div>
                </div> <!-- end s-home__slide -->

            </div> <!-- end s-home__slider -->

        </div> <!-- end s-home__content -->

        <div class="s-home__nav-arrows">
            <div class="s-home__arrow-prev">
                <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24">
                    <path d="M12.707 17.293L8.414 13H18v-2H8.414l4.293-4.293-1.414-1.414L4.586 12l6.707 6.707z" />
                </svg>
            </div>
            <div class="s-home__arrow-next">
                <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24">
                    <path d="M11.293 17.293l1.414 1.414L19.414 12l-6.707-6.707-1.414 1.414L15.586 11H6v2h9.586z" />
                </svg>
            </div>
        </div> <!-- end s-home__nav-arrows -->

        <div class="s-home__line"></div>

    </section> <!-- end s-home -->


    <!-- services
    ================================================== -->
    <section id="services" class="s-services target-section s-dark">

        <div class="row section-head">
            <div class="column large-3 medium-12" data-aos="fade-up">
                <h2>Our Services</h2>
                <p class="desc">Our list of awesome services.</p>
            </div>

            <div class="column large-8 medium-12 align-x-right" data-aos="fade-up">
                <p class="lead">
                    This platform provides us to learn and work with some faboulous technologies like this is a web based application for computer based tests and we provide u a platform for as a student and as well as a teacher for the competetion creaters and seekers as well , Hope u guys enjoy our services!!!!
                </p>
            </div>
        </div> <!-- end section-head -->

        <div class="row block-large-1-3 block-medium-1-2 block-tab-full services-list">

            <div class="column services-item" data-aos="fade-up">
                <h5>Appraisal Made Easy</h5>
                <p>
                    The CBT Appraisal Model worksheet is a transdiagnostic formulation tool. The centrality of appraisals underpins all of the disorder-specific cognitive behavioral models and this format can be helpfully used to explore the contribution of meaning to the client’s experience.
                </p>
            </div> <!-- end services-item -->

            <div class="column services-item" data-aos="fade-up">
                <h5>Paper Wastage Minimized</h5>
                <p>
                    In today’s hi-tech world it is a shame that more companies don’t use technology throughout their operations to avoid waste and improve productivity.

                    With a huge emphasis on going green and reducing the amount of paperwork, it would seem as though companies would be falling all over each other trying to beat the competition on the latest innovations.
                </p>
            </div> <!-- end services-item -->

            <div class="column services-item" data-aos="fade-up">
                <h5>Tailor-made &amp; interactive interace</h5>
                <p>
                    In the industrial design field of human-computer interaction, a user interface (UI) is the space where interactions between humans and machines occur. ... This generally means that the operator needs to provide minimal input to achieve the desired output, and also that the machine minimizes undesired outputs to the user.
                </p>
            </div> <!-- end services-item -->

            <div class="column services-item" data-aos="fade-up">
                <h5>Preperation Time Reduced</h5>
                <p>
                    The rise of emerging technologies has led to a significant increase in Ed-tech platforms across the globe with millions of students registering to use these. In the Indian context, however, what Gradeup found through extensive research is that, the usage and consumption of the content on these platforms still remains limited owing to gaps in existing learning mechanism &amp; aspirant’s needs. This indicated the need for greater engagement to motivate students with continuous, mentored learning.
                </p>
            </div> <!-- end services-item -->

            <div class="column services-item" data-aos="fade-up">
                <h5>Eradication of fraud and deception</h5>
                <p>
                    Two-step verification methods for credit and debit card transactions offer another layer of security to detect and prevent payment card fraud. It also reduces the institution’s exposure to chargebacks, for example if a stolen card is used by a third party and the card owner requests a chargeback (refund).
                </p>
            </div> <!-- end services-item -->

            <div class="column services-item" data-aos="fade-up">
                <h5>Learning is enhanced</h5>
                <p>
                    Today, learning is perceived as a challenge that must be faced simultaneously on numerous fronts. Indeed, learning is no longer confined to the classroom
                </p>
            </div> <!-- end services-item -->

        </div> <!-- end services-list -->

    </section> <!-- end s-services -->


    <!-- portfolio
    ================================================== -->
    <section id="portfolio" class="s-portfolio target-section">

        <div class="row section-head">
            <div class="column large-3 medium-12" data-aos="fade-up">
                <h2>Developed By</h2>
                <a href="https://quickymedilab.000webhostapp.com/" target="_blank">
                    <p class="desc">Check out our latest projects.</p>
                </a>
            </div>

            <div class="column large-8 medium-12 align-x-right" data-aos="fade-up">
                <p class="lead">
                    As I am currently persuing in Bsc.Non.Medical(Computer Application) 2nd year student and I made this software that is online web based computer based examination software having chatting system also
                </p>
            </div>
        </div> <!-- end section-head -->

        <div class="row block-large-1-3 block-medium-1-2 block-mob-full folio-list">

            <div class="column folio-item" data-aos="fade-up" style="margin:auto;">
                <a href="#modal-01" class="folio-item__thumb" data-lity><label for="">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</label>
                    <img src="images/IMG_20200830_193338.jpg" style="margin-left:30px;" alt="">
                    <span class="folio-item__text">
                        Having knowledge about C Language <br> concept and Data Structure and algorithms <br> in c , Object Oriented Programming <br> Language(OOPs) , Full Stack Web Develepment <br> Project (QuickMed.com) <br>
                        <b> Contact: </b>
                        Email:-wadhwacorporations51002 <br> @gmail.com<br>
                        Contact:- +91 8360515094
                    </span>
                </a>
            </div> <!-- end folio-item -->

        </div> <!-- end folio-list -->


        <!-- Modal Popup
        =========================================================== -->

        <!-- end modal-06 -->

    </section> <!-- end s-portfolio -->


    <!-- blog
    ================================================== -->


    <!-- about



    <!-- testimonials
    ================================================== -->


    <!-- contact
    ================================================== -->
    <section id="contact" class="s-contact target-section s-dark">

        <div class="row section-head">
            <div class="column large-3 medium-12">
                <h2>Contact Us</h2>
                <p class="desc">Get in touch with us.</p>
            </div>
        </div> <!-- end section-head -->

        <div class="row s-contact__content">

            <div class="column large-7 medium-12">
                <h3 class="display-1">
                    Do you have an idea or an epic project in mind? Talk to us.
                    Let us work together and make something great. Shoot us
                    a message.
                </h3>

                <div class="s-contact__email-us">
                    <a href="mailto:wadhwacorporations51002@gmail.com" class="btn btn--primary h-full-width">Let's Talk</a>
                </div>
            </div>

            <div class="column large-4 medium-12 s-contact__info-blocks">
                <div class="row">
                    <div class="column large-12 medium-6 tab-12">
                        <div class="s-contact__info-block">

                            <span class="s-contact__info-block-icon">
                                <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24">
                                    <path d="M12 14c2.206 0 4-1.794 4-4s-1.794-4-4-4-4 1.794-4 4 1.794 4 4 4zm0-6c1.103 0 2 .897 2 2s-.897 2-2 2-2-.897-2-2 .897-2 2-2z" />
                                    <path d="M11.42 21.814a.998.998 0 001.16 0C12.884 21.599 20.029 16.44 20 10c0-4.411-3.589-8-8-8S4 5.589 4 9.995c-.029 6.445 7.116 11.604 7.42 11.819zM12 4c3.309 0 6 2.691 6 6.005.021 4.438-4.388 8.423-6 9.73-1.611-1.308-6.021-5.294-6-9.735 0-3.309 2.691-6 6-6z" />
                                </svg>
                            </span>

                            <h5>Find us here</h5>
                            <p>
                                #222,vishal nagar , bathinda , punjab pincode:151001
                            </p>
                        </div> <!-- end s-contact__info-block -->
                    </div>

                    <div class="column large-12 medium-6 tab-12">
                        <div class="s-contact__info-block">
                            <span class="s-contact__info-block-icon">
                                <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24">
                                    <path d="M17.707 12.293a.999.999 0 00-1.414 0l-1.594 1.594c-.739-.22-2.118-.72-2.992-1.594s-1.374-2.253-1.594-2.992l1.594-1.594a.999.999 0 000-1.414l-4-4a.999.999 0 00-1.414 0L3.581 5.005c-.38.38-.594.902-.586 1.435.023 1.424.4 6.37 4.298 10.268s8.844 4.274 10.269 4.298h.028c.528 0 1.027-.208 1.405-.586l2.712-2.712a.999.999 0 000-1.414l-4-4.001zm-.127 6.712c-1.248-.021-5.518-.356-8.873-3.712-3.366-3.366-3.692-7.651-3.712-8.874L7 4.414 9.586 7 8.293 8.293a1 1 0 00-.272.912c.024.115.611 2.842 2.271 4.502s4.387 2.247 4.502 2.271a.991.991 0 00.912-.271L17 14.414 19.586 17l-2.006 2.005z" />
                                </svg>
                            </span>

                            <h5>Say hello</h5>
                            <p>
                                hello@prince.com <br>
                                +91 83605-15094 <br>
                                CopyRight Reserved <i class="fa fa-copyright" aria-hidden="true"></i>
                            </p>
                        </div> <!-- end s-contact__info-block -->
                    </div>
                </div> <!-- end row -->
            </div> <!-- end s-contact__info-blocks -->

        </div> <!-- end s-contact__content -->

    </section> <!-- end s-contact -->


    <!-- footer
    ================================================== -->
    <footer class="s-footer">


        <div class="ss-go-top">
            <a class="smoothscroll" title="Back to Top" href="#top">
                <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24">
                    <path d="M6 4h12v2H6zm5 10v6h2v-6h5l-6-6-6 6z" />
                </svg>
            </a>
        </div> <!-- end ss-go-top -->
    </footer>

    <!--------------------------------->

    <div class="row justify-content-center" id="map">
        <div class="col-md-12">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
            <iframe src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d6894.558551866924!2d74.9296119752726!3d30.229111477261924!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x391732ed8d1b537b%3A0xe9cbdc14fcd934e8!2sVishal%20Nagar%2C%20Bathinda%2C%20Punjab%20151001!5e0!3m2!1sen!2sin!4v1616012203198!5m2!1sen!2sin" width="600" height="450" style="border:0; width:500px;" allowfullscreen="" loading="lazy"></iframe>
        </div>
    </div>

    <br>
    <br>
    <br>

    <!---------------------------------------------->

    <div class="modal fade" id="login" tabindex="-1" aria-labelledby="exampleModalLabel" aria-hidden="true">
        <div class="modal-dialog">
            <div class="modal-content">
                <div class="modal-header bg-dark text-white">
                    <font class="modal-title" id="exampleModalLabel" color="white" size="5">WELCOME TO CBT TECH</font>
                    <button type="button" class="btn-close btn-warning" data-bs-dismiss="modal" aria-label="Close"></button>
                </div>
                <div class="modal-body">
                    <form action="json-db.php">
                        <div class="mb-3">
                            <i class="fa fa-envelope" aria-hidden="true"></i>&nbsp;&nbsp;<span>Email Address</span>
                            <input type="email" class="form-control" id="email90" required aria-describedby="emailHelp" placeholder="eg:123@gmail.com" style="height:12px;" name="email1" onkeyup="nospaces(this)">
                        </div>
                        <div class="mb-3">
                            <i class="fa fa-lock" aria-hidden="true"></i>&nbsp;&nbsp;<span>Password</span>
                            <input type="password" class="form-control" required id="pwd90" style="height:12px;" placeholder="password  here!!!" name="pass1">
                        </div>
                    </form>
                </div>
                <div class="modal-footer justify-content-center">
                    <input id="dologin" type="button" value="LOGIN" class="btn btn-dark" style="border-radius:70px; height:60px;">
                    <span id="lo">*</span>
                </div>
                <div class="form-text" style="cursor:pointer;color:#5DADE2; margin-left:20px; margin-bottom:20px;" name="forgot" id="forgot">Forgot Password?</div>
            </div>
        </div>
    </div>

    <!---------------------------------->

    <div class="modal fade" id="SignupWin" tabindex="-1" aria-labelledby="exampleModalLabel" aria-hidden="true">
        <div class="modal-dialog">
            <div class="modal-content">
                <div class="modal-header bg-dark text-white">
                    <font class="modal-title" id="exampleModalLabel" color="white" size="5">WELCOME TO CBT TECH</font>
                    <button type="button" class="btn-close btn-warning" data-bs-dismiss="modal" aria-label="Close"></button>
                </div>
                <div class="modal-body">
                    <form id="frmsignup">

                        <div class="mb-3">
                            <i class="fa fa-id-card" aria-hidden="true"></i>&nbsp;&nbsp;<span>User Name</span>
                            <input type="email" class="form-control" id="user" required aria-describedby="emailHelp" placeholder="eg: prince05102002" style="height:12px;" name="name" onkeyup="nospaces(this)">
                        </div>
                        <div class="mb-3">
                            <i class="fa fa-envelope" aria-hidden="true"></i>&nbsp;&nbsp;<span>Email Address</span>
                            <input type="email" class="form-control" id="emaildo" required aria-describedby="emailHelp" placeholder="eg: 123@gmail.com" style="height:12px;" name="email" onkeyup="nospaces(this);">
                            <span id="check1">*</span>
                        </div>
                        <div class="mb-3">
                            <i class="fa fa-lock" aria-hidden="true"></i>&nbsp;&nbsp;<span>Password</span>
                            <input type="password" class="form-control" required id="pass" style="height:12px;" placeholder="password  here!!!" name="password">
                        </div>

                        <div class="mb-3">
                            <i class="fa fa-mobile" aria-hidden="true" style="margin-top:13px;"></i>&nbsp;&nbsp;<span>Mobile Number</span>
                            <input type="email" class="form-control" id="mobli" required aria-describedby="emailHelp" placeholder="eg:8360515094" style="height:12px;" name="mobile" onkeypress="return (event.charCode >= 48 && event.charCode <= 57)">
                        </div>
                    </form>
                </div>
                <div class="modal-footer justify-content-center">
                    <input id="sign" type="button" value="REGISTER" class="btn btn-dark" style="border-radius:70px; height:60px;">
                    <span id="reg">*</span>
                </div>
            </div>
        </div>
    </div>

    <!-- Java Script
    ================================================== -->
    <script src="js/jquery-3.2.1.min.js"></script>
    <script src="js/plugins.js"></script>
    <script src="js/main.js"></script>

</body>

</html>
