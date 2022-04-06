<!doctype html>
<html lang="en">

<head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="css/bootstrap.css">
    <!-- Optional JavaScript; choose one of the two! -->

    <script src="js/angular.min.js">
    </script>

    <script src="js/jquery-1.8.2.min.js"></script>

    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css">

    <script src="js/bootstrap.bundle.min.js"></script>

    <title>teacher-Dashboard.com</title>

    <link rel="shortcut icon" href="images/unnamed.jpg">

    <style>
        body {
            background-color: #f0f0f0;
            background-image: url(images/a42d56f8a7a59ffd10a3f91f0a471e4c.jpg);
             background-attachment: fixed;
            background-size: cover;
        }

    </style>

    <script type="text/javascript">
        var mymodule = angular.module("mykuchbhi", []);
        mymodule.controller("mycontroller", function($http, $scope) {

            $scope.jsonArray = [];
            $scope.rid;

            $scope.doFetchAll = function() {
                var url = "manage-records-db.php?exam=" + $scope.qu;
                $http.get(url).then(fxOk, fxNotok);

                function fxOk(response) {
                    $scope.xx = response.data;

                }

                function fxNotok(error) {
                    alert(error.data);
                }

            }

        });

    </script>

<body ng-app="mykuchbhi" ng-controller="mycontroller">

    <div class="container">

        <div class="row mt-4 justify-content-center text-center">
            <div class="col-md-12">
                <center>
                    <font size="8"><b><i>COMPUTER BASED TEST</i></b></font>
                    <br>
                    <font size="8" color="red"><b><i>RECORD OF STUDENTS </i></b></font>
                    
                </center>
            </div>
        </div>
        <div class="row mt-5">
            <div class="col-md-6">
                <label for="exampleInputEmail1" class="form-label">
                    <font size="5"><i><b>EXAM ID/NO.</b></i></font>
                </label>
                <input type="text" class="form-control" aria-describedby="emailHelp" name="id" ng-model="qu">
                <div id="emailHelp" class="form-text"></div>
            </div>

        </div>

        <div class="row mt-3">
            <div class="col-md-6">
                <button class="btn btn-danger" name="btn" value="SAVE" ng-click="doFetchAll();">SHOW STUDENT RECORDS</button>
            </div>

        </div>
    </div>

    <!-----------------table------->

    <table class="table">
        <thead class="thead-light">
            <tr>
                <th scope="col">Sr. No.</th>
                <th scope="col">EXAM ID/NO.</th>
                <th scope="col">USER ID</th>
                <th scope="col">SCORE</th>
            </tr>
        </thead>
        <tbody>
            <tr ng-repeat="x in xx">
                <td>{{$index+1}}</td>
                <td>{{x.examid}}</td>
                <td>{{x.userid}}</td>
                <td>{{x.score}}</td>
            </tr>
        </tbody>
    </table>

</body>

</head>

</html>
