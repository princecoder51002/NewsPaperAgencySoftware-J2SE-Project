<?php
    while($row = mysqli_fetch_assoc($query)){
        $sql2 = "select * from messages where (incoming_msg_id ='{$row['id']}' OR outgoing_msg_id='{$row['id']}') AND (outgoing_msg_id ='{$outgoing_id}' OR outgoing_msg_id='{$outgoing_id}') ORDER BY msg_id DESC LIMIT 1";
        $query2=mysqli_query($dbcon,$sql2);
        $row2=mysqli_fetch_assoc($query2);
        if(mysqli_num_rows($query2)>0){
            $result = $row2['msg'];
            
        }
        else{
            $result= "No message availaible";
        }
        // trimming message if words are more than 28
        (strlen($result)>28) ? $msg = substr($result,0,28).'...' : $msg=$result;
        // adding you: text before msg if login id send msg
//        if($outgoing_id==$row2['outgoing_msg_id'])
//        {
//            $you = "You: ";
//        }
//        else{
//            $you = "";
//        }
        // check user is offline or online
        
        ($row['status']=="offline now") ? $offline = "offline" : $offline="";
            $output .= '<a href="chat.php?user_id='. $row['id'].'">
                        <div class="content">
                        <div class="details">
                        <span>'. $row['name'] . '</span>
                        <p>'. $msg .'</p>
                        </div>
                        </div>
                        <div class="status-dot '.$offline.'"><i class="fas fa-circle"></i></div>
                        </a>';
        }
?>