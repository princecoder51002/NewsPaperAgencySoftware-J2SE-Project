
<?php
session_start();
if(isset($_SESSION["active_user"])==false) {
    header("location:index.php");
}
?>

<html lang="en">

<head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="css/bootstrap.css">
    <!-- Optional JavaScript; choose one of the two! -->

    <script src="javascript/jquery-1.8.2.min.js"></script>

    <script src="javascript/bootstrap.bundle.min.js"></script>

    <script src="javascript/angular.min.js">
    </script>

    <script type="text/javascript">
        var mymodule = angular.module("mykuchbhi", []);
        mymodule.controller("mycontroller", function($http, $scope) {
            $scope.rid;

            $scope.jsonArray = [];
            $scope.doFetchAll = function() {
                var uid = angular.element("#txtuid").val();
                var url = "med-fetch.php?uid=" + uid;
                $http.get(url).then(fxOk, fxNotok);

                function fxOk(response) {
                    //				alert(JSON.stringify(response.data));
                    $scope.xx = response.data;

                }

                function fxNotok(error) {
                    alert(error.data);
                }

            }

            //-----------------------------

            $scope.doDelete = function(rid) {

                if (confirm("R U Sure?") == false) return;
                var url = "med-delete-json.php?ridx=" + rid;
                $http.get(url).then(fxOk, fxNotok);

                function fxOk(response) {
                    //				alert(JSON.stringify(response.data));
                    $scope.doFetchAll();

                }

                function fxNotok(error) {
                    alert(error.data);
                }
            }

            //----------------------

            $scope.openn = function(x, y, z) {
                $("#update").modal("show");

                $scope.me = x;
                $scope.qu = y;
                $scope.rid = z;


            }
            //---------------------
            $scope.uppio = function() {
                $scope.me;
                $scope.qu;

                if (confirm("R U Sure?") == false) return;

                var url = "med-manager-db.php?medmed=" + $scope.rid + "&quantu=" + $scope.qu;

                $http.get(url).then(fxOk, fxNotok);

                function fxOk(response) {
                    alert(response.data);
                    $("#msg").html(response.data);
                    $scope.doFetchAll();

                }

                function fxNotok(error) {
                    alert(error.data);
                }
            }

        });

    </script>

    <!----------------------->

    <title>Hello, world!</title>
</head>

<body ng-app="mykuchbhi" ng-controller="mycontroller">

    <!--------------------------------->
    <form method="get">
        <div class="container">
           
           <div class="row mt-4 justify-content-center text-center">
                <div class="col-md-12">
                    <center>
                        <font size="8"><b><i>QUICK MED</i></b></font>
                    </center>
                </div>
            </div>
            <div class="row mt-5">
                <div class="col-md-6">
                    <label for="exampleInputEmail1" class="form-label">EMAIL ADDRESS</label>
                    <input type="email" class="form-control" aria-describedby="emailHelp" ng-model="txtuid" id="txtuid" required placeholder="eg:123@gmail.com" ng-init="txtuid='<?php echo $_SESSION["active_user"];?>'" readonly>
                    <div id="emailHelp" class="form-text"></div>
                </div>

            </div>

            <div class="row mt-2">
                <div class="col-md-2">
                    <button type="button" class="btn btn-primary form-control" ng-click="doFetchAll();">VIEW ALL</button>
                </div>
            </div>

            <!---------------------->

            <div class="row mt-5">
                <div class="col-md-12">

                    <table class="table table-dark table-striped">
                        <tr>

                            <th>Sr.No.</th>
                            <th>UID</th>
                            <th>MEDICINE NAME</th>
                            <th>COMPANY</th>
                            <th>EXPIRY DATE</th>
                            <th>PACKAGE TYPE</th>
                            <th>QUANTITY</th>
                            <th>POTENCY</th>
                            <th>FRONT PIC</th>
                            <th>BACK PIC</th>
                            <th>DELETE</th>
                            <th>UPDATE</th>

                        </tr>

                        <tr ng-repeat="x in xx">

                            <th>{{x.rid}}</th>
                            <td>{{x.uid}}</td>
                            <td>{{x.medname}}</td>
                            <td>{{x.company}}</td>
                            <td>{{x.expirydate}}</td>
                            <th>{{x.packtype}}</th>
                            <th>{{x.quantity}}</th>
                            <th>{{x.power}}</th>
                            <th>
                                <img src="uploads/{{x.pic1}}" alt="" width="40" height="40">
                            </th>
                            <th>
                                <img src="uploads/{{x.pic2}}" alt="" width="40" height="40">
                            </th>
                            <th>
                                <img src="pics/images%20(10).jfif" width="40" height="40" alt="" ng-click="doDelete(x.rid);" style="cursor:pointer;">
                            </th>
                            <th>
                                <img src="pics/56061843-update-refresh-icon-yellow-square-button.jpg" alt="" width="40" height="40" style="cursor:pointer;" ng-click="openn(x.medname,x.quantity,x.rid);">
                            </th>



                        </tr>
                    </table>
                </div>
            </div>

        </div>
        <!---------------------------------------->










    </form>

    <!-- =====   --------------------------------->

    <div class="modal fade" id="update" tabindex="-1" aria-labelledby="exampleModalLabel" aria-hidden="true">
        <div class="modal-dialog">
            <div class="modal-content">
                <div class="modal-header bg-danger text-white">
                    <h5 class="modal-title" id="exampleModalLabel">WELCOME</h5>
                    <button type="button" class="btn-close" data-bs-dismiss="modal" aria-label="Close"></button>
                </div>
                <div class="modal-body">
                    <form action="">
                        <div class="mb-3">
                            <label for="exampleInputEmail1" class="form-label">MEDICINE NAME</label>
                            <input type="text" class="form-control" id="medmed" readonly ng-model="me" required aria-describedby="emailHelp">
                            <div id="emailHelp" class="form-text">.</div>
                        </div>
                        <div class="mb-3">
                            <label for="exampleInputPassword1" class="form-label">QUANTITY</label>
                            <input type="text" class="form-control" required id="quantu" ng-model="qu">
                        </div>
                    </form>
                </div>
                <div class="modal-footer justify-content-center">
                    <input id="upt" type="button" value="UPDATE" class="btn btn-dark" ng-click="uppio();">
                    <span id="msg">*</span>
                </div>
            </div>
        </div>
    </div>

</body>

</html>
