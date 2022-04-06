<?php
    session_start();
    if(isset($_SESSION['active_user'])){
        include_once "connection.php";
        $logout_id = mysqli_real_escape_string($dbcon, $_GET['logout_id']);
        if(isset($logout_id)){
            $status = "Offline now";
            $sql = mysqli_query($dbcon, "UPDATE users SET status = '{$status}' WHERE id='{$_GET['logout_id']}'");
            if($sql){
                session_unset();
                session_destroy();
                header("location: index.php");
            }
        }else{
            header("location: index.php");
        }
    }else{  
        header("location: index.php");
    }
?>