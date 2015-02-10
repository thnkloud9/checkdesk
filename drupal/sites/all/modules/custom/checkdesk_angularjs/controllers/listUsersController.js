define(['angular', 'services'], function(angular, services) {
    angular.module('myapp').controller('listUsersController', ['$scope','$rootScope', 'User_Service',function($scope,$rootScope, User_Service){
        User_Service.users().success(function (data) {
            $scope.data = data;
        });

    }]);
});
