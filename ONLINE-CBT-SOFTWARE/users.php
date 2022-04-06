<?php
    session_start();
    include_once "connection.php";
    $outgoing_id = $_SESSION['active_user'];
    $sql = "SELECT * FROM users where not id='{$outgoing_id}'";
    $query = mysqli_query($dbcon, $sql);
    $output = "";
    if(mysqli_num_rows($query) == 1){
        $output = "No users are available to chat";
    }elseif(mysqli_num_rows($query) > 0){
        include "data.php";
    }
    echo $output;
?>