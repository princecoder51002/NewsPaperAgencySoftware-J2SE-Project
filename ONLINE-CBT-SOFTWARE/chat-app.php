<?php
session_start();
include_once "connection.php";
if(isset($_SESSION["active_user"])==false) {
    header("location:index.php");
}
?>


<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="ie=edge">
  <title>Realtime Chat App</title>
  <link rel="stylesheet" href="stylepp.css">
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/5.15.2/css/all.min.css"/>
  
  <link rel="stylesheet" href="css/bootstrap.css">
    <!-- Optional JavaScript; choose one of the two! -->

    <script src="js/jquery-1.8.2.min.js"></script>

    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css">

    <script src="js/bootstrap.bundle.min.js"></script>
</head>

<script>
    
//    $(document).ready(function(){
//        $("#return").click(function(){
//            location.href="create-exam.php";
//        });
//    });
    
    </script>

<body>
    
    <div class="wrapper">
    <section class="users">
      <header>
        <div class="content">
          <?php 
            $query="select * from users where id='{$_SESSION['active_user']}'";
            $result=mysqli_query($dbcon,$query);
            if(mysqli_num_rows($result) > 0){
              $row = mysqli_fetch_assoc($result);
            }
          ?>
          <div class="details">
            <span><?php echo $row['name'] ?></span>
            <p><?php echo $row['status']; ?></p>
          </div>
        </div>
        <a href="logout2.php?logout_id=<?php echo $row['id'] ?>"><button class="btn btn-dark" id="return">Logout</button></a>
      </header>
      <div class="search">
        <span class="text">Select an user to start chat</span>
        <input type="text" placeholder="Enter name to search...">
        <button><i class="fas fa-search"></i></button>
      </div>
      <div class="users-list">
  
      </div>
    </section>
  </div>
</body>


</html>


<script src="js/users.js"></script>