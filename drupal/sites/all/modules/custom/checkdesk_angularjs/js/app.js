define([
    'angular',
    'angularBootstrap',
    'angularUi',
    'services'
], function (angular, services) {

    return angular.module('myapp', [
        'ui.bootstrap',
        'ui.router',
        'myapp.services'
    ])

});