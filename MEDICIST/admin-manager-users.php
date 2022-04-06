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
                var url = "admin-manager-db.php";
                $http.get(url).then(fxOk, fxNotok);

                function fxOk(response) {
                    //				alert(JSON.stringify(response.data));
                    $scope.xx = response.data;

                }

                function fxNotok(error) {
                    alert(error.data);
                }

            }
            
            //-----------------------
            
            $scope.doblock=function(x){
                
                if(confirm("ARE YOU SURE?")==false) return;
                var url="block.php?uid="+x;
                
                $http.get(url).then(fxOk, fxNotok);

                function fxOk(response) {
                    $scope.doFetchAll();

                }

                function fxNotok(error) {
                    alert(error.data);
                }
                
            }
            
            //----------------------------
            
             $scope.doresume=function(x){
                
                if(confirm("ARE YOU SURE?")==false) return;
                var url="resume.php?uid="+x;
                
                $http.get(url).then(fxOk, fxNotok);

                function fxOk(response) {
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
                        <th>PASSWORD</th>
                        <th>MOBILE</th>
                        <th>CATEOGRY</th>
                        <th>SIGNUP DATE</th>
                        <th>STATUS</th>
                        <th>BLOCK</th>
                        <th>RESUME</th>
                    </tr>

                    <tr ng-repeat="x in xx">

                        <th>{{$index+1}}</th>
                        <td>{{x.email}}</td>
                        <td>{{x.pwd}}</td>
                        <td>{{x.mobile}}</td>
                        <td>{{x.category}}</td>
                        <th>{{x.dos}}</th>
                        <th>{{x.status}}</th>
                        <th>
                            <img ng-if="x.status==1" src="pics/images%20(8).jfif" width="40" height="40" alt="" ng-click="doblock(x.email);" style="cursor:pointer;">
                        </th>
                        <th>
                            <img ng-if="x.status==0" src="pics/2061864.png" alt="" width="40" height="40" style="cursor:pointer;" ng-click="doresume(x.email);">
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