<?php
session_start();
if(isset($_SESSION["active_user"])==false) {
    header("location:index.php");
}
?>
<!doctype html>
<html lang="en">

<head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="css/bootstrap.css">

    <script src="js/angular.min.js">
    </script>
    <!-- Optional JavaScript; choose one of the two! -->

    <script src="js/jquery-1.8.2.min.js"></script>

    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css">

    <script src="js/bootstrap.bundle.min.js"></script>



    <title>Dashboard.com</title>
    
    <style>
    
        body{
            background-image: url(images/images%20pp.jfif);
            background-attachment: fixed;
            background-size: cover;
        }
    
    </style>

    <link rel="shortcut icon" href="images/unnamed.jpg">

    <script type="text/javascript">
        var mymodule = angular.module("mykuchbhi", []);
        mymodule.controller("mycontroller", function($http, $scope) {

            $scope.jsonArray = [];
            $scope.rid;
            $scope.in;
            $scope.xx;

            $scope.doFetchAll = function() {
                var url = "exam-center-db.php?exam=" + $scope.qu;
                $http.get(url).then(fxOk, fxNotok);

                function fxOk(response) {
                    $scope.xx = response.data;

                }

                function fxNotok(error) {
                    alert(error.data);
                }

            }

            //---------------------------

            $scope.view = function(event, a) {
                $("#ques").modal("show");
                $scope.para = a;
            }
            //------------------------

            $scope.submu = function(event, a, b, c) {
                $("#chu").modal("show");

                $scope.maa = a;
                $scope.rid = b;
                $scope.in=c;
            }
            //-----------------

            $scope.doDelete = function(rid) {
                if (confirm("R U Sure to Submit This As your Anser?") == false) return;
                var url = "answer-submit.php?ridx=" + $scope.rid + "&examid=" + $scope.qu + "&uid=" + $scope.ee + "&answer=" + $scope.aaa + "&check=" + $scope.maa;
                $http.get(url).then(fxOk, fxNotok);

                function fxOk(response) {
                    $scope.xx.splice($scope.in, 1);

                }

                function fxNotok(error) {
                    alert(error.data);
                }
            }

        });

    </script>

    <script type="text/javascript">
        $(function() {
            $("#showmd").click(function() {
                $("#ques").modal("hide");
            });

            //---------------------------


        });

        
    </script>
    <script>
        $(document).ready(function() {
            $("#dosub").click(function() {
                var q = document.getElementById("ques2").value;
                var a = document.getElementById("ans2").value;
                var url = "check-answer.php?question=" + q + "&answer=" + a;

                $.get(url, function(msg) {
                    if (msg.trim() == "VALID")
                        $("#check").html("<font color='green'>CORRECT ANSWER<i class='fa fa-check' aria-hidden='true' style='color:green'></i></font>");
                    else if (msg.trim() == "INVALID")
                        $("#check").html("<font color='red'>INCORRECT ANSWER<i class='fa fa-times' aria-hidden='true' style='color:red'></i></font>");

                });
            });

            //-----------------------

            $("#cll").click(function() {
                $("#chu").modal("hide");
            });
            
            //---------------------
            
            
            //---------------------
            
        });
        

    </script>
    
    
    <script type="text/javascript">
    
    window.addEventListener('beforeunload',()=>{
        event.preventDefault();
        event.returnValue = "";
    })
    
    </script>
    <style>
        body {
            background-color: #f0f0f0;
        }

    </style>

