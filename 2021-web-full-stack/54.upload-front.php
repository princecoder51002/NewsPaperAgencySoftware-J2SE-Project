<!DOCTYPE html>
<html lang="en">

<head>
	<meta charset="UTF-8">
	<title>Document</title>
	<script src="javascript/jquery-1.8.2.min.js">
	</script>
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
	<CENTER>
		<form action="55.upload-process.php" method="post" enctype="multipart/form-data">
			<p>
				Uid: <input type="text" name="txtUid">

			</p>
			<p>
				Profile Pic: 
				<input type="file" name="ppic" onchange="showpreview(this,prev);" >
			</p>
			<p>
				<img src="pics/download.png" id="prev" width="200" height="200" alt="">
			</p>
			<p>
				<center>
					<input type="submit" value="Upload Now">
				</center>
			</p>
		</form>
	</CENTER>
</body>
</html>