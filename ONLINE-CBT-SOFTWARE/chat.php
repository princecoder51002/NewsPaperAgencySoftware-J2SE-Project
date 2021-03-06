
<?php 
  session_start();
  include_once "connection.php";
  if(!isset($_SESSION['active_user'])){
   header("location: index.php");
  }
?>
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
<body>
  <div class="wrapper">
    <section class="chat-area">
      <header>
        <?php 
          include "connection.php";
          $user_id = mysqli_real_escape_string($dbcon, $_GET['user_id']);
          $sql = mysqli_query($dbcon, "SELECT * FROM users WHERE id = '{$user_id}'");
          if(mysqli_num_rows($sql) > 0){
            $row = mysqli_fetch_assoc($sql);
          }else{
            header("location: index.php");
          }
        ?>
        <a href="chat-app.php" class="back-icon"><i class="fas fa-arrow-left"></i></a>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
        <div class="details">
          <span><?php echo $row['name'] ?></span>
          <p><?php echo $row['status']; ?></p>
        </div>
      </header>
      <div class="chat-box">

      </div>
      <form action="#" class="typing-area">
        <input type="text" class="incoming_id" name="incoming_id" value="<?php echo $user_id; ?>" hidden>
        <input type="text" name="message" class="input-field" placeholder="Type a message here..." autocomplete="off">
        <button><i class="fab fa-telegram-plane"></i></button>
      </form>
    </section>
  </div>

  <script src="js/chat.js"></script>

</body>
</html>