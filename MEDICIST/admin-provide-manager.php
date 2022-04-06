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
                var url = "admin-provide-manager-db.php";
                $http.get(url).then(fxOk, fxNotok);

                function fxOk(response) {
                    //				alert(JSON.stringify(response.data));
                    $scope.xx = response.data;

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
          

          
          <div class="row mt-2 justify-content-center">
                <div class="col-md-2">
                    <button type="button" class="btn btn-primary form-control" ng-click="doFetchAll();">VIEW ALL</button>
                </div>
            </div>
            <!------------------------->
           <div class="row mt-5">
                <div class="col-md-12">

                <table class="table table-dark table-striped">
                    <tr>

                        <th>Sr.No.</th>
                        <th>EMAIL</th>
                        <th>NAME</th>
                        <th>MOBILE</th>
                        <th>ADDRESS</th>
                        <th>CITY</th>
                        <th>PROFILE PIC</th>
                        <th>PROOF PIC</th>
                        <th>ID NUMBER</th>
                    </tr>

                    <tr ng-repeat="x in xx">

                        <th>{{$index+1}}</th>
                        <td>{{x.uid}}</td>
                        <td>{{x.name}}</td>
                        <td>{{x.contact}}</td>
                        <td>{{x.address}}</td>
                        <th>{{x.city}}</th>
                        
                        <th>
                            <img src="uploads/{{x.picpath}}" alt="" width="40" height="40">
                        </th>
                        <th>
                            <img src="uploads/{{x.idpath}}" alt="" width="40" height="40">
                        </th>
                        <th>{{x.idnumber}}</th>
                    </tr>
                </table>
</div>
            </div>
        </div>

        <!---------------------------------------->
    </form>

</body>

</html>