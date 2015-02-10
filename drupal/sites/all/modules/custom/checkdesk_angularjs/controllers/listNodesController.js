define(['angular'], function(angular) {
    angular.module('myapp').controller('listNodesController', ['$scope','$rootScope','Node_Service',function($scope,$rootScope,Node_Service){
        $scope.nodes = ["Node1", "Node2", "Node3", "Node4"];
        Node_Service.nodes().success(function (data) {
            $scope.data = data;
        });
    }]);
});