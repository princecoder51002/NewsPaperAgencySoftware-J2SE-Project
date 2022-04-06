
<?php
session_start();
if(isset($_SESSION["active_user"])==false) {
    header("location:index.php");
}
?>

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
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css">

    <style>
        
         body {
            background-image: url(pics/black-background-with-focus-spot-light_1017-27230.jpg);
            background-attachment: fixed;
            background-size: cover;
        }
        
        i{
            color: white;
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
        
        //---------------------------------
    
        function getCoordintes() {
			var options = {
				enableHighAccuracy: true,
				timeout: 5000,
				maximumAge: 0
			};

			function success(pos) {
				var crd = pos.coords;
				var lat = crd.latitude.toString();
				var lng = crd.longitude.toString();
				var coordinates = [lat, lng];
				console.log(`Latitude: ${lat}, Longitude: ${lng}`);
				getCity(coordinates);
				return;

			}

			function error(err) {
				console.warn(`ERROR(${err.code}): ${err.message}`);
			}

			navigator.geolocation.getCurrentPosition(success, error, options);
		}

		// Step 2: Get city name 
		function getCity(coordinates) {
			var xhr = new XMLHttpRequest();
			var lat = coordinates[0];
			var lng = coordinates[1];

			// Paste your LocationIQ token below. 
			xhr.open('GET', "https://us1.locationiq.com/v1/reverse.php?key=pk.03fe7c91ec5e96e2f0040a170753f494&lat=" + 
				lat + "&lon=" + lng + "&format=json", true);
			xhr.send();
			xhr.onreadystatechange = processRequest;
			xhr.addEventListener("readystatechange", processRequest, false);

			function processRequest(e) {
				if (xhr.readyState == 4 && xhr.status == 200) {
					var response = JSON.parse(xhr.responseText);
                    var city = response.address.state_district;
//					document.write(JSON.stringify(response));
					console.log(response);
//					document.write(city+" <br> "+response.address.state+"<br>  "+response.address.country);
					
					document.getElementById("shehar").value=response.address.state_district;
					document.getElementById("state").value=response.address.state;
					return;
				}
			}
		}
        
        //---------------------------
       
    
   
        
        //-------------------------
        $(document).ready(function(){
            $("#btnFetch").click(function() {
                var uid = $("#txtUid").val();
                var url = "user-profile-json.php?uidy=" + uid;
                $.getJSON(url, function(jsonAryFeeling) {
                    $("#namee").val(jsonAryFeeling[0].name);
                    $("#prev").prop("src", "uploads/" + jsonAryFeeling[0].picpath);
                    $("#prev1").prop("src", "uploads/" + jsonAryFeeling[0].idpath);
                    $("#contact").val(jsonAryFeeling[0].contact);
                    $("#address").val(jsonAryFeeling[0].address);
                    $("#shehar").val(jsonAryFeeling[0].city);
                    $("#adhar").val(jsonAryFeeling[0].idnumber);
                });
            });
        
        //--------------------------------
        
        $(".upload-button").on('click', function() {
       $("#profilepic").click();
    });
            
            //------------------------------
            
        });
    </script>

</head>

<body>

    <div class="container">
        <div class="row">
            <div class="col-md-12">
                <h1>
                    <center><font color="#EAC117"><i>USER PROFILE</i></font></center>
                </h1>
            </div>
        </div>
    
        <form class="md-form" name="frmsave" method="post" id="frmsave" enctype="multipart/form-data" action="needy-profile.php">
            
		<input type="hidden" name="hdn" id="hdn">
            <input type="hidden" name="hdn1" id="hdn1">

            <div class="file-field">
               <div class="row mt-3 justify-content-center">
                <div class="col-md-2">
                     
                    <img src="pics/images.png" class=" form-control rounded-circle z-depth-1-half avatar-pic" alt="example placeholder avatar" width="200" height="200" id="prev">
                  <i class="fa fa-user-plus fa-3x upload-button" style="margin-left:160px;"></i>
                </div>
                <div class="d-flex justify-content-center">
                    <div class="btn btn-mdb-color btn-rounded float-left">
                        <input type="file" name="profilepic" id="profilepic" onchange="showpreview(this,prev);" style="display:none;">
                    </div>
                </div>
            </div>

</div>

            <div class="row mt-2 justify-content-center">
                <div class="col-md-10 form-group">
                    <label for="">
                        <font color="#EAC117">USER ID</font>
                    </label>
                    <input type="email" class="form-control" name="txtUid" onkeyup="nospaces(this)" id="txtUid" required placeholder="eg:123@gmail.com" value='<?php echo $_SESSION["active_user"];?>' readonly>
                    
                </div>
                <div class="col-md-2 form-group">
                    <label for=""> &nbsp;</label>

                    <input type="button" class="form-control btn btn-info" id="btnFetch" value="Fetch">
                </div>
                <div class="col-md-2 form-group">
                    <label for=""> &nbsp;</label>
                </div>

            </div>
            
            <div class="row mt-3 justify-content-center">
                <div class="col-md-6 form-group">
                    <label for="">
                        <font color="#EAC117">NAME</font>
                    </label>
                    <input type="text" class="form-control" name="namee"  id="namee" required placeholder="eg:prince">
                </div>
                <div class="col-md-6 form-group">
                   <label for="">
                        <font color="#FFD700">CONTACT NUMBER</font>
                    </label>
                    <input type="text" class="form-control" name="contact"  id="contact" required placeholder="eg:9417642701" onkeypress="return (event.charCode >= 48 && event.charCode <= 57)">
                </div>
                <div class="col-md-2 form-group">
                    <label for=""> &nbsp;</label>
                </div>
            </div>
            
            <div class="row mt-3 justify-content-center">
                <div class="col-md-6 form-group">
                    <label for="">
                        <font color="#EAC117">ADDRESS</font>
                    </label>
                    <input type="text" class="form-control" name="address"  id="address">
                </div>
                <div class="col-md-6 form-group mt-4">
                   <label for="">
                        <font color="#FFFF00">CITY</font>
                    </label>
                    
                    <input list="city" name="shehar" id="shehar">
                    <datalist id="city">
                        <option value="BATHINDA">BATHINDA</option>
                        <option value="MUMBAI">MUMBAI</option>
                        <option value="DELHI">DELHI</option>
                        <option value="BANGLORE">BANGLORE</option>
                        <option value="CHANDIGARH">CHANDIGARH</option>
                        <option value="CHENNAI">CHENNAI</option>
                        <option value="KOLKATA">KOLKATA</option>
                        <option value="AHEMDABAD">AHEMDABAD</option>
                        <option value="JAIPUR">JAIPUR</option>
                        <option value="MANIPUR">MANIPUR</option>
                    </datalist>
                </div>
                <div class="col-md-2 form-group">
                    <label for=""> &nbsp;</label>
                </div>
            </div>
            
            <div class="row mt-3 justify-content-center">
                <div class="col-md-5 form-group">
                    <label for="">
                        <font color="#EAC117">ADHAR CARD NUMBER</font>
                    </label>
                    <input type="text" class="form-control" name="adhar"  id="adhar">
                </div>
                <div class="col-md-4 form-group">
                   <label for="">
                        <font color="#FFD700">STATE</font>
                    </label>
                    <input type="text" class="form-control" id="state">
                </div>
                <div class="col-md-3 form-group mt-4">
                  
                   <input type="button" class="btn btn-warning" value="Get Live Location" onclick="getCoordintes();">
                </div>

            </div>
            
            <div class="row mt-5 justify-content-center">
                <div class="col-md-2">
                    <input type="submit" class="btn btn-warning" name="btn" value="SEND TO SERVER" id="save">
                    
                </div>
            
            <div class="row mt-1">
                <div class="col-md-2 offset-3" >
                    <span id="reg">*</span>
                </div>
            </div>
             </div>
        </form>
</div>
   
</body>

</html>