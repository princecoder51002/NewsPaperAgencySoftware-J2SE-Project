<?php 
    session_start();
    if(isset($_SESSION['active_user'])){
        include_once "connection.php";
        $outgoing_id = $_SESSION['active_user'];
        $incoming_id = mysqli_real_escape_string($dbcon, $_POST['incoming_id']);
        $message = mysqli_real_escape_string($dbcon, $_POST['message']);
        if(!empty($message)){
            $sql="insert into messages (incoming_msg_id,outgoing_msg_id,msg) values ('$incoming_id', '$outgoing_id', '$message')";
            mysqli_query($dbcon,$sql);
        }
    }else{
        header("location: index.php");
    }

?>