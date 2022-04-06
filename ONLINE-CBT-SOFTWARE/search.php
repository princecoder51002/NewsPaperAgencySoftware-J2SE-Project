<?php
    session_start();
    include_once "connection.php";

    $outgoing_id = $_SESSION["active_user"];
    $searchTerm = mysqli_real_escape_string($dbcon, $_POST['searchTerm']);
    $sql = "SELECT * FROM users WHERE not id='{$outgoing_id}' AND (name LIKE '%{$searchTerm}%')";
    $output = "";
    $query = mysqli_query($dbcon, $sql);
    if(mysqli_num_rows($query) > 0){
        include_once "data.php";
    }else{
        $output .= 'No user found related to your search term';
    }
    echo $output;
?>