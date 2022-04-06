<?php

    session_start();
    if(isset($_SESSION['active_user'])){
        include_once "connection.php";
        $outgoing_id = $_SESSION['active_user'];
        $incoming_id = mysqli_real_escape_string($dbcon, $_POST['incoming_id']);
        
        $output="";
        
        $sql="select * from messages where(outgoing_msg_id = '{$outgoing_id}' AND incoming_msg_id = '{$incoming_id}') OR (outgoing_msg_id = '{$incoming_id}' AND incoming_msg_id = '{$outgoing_id}') ORDER BY msg_id";
        
        $query=mysqli_query($dbcon,$sql);
        if(mysqli_num_rows($query)>0){
            while($row=mysqli_fetch_assoc($query)){
                if($row['outgoing_msg_id']===$outgoing_id){// if this is equal to he is msg sender
                    $output .= '<div class="chat outgoing">
                    <div class="details">
                    <p>' .$row['msg'] .'</p>
                    </div>
                    </div>';
                }
                else{// this is a msg receiver
                    $output .= '<div class="chat incoming">
                    <div class="details">
                    <p>' .$row['msg'] .'</p>
                    </div>
                    </div>';
                }
            }
            echo $output;
        }
    }else{
        header("location: index.php");
    }
?>