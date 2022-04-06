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
                var url = "admin-med-manager-db1.php";
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
                
                if(confirm("R U Sure?")==false) return;
                var url = "admin-med-manager-db.php?ridx="+rid;
                $http.get(url).then(fxOk, fxNotok);
                
                 function fxOk(response) {
                    alert(response.data);
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

            <div class="row mt-5 justify-content-center">
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
                            <img src="pics/14160320-glassy-aqua-blue-cross-icon-button.jpg" width="40" height="40" alt="" ng-click="doDelete(x.rid);" style="cursor:pointer;">
                        </th>
                    </tr>
                </table>
</div>
            </div>

        </div>
        <!---------------------------------------->










    </form>

</body>

</html>