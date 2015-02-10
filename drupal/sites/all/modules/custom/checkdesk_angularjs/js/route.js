define(['angular', 'app'], function(angular, app) {

    return app.config(['$stateProvider','$urlRouterProvider', function($stateProvider, $urlRouterProvider) {

        /** Home Page **/
        $stateProvider.state('home', {
            url: '/home',
            templateUrl: '/sites/all/modules/custom/checkdesk_angularjs/templates/home.html',
            controller: 'homeController'
        });
        /** List Users **/
        $stateProvider.state('list_users', {
            url: '/list_users',
            templateUrl: '/sites/all/modules/custom/checkdesk_angularjs/templates/ListUsers.html',
            controller: 'listUsersController'
        });
        /** List Nodes **/
        $stateProvider.state('list_nodes', {
            url: '/list_nodes',
            templateUrl: '/sites/all/modules/custom/checkdesk_angularjs/templates/ListNodes.html',
            controller: 'listNodesController'
        });
        /**** Invalid routes redirection ****/
        $urlRouterProvider.otherwise('/home');
    }]);

});
