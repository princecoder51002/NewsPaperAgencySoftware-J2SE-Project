
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

    <script src="javascript/bootstrap.bundle.min.js"></script>

    <title>Hello, world!</title>

    <style>
        body {
            background-color: #f0f0f0;
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

    </script>
</head>

<body>

    <div class="container">
        <div class="row">
            <div class="col-md-12">
                <h1>
                    <center>
                        <font><i>DETAILS OF MEDICINE BY PROVIDER</i></font>
                    </center>
                </h1>
            </div>
        </div>
        <form class="md-form" name="frmmed" method="post" id="frmmed" enctype="multipart/form-data" action="med-post-db.php">

            <div class="row mt-4 justify-content-center">
                <div class="col-md-7">
                   
                    <img src="pics/digital-brain-design-brainwave-random-abstract-hexagon-tech-background-k-futuristic-173343668.jpg" width="700" height="300" alt="">
                    
                </div>
            </div>



            <div class="row mt-2 justify-content-center">
                <div class="col-md-9 form-group">
                    <label for="">
                        <font>USER ID</font>
                    </label>
                    <input type="email" class="form-control" name="txtUid" onkeyup="nospaces(this)" id="txtUid" placeholder="eg:123@gmail.com" required value='<?php echo $_SESSION["active_user"];?>' readonly>
                </div>

            </div>
            <div class="row mt-3 justify-content-center">
                <div class="col-md-3 form-group">
                    <label for="">
                        <font>MEDICINE NAME</font>
                    </label>
                    <input type="text" class="form-control" name="medname" id="medname" required placeholder="eg:crocin">
                </div>

                <div class="col-md-3 form-group ">
                    <label for="">
                        <font>COMPANY</font>
                    </label>
                    <input type="text" class="form-control" name="company" id="company" required placeholder="eg:radiator">
                </div>

                <div class="col-md-3 form-group">
                    <label for="">
                        <font>DATE 0F EXPIRY</font>
                    </label>
                    <input type="text" class="form-control" name="doe" id="doe" required placeholder="eg:31-03-2021">
                </div>

            </div>

            <div class="row mt-3 justify-content-center">
                <div class="col-md-3 form-group">
                    <label for="">
                        <font>PACKAGING TYPE</font>
                    </label>
                    <input type="text" class="form-control" name="ptype" id="ptype" placeholder="eg:bottles">
                </div>

                <div class="col-md-3 form-group">
                    <label for="">
                        <font>QUANTITY</font>
                    </label>
                    <input type="text" class="form-control" name="quant" id="quant" required>
                </div>

                <div class="col-md-3 form-group">
                    <label for="">
                        <font>POTENCY/POWER</font>
                    </label>
                    <input type="text" class="form-control" name="potency" id="potency" placeholder="eg:500mg" required>
                </div>

            </div>

            <div class="row mt-3 justify-content-center">



                <div class="col-md-3 form-group">
                    <label for="">
                        <font>FRONT SIDE OF MEDICINE</font>
                    </label>
                    <input type="file" class="form-control" name="fpic" id="fpic" onchange="showpreview(this,prev1);">
                </div>
                <div class="col-md-3 form-group">
                    <img src="pics/how-to-cut-your-medicine-bills.webp" width="100" height="100" alt="" id="prev1">
                </div>
            </div>

            <div class="row mt-4 justify-content-center">

                <div class="col-md-3 form-group">
                    <label for="">
                        <font>BACK SIDE OF MEDICINE</font>
                    </label>
                    <input type="file" class="form-control" name="bpic" id="bpic" onchange="showpreview(this,prev2);">
                </div>
                <div class="col-md-3 form-group">
                    <img src="pics/Chilmark-Research-Precision-Medicine.png" width="100" height="100" alt="" id="prev2">
                </div>
            </div>

            <div class="row mt-5 justify-content-center">
                <div class="col-md-2">
                    <input type="submit" class="btn btn-warning" name="btn" value="AVAIL TO PUBLIC" id="save">

                </div>
            </div>
            <br>
            <br>
            

        </form>

    </div>










</body>

</html>
