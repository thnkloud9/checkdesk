define(['angular'], function(angular) {
    angular.module('myapp').controller('listReportsController', ['$scope','$rootScope','$sce', 'Media_Service',function($scope,$rootScope,$sce, Media_Service){

        $scope.itemsPerPage = 3;
        $scope.currentPage = 0;
        // for now set total reports with static value
        $scope.total = 20;
        Media_Service.reports($scope.currentPage, $scope.itemsPerPage).success(function (data) {
            $scope.data = data;
        });

        $scope.loadMore = function() {
            $scope.currentPage++;
            Media_Service.reports($scope.currentPage, $scope.itemsPerPage).success(function (data) {
                $scope.data = $scope.data.concat(data);
            });
        };

        $scope.renderHtml = function(html_code)
        {
            return $sce.trustAsHtml(html_code);
        };

        $scope.showLoadMore = function() {
            var loadedItems = ($scope.currentPage + 1) * $scope.itemsPerPage;
            if ( loadedItems >= $scope.total) {
                return false;
            }
            return true;
        }
    }]);

});