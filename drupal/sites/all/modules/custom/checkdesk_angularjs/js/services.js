
'use strict';

define(['angular',Drupal.settings.custom_modules + '/checkdesk_angularjs/js/helpers/links.js'], function (angular,links) {
	
	/* Services */
	angular.module('myapp.services', [])
        /***** User Service *****/
        .service('User_Service', ['$http', function ($http) {
            /**
             * get token
             *
             * @returns {HttpPromise}
             */
            this.token = function () {
                return $http.get(links.token());
            };

            /**
             * get current user
             *
             * @returns {HttpPromise}
             */
            this.users = function () {
                return $http.get(links.users());
            }
        }])

        /***** Node Service *****/
        .service('Node_Service', ['$http', function ($http) {
            /**
             * get token
             *
             * @returns {HttpPromise}
             */
            this.token = function () {
                return $http.get(links.token());
            };

            /**
             * get current user
             *
             * @returns {HttpPromise}
             */
            this.nodes = function () {
                return $http.get(links.nodes());
            }
        }])

        /***** Node Service *****/
        .service('Media_Service', ['$http', function ($http) {
            /**
             * get token
             *
             * @returns {HttpPromise}
             */
            this.token = function () {
                return $http.get(links.token());
            };

            /**
             * get current user
             *
             * @returns {HttpPromise}
             */
            this.reports = function () {
                return $http.get(links.reports());
            }
        }])

});


