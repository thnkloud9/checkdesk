require.config({
    baseUrl: '/sites/all/',
    paths: {
        angular : 'libraries/angular/angular.min',
        app : 'modules/custom/checkdesk_angularjs/js/app',
        angularBootstrap : 'libraries/angular/ui-bootstrap-tpls-0.12.0.min',
        angularUi: 'libraries/angular/angular-ui-router',
        mainController: 'modules/custom/checkdesk_angularjs/controllers/mainController',
        homeController: 'modules/custom/checkdesk_angularjs/controllers/homeController',
        listUsersController: 'modules/custom/checkdesk_angularjs/controllers/listUsersController',
        listNodesController: 'modules/custom/checkdesk_angularjs/controllers/listNodesController',
        listReportsController: 'modules/custom/checkdesk_angularjs/controllers/listReportsController',
        services: 'modules/custom/checkdesk_angularjs/js/services'
    },
    shim: {
        'angular' : {'exports' : 'angular'},
        'mainController' :['angular','app'],
        'homeController': ['angular','app'],
        'listUsersController': ['angular','app'],
        'listNodesController': ['angular','app'],
        'listReportsController': ['angular','app'],
        'angularBootstrap': {
            deps:['angular'],
            'exports':'angular.bootstrap'
        },
        'angularUi': {
            deps:['angular'],
            'exports':'angular.ui'
        }
    },
    priority: [
        "angular"
    ]

});

require( [
    'angular',
    'app',
    '/sites/all/modules/custom/checkdesk_angularjs/js/route.js',
    'mainController',
    'homeController',
    'listUsersController',
    'listNodesController',
    'listReportsController',
    'services'
],function (angular, app, routes) {
    angular.element(document).ready(function () {
        angular.bootstrap(document, ['myapp']);
    });
});