<body ng-app="mykuchbhi" ng-controller="mycontroller">

    <div class="container">

        <div class="row mt-4 justify-content-center text-center">
            <div class="col-md-12">
                <center>
                    <font size="10" color="black"><b><i>COMPUTER BASED TEST</i></b></font><br>
                    <a href="logout.php"><button type="submit" class="btn btn-warning" style="margin-top:10px;"><i class="fa fa-sign-out" aria-hidden="true"></i>&nbsp;&nbsp;GO TO HOME PAGE</button></a>
                    <br><br><br><br>
                    <font size="8"><b><i>DISCUSS WITH YOUR CLASSMATES</i></b></font>
                </center>
            </div>
        </div>

        <div class="row mt-4 justify-content-center text-center">
            <div class="col-md-12">
                <center>
                    <font size="8"><b><i>ATTEMPT YOUR EXAM</i></b></font>
                    
                </center>
            </div>
        </div>

        <div class="row mt-3 justify-content-center">
            <div class="col-md-6">
                <label for="exampleInputEmail1" class="form-label">
                    <font size="5"><i><b>EXAM ID/NO.</b></i></font>
                </label>
                <input type="text" class="form-control" aria-describedby="emailHelp" name="id" id="examii" ng-model="qu">
                <div id="emailHelp" class="form-text"></div>
                <div class="col-md-3 justify-content-center">
                    <button class="btn btn-danger" name="btn" value="CHAT" id="CHAT" ng-click="doFetchAll();">VIEW QUESTIONS</button>

                </div>
            </div>

        </div>

        <!-----------table---------->
        <table class="table">
            <thead class="thead-light">
                <tr>
                    <th scope="col">EXAM ID/NO.</th>
                    <th scope="col">QUES NO.</th>
                    <th scope="col">SEE QUESTION</th>
                    <th scope="col">SCORE/MARKS ALLOTED</th>
                    <th scope="col">SUBMITION</th>

                </tr>
            </thead>
            <tbody>
                <tr ng-repeat="x in xx">
                    <td>{{x.id}}</td>
                    <td>{{$index+1}}</td>
                    <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<button class="btn btn-dark" ng-click="view($event,x.ques);">
                            <font><i><b>view</b></i></font>
                        </button></td>
                    <td>{{x.marks}}</td>
                    <td>&nbsp;&nbsp;&nbsp;<button class="btn btn-dark" ng-click="submu($event,x.marks,x.rid,$index);" ng-disabled="disabledFlag">
                            <font><i><b>submit</b></i></font>
                        </button></td>

                </tr>
            </tbody>
        </table>
    </div>

    <!-----------modal--------->

    <!-- Modal -->



    <br><br>
    <div class="modal" tabindex="-1" role="dialog" id="ques">
        <div class="modal-dialog" role="document">
            <div class="modal-content" style="border: 8px solid black;">
                <div class="modal-header">
                    <h5 class="modal-title">QUESTION:</h5>
                    <button class="btn btn-light" id="showmd"><span aria-hidden="true">&times;</span></button>
                </div>
                <div>
                    <textarea name="" id="ques2" cols="64" rows="" ng-model="para" readonly></textarea>
                </div>
                <br>
                <br>

                <div>
                    <h5 class="modal-title">YOUR ANSWER:</h5>
                    <input type="text" class="form-control" id="ans2">
                </div>
                <div class="modal-footer">
                    <button class="btn btn-danger" type="button" id="dosub">CHECK</button>
                    <span id="check">*</span>
                </div>
            </div>
        </div>
    </div>

    <!------------------------>

    <div class="modal" tabindex="-1" role="dialog" id="chu">
        <div class="modal-dialog" role="document">
            <div class="modal-content"  style="border: 8px solid black;">
                <button class="btn btn-light" id="cll"><span aria-hidden="true"><i class="fa fa-times fa-2x" aria-hidden="true" style="float:right;"></i></span></button>
                <div>
                    <h5 class="modal-title">USER ID</h5>
                    <input type="text" class="form-control" id="ui" ng-init="ee='<?php echo $_SESSION["active_user"];?>'" readonly ng-model="ee">
                </div>

                <div>
                    <h5 class="modal-title">YOUR FINAL ANSWER:</h5>
                    <input type="text" class="form-control" id="ans2" ng-model="aaa">
                </div>
                <div>
                    <h5 class="modal-title">MARKS ALLOTED</h5>
                    <input type="text" class="form-control" id="ma" readonly ng-model="maa">
                </div>
                <div class="modal-footer">
                    <button class="btn btn-danger" type="button" id="dosub" ng-click="doDelete();">SUBMIT</button>
                </div>
            </div>
        </div>
    </div>
    
    <!---------------------------------->
    
    
</body>
</head>

</html>
