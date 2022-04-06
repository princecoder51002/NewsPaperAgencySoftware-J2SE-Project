
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
    <!-- Optional JavaScript; choose one of the two! -->

    <script src="javascript/jquery-1.8.2.min.js"></script>

    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css">

    <script src="javascript/bootstrap.bundle.min.js"></script>

    <script src="javascript/angular.min.js">
    </script>

    <title>Hello, world!</title>

</head>

<script type="text/javascript">
    var mymodule = angular.module("mykuchbhi", []);
    mymodule.controller("mycontroller", function($http, $scope) {

        $scope.id;
        $scope.jsonArray = [];
        
        //----------------------------
        $scope.medname=function(){
            
             var url = "fetch-find-medicine.php";
            $http.get(url).then(fxOk, fxNotok);
            function fxOk(response) {
                $scope.json = response.data;

            }

            function fxNotok(error) {
                alert(error.data);
            }
        }
        //--------------------------
        $scope.doFetchAll = function() {
            var med = angular.element("#listmed").val();
            var place = angular.element("#medicine").val();
            var url = "find-medicine-db1.php?medx=" + med + "&placex=" + place;
            $http.get(url).then(fxOk, fxNotok);

            function fxOk(response) {
                $scope.xx = response.data;

            }

            function fxNotok(error) {
                alert(error.data);
            }
        }
        
        //------------------------------------
        
         $scope.dofetch=function(m,a,b,c,d,e,f,g,h){
                $("#med").modal("show");
                
                $scope.medicine=a;
                $scope.company=b;
                $scope.quantity=c;
                $scope.expirydate=d;
                $scope.packagingtype=e;
                $scope.power=f;
                $scope.id=m;
             
              $("#yaari1").html("");
              
            }
         
         //-----------------------------------------
         
         $scope.doshow=function(){
             var url = "find-medicine-db3.php?uid="+$scope.id;
            $http.get(url).then(fxOk, fxNotok);

            function fxOk(response) {
               ;
                $scope.contact = response.data;

            }

            function fxNotok(error) {
                alert(error.data);
            }
         }

    });

</script>


<script>
    $(document).ready(function() {
        $("#medicine").blur(function() {
            var prince = $("#listmed");
            prince.empty();
            prince.append('<option selected="true" disabled>cities</option>');
            prince.prop('selectedIndex', 0);
            var med = $("#medicine").val();
            var url = "find-medicine-db.php?medx=" + med;
            $.getJSON(url, function(jsonAryFeeling) {
                $.each(jsonAryFeeling, function(key, entry) {
                    prince.append($('<option></option>').attr('value', entry).text(entry));
                });
            });
        });
    });

</script>

<body ng-app="mykuchbhi" ng-controller="mycontroller" ng-init="medname();">


    <!------------------------------------------->

    <div class="container">
        
        
         <div class="row mt-4 justify-content-center text-center">
                <div class="col-md-12">
                    <center>
                        <font size="8"><b><i>QUICK MED</i></b></font>
                    </center>
                </div>
                <div class="row justify-content-center">
                <div class="col-md-6">
                   <center>
                    <h1><label type="" readonly value="<?php echo $_SESSION['active_user']?>" style="float:left;">Welcome:<?php echo $_SESSION['active_user']?></label></h1>
                    </center>
                </div>
                </div>
            </div>

        <div class="row mt-5 justify-content-center">

            <div class="col-md-4">

                <label for="">
                    <font size="5"><i><b>MEDICINE NAME</b></i></font>
                </label>

                <input list="city" name="medicine" id="medicine" required placeholder="eg:crocin" class="form-control">
                <datalist id="city">
<!--
                    <option value="CROCIN">CROCIN</option>
                    <option value="DOLO">DOLO</option>
                    <option value="DICLOWIN">DICLOWIN</option>
                    <option value="PARACETAMOL">PARACETAMOL</option>
                    <option value="BRUFFON">BRUFFON</option>
                    
-->
               <option value="{{x.medname}}" ng-repeat="x in json"></option>
                </datalist>
            </div>

            <div class="col-md-3 mt-0">

                <label for="">
                    <font size="5"><i><b>CITY</b></i></font>
                </label>
                <select id="listmed" name="listmed" class="form-control">

                </select>

            </div>

            <div class="col-md-7 mt-4">
                <input type="button" value="FIND PROVIDERS" id="provide" name="provide" class="btn btn-primary" ng-click="doFetchAll();">
            </div>

        </div>

        <!--====================================-->

        <div class="row mt-5 justify-content-center">

            <div class="col-md-4" ng-repeat="x in xx">
                <div class="card" style="width: 18rem;">
                    <ul class="list-group list-group-flush">
                        <li class="list-group-item"><img src="uploads/{{x.pic1}}" alt="" width="100" height="100"></li>
                        <li class="list-group-item">MEDICINE NAME: {{x.medname}}</li>
                        <li class="list-group-item">COMPANY: {{x.company}}</li>
                        <li class="list-group-item">QUANTITY: {{x.quantity}}</li>
                        <li class="list-group-item">EXPIRY DATE: {{x.expirydate}}</li>
                        <li class="list-group-item"><input type="button" class="btn btn-primary" value="DETAILS AND CONTACT" style="width:250px;" ng-click="dofetch(x.uid,x.medname,x.company,x.quantity,x.expirydate,x.packtype,x.power,x.pic1,x.pic2);"></li>
                    </ul>
                </div>
            </div>
        </div>

    </div>

    <!-------------------------modal----------------------------------->

    <div class="modal fade" id="med" tabindex="-1" aria-labelledby="exampleModalLabel" aria-hidden="true">
        <div class="modal-dialog">
            <div class="modal-content">
                <div class="modal-header bg-danger text-white">
                    <h5 class="modal-title" id="exampleModalLabel">ALL DETAILS OF MEDICINE AND CONTACT OF PROVIDER</h5>
                    <button type="button" class="btn-close" data-bs-dismiss="modal" aria-label="Close"></button>
                </div>
                <div class="modal-body">
                    <form >
                        <div class="mb-3">
                            <label for="exampleInputEmail1" class="form-label">MEDICINE NAME</label>
                            <input type="text" id="medi" class="form-control" required aria-describedby="emailHelp" readonly ng-model="medicine">
                        </div>
                        <div class="mb-3">

                            <label for="exampleInputPassword1" class="form-label">QUANTITY</label>
                            <input type="text" class="form-control" required id="quant" readonly ng-model="quantity">

                        </div>
                        <div class="mb-3">

                            <label for="exampleInputPassword1" class="form-label">PACKAGING TYPE</label>
                            <input type="text" class="form-control" required id="ptype" readonly ng-model="packagingtype">

                        </div>
                        <div class="mb-3">

                            <label for="exampleInputPassword1" class="form-label">POTENCY/POWER</label>
                            <input type="text" class="form-control" required id="pow" readonly ng-model="power">

                        </div>
                    </form>
                </div>
                <div class="modal-footer justify-content-center">
                    <button type="button" ng-click="doshow();" class="btn btn-dark">PROVIDER CONTACT</button>
                </div>
                
                
                <div class="col-md-10" ng-repeat="x in contact" id="yaari">
                    <ul class="list-group list-group-flush" id="yaari1">
                        <li class="list-group-item"><font color="green">NAME: {{x.name}}</font></li>
                        <li class="list-group-item"><font color="green">ADDRESS: {{x.address}}</font></li>
                        <li class="list-group-item"><font color="green">MOBILE NO.: {{x.contact}}</font></li>
                    </ul>
                </div>
                
            </div>
        </div>
    </div>


</body>

</html>
