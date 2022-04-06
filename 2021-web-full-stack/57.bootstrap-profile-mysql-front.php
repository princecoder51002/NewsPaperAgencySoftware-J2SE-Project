<html lang="en">

<head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="css/bootstrap.css">
    <!-- Optional JavaScript; choose one of the two! -->

    <script src="javascript/jquery-1.8.2.min.js"></script>
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

        function nospaces(t) {
            if (t.value.match(/\s/g)) {
                t.value = t.value.replace(/\s/g, '');
            }
        }

        $(document).ready(function() {
            //-----------------
            
            $(document).ajaxStart(function() {
                
                $("#chakkar").css("display", "inline");
            });
            $(document).ajaxStop(function() {
                
                $("#chakkar").css("display", "none");
            });

            //-----------------------

            $("#txtUid").blur(function() {
               
                
                
                //$.get(url,call-back-function);
                var uid = $("#txtUid").val();

                var url = "60.ajax-chk-uid.php?uidy=" + uid; // ? is used for where

                $.get(url, function(responsex) {
                    $("#errUid").html(responsex); //string format
                });
                
            });
            //----------------------

            $("#btnFetch").click(function() {
                //$.get(url,call-back-function);
                var uid = $("#txtUid").val();

                var url = "61.JSON-FETCH-RECORD.php?uidy=" + uid;

                $.getJSON(url, function(jsonAryFeeling) {
                    //alert(jsonAryFeeling);
                    alert(JSON.stringify(jsonAryFeeling));
                    $("#txtPwd").val(jsonAryFeeling[0].pwd);
                    $("#prev").prop("src", "uploads/" + jsonAryFeeling[0].picpath);

                });
            });
        });

    </script>

    <style>
        label {
            padding: 5px 0px 5px;
        }

        #chakkar {
            display: none;
        }

    </style>
    <script src="javascript/bootstrap.bundle.min.js"></script>

    <title>Hello, world!</title>
</head>

<body>
    <div class="container">
        <div class="row bg-danger">
            <div class="col-md-12">
                <h3>
                    <center>User Profile </center>
                </h3>
            </div>
        </div>
        <form action="58.bootstrap-profile-mysql-process.php" method="post" enctype="multipart/form-data">
            <div class="row ">
                <div class="col-md-4 form-group">
                    <label for="">User ID</label>
                    <img id="chakkar" src="pics/wait2.gif" height="40" width="40">
                    <input type="text" class="form-control" name="txtUid" onkeyup="nospaces(this)" id="txtUid">
                    <span id="errUid">*</span>
                </div>
                <div class="col-md-2 form-group">
                    <label for=""> &nbsp;</label>

                    <input type="button" class="form-control btn btn-primary" id="btnFetch" value="Fetch">
                </div>
                <div class="col-md-6 form-group">
                    <label for="">Password</label>
                    <input type="password" class="form-control" name="txtPwd" onkeyup="nospaces(this)" id="txtPwd">
                    <span id="errPwd">*</span>

                </div>

            </div>
            <div class="row ">
                <div class="col-md-6 form-group">
                    <label for="">Profile Pic</label>
                    <input type="file" onchange="showpreview(this,prev)" class="form-control" name="ppic">
                    <span id="errUid">*</span>
                </div>
                <div class="col-md-6 form-group">
                    <img src="pics/foreigner-model-shoot-500x500.jpg" width="100" height="100" id="prev">

                </div>

            </div>
            <div class="row">
                <div class="col-md-6 offset-md-4">
                    <input type="submit" class="btn btn-danger" value="Signup Here" name="btn">
                    <input type="submit" class="btn btn-danger" value="Delete" name="btn">
                    <input type="submit" class="btn btn-danger" value="Update" name="btn">
                    <input type="submit" class="btn btn-danger" value="ShowAll" formaction="59.bootstrap-profile-fetch-all.php" name="btn">

                </div>
            </div>
        </form>

    </div>
</body>

</html>
