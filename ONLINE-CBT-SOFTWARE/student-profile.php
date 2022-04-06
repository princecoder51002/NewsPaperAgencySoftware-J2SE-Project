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
            background: rgb(99, 39, 120)
        }

        .form-control:focus {
            box-shadow: none;
            border-color: #BA68C8
        }

        .profile-button {
            background: rgb(99, 39, 120);
            box-shadow: none;
            border: none
        }

        .profile-button:hover {
            background: #682773
        }

        .profile-button:focus {
            background: #682773;
            box-shadow: none
        }

        .profile-button:active {
            background: #682773;
            box-shadow: none
        }

        .back:hover {
            color: #682773;
            cursor: pointer
        }

        .labels {
            font-size: 11px
        }

        .add-experience:hover {
            background: #BA68C8;
            color: #fff;
            cursor: pointer;
            border: solid 1px #BA68C8
        }

    </style>

    <script>
        function showpreview(file, strId) {

            if (file.files && file.files[0]) {
                var reader = new FileReader();
                reader.onload = function(e) {
                    $(strId).prop('src', e.target.result);
                }
                reader.readAsDataURL(file.files[0]);
            }
        }

        //--------------------------------------
        $(document).ready(function() {
            $(".upload-button").on('click', function() {
                $("#profilepic").click();
            });
        });

    </script>

</head>

<body>
    <div class="container rounded bg-white mt-5 mb-5">
        <form name="frmsave" method="post" id="frmsave" enctype="multipart/form-data" action="student-profile-db.php">
            <div class="row">
                <div class="col-md-3 border-right mt-5">
                    <div class="d-flex flex-column align-items-center text-center p-3 py-5 mt-5"><img class="rounded-circle mt-5" src="images/depositphotos_179308454-stock-illustration-unknown-person-silhouette-glasses-profile.jpg" width="200" id="prev" height="250"><i class="fa fa-user-plus fa-3x upload-button" style="margin-left:100px; color:black; cursor:pointer;"></i></div>
                    <div class="d-flex">
                        <div class="btn btn-mdb-color btn-rounded float-left">
                            <input type="file" name="profilepic" id="profilepic" onchange="showpreview(this,prev);" style="display:none;">
                        </div>
                    </div>
                </div>

                <div class="col-md-5 border-right">
                    <div class="p-3 py-5">
                        <div class="d-flex justify-content-between align-items-center mb-3">
                            <font class="text-right" size="7">Profile Settings</font>
                        </div>
                    </div>
                    <div class="row">
                        <div class="col-md-6"><label class="labels">Name</label><input type="text" class="form-control" placeholder="first name" value="" name="name"></div>
                        <div class="col-md-6"><label class="labels">Surname</label><input type="text" class="form-control" value="" placeholder="surname" name="surname"></div>
                    </div>
                    <div class="row mt-3">
                        <div class="col-md-12"><label class="labels">PhoneNumber</label><input type="text" class="form-control" placeholder="enter phone number" value="" name="phonenumber"></div>
                        <div class="col-md-12"><label class="labels">Address</label><input type="text" class="form-control" placeholder="enter address" value="" name="address"></div>
                        <div class="col-md-12"><label class="labels">Email ID</label><input type="text" class="form-control" placeholder="enter email id" value='<?php echo $_SESSION["active_user"];?>' readonly name="emailid"></div>
                        <div class="col-md-12"><label class="labels">Education/Qualification</label><input type="text" class="form-control" placeholder="education" value="" name="qualification"></div>
                    </div>
                    <div class="row mt-3">
                        <div class="col-md-6"><label class="labels">Country</label><input type="text" class="form-control" placeholder="country" value="" name="country"></div>
                        <div class="col-md-6"><label class="labels">State/Region</label><input type="text" class="form-control" value="" placeholder="state" name="state"></div>
                    </div>
                    <div class="mt-5 text-center"><button class="btn btn-primary profile-button" type="submit" value="SAVE" name="btn">Save Profile</button></div>
                    <br><br>

                </div>
            </div>
        </form>
    </div>
</body>

</html>
