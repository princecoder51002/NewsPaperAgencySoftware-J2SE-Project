<?php
session_start();
if(isset($_SESSION["active_user1"])==false) {
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
            background-color: #f0f0f0;
            background-image: url(images/pngtree-light-green-color-background-image_320965.jpg);
        }

    </style>

<body>

    <form method="post" action="create-exam-db.php">
        <div class="container">

            <div class="row mt-4 justify-content-center text-center">
                <div class="col-md-12">
                    <center>
                        <font size="8"><b><i>COMPUTER BASED TEST</i></b></font>
                        <br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                        <font size="8"><b><i>QUESTION PAPER</i></b></font>
                        <a href="teacher-dashboard.php"><button class="btn btn-danger" type="button" style="float:right;"><i class="fa fa-sign-out" aria-hidden="true"></i>END THIS SESSION</button></a>
                    </center>
                </div>
            </div>
            <div class="row mt-5">
                <div class="col-md-6">
                    <label for="exampleInputEmail1" class="form-label">
                        <font size="5"><i><b>EXAM ID/NO.</b></i></font>
                    </label>
                    <input type="text" class="form-control" aria-describedby="emailHelp" name="id" value='<?php echo $_SESSION["active_user1"];?>' readonly>
                    <div id="emailHelp" class="form-text"></div>
                </div>

            </div>

            <!----------------->

            <div class="row mt-5">
                <div class="col-md-6">
                    <label for="exampleInputEmail1" class="form-label">
                        <font size="5"><i><b>QUESTION:</b></i></font>
                    </label>
                    <textarea cols="150" rows="10" name="ques"></textarea>
                    <div id="emailHelp" class="form-text"></div>
                </div>

            </div>

            <div class="row mt-5">
                <div class="col-md-6">
                    <label for="exampleInputEmail1" class="form-label">
                        <font size="5"><i><b>ANSWER:</b></i></font>
                    </label>
                    <input type="text" class="form-control" aria-describedby="emailHelp" name="answer">
                    <div id="emailHelp" class="form-text"></div>
                </div>

            </div>

            <div class="row mt-5">
                <div class="col-md-6">
                    <label for="exampleInputEmail1" class="form-label">
                        <font size="5"><i><b>MARKS ALLOTED:</b></i></font>
                    </label>
                    <input type="text" class="form-control" aria-describedby="emailHelp" name="marks">
                    <div id="emailHelp" class="form-text"></div>
                </div>

            </div>

            <div class="row mt-3">
                <div class="col-md-6">
                    <button class="btn btn-danger" name="btn" value="SAVE">UPLOAD</button>
                </div>

            </div>


        </div>
        <!---------------------------------------->










    </form>

    <br><br>

</body>
</head>

</html>
