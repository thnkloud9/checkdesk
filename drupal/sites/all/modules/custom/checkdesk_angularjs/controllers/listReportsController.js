define(['angular'], function(angular) {
    angular.module('myapp').controller('listReportsController', ['$scope','$rootScope','$sce', 'Media_Service',function($scope,$rootScope,$sce, Media_Service){
        Media_Service.reports().success(function (data) {
            $scope.data = data;
        });
        $scope.renderHtml = function(html_code)
        {
            return $sce.trustAsHtml(html_code);
        };
    }]);

});