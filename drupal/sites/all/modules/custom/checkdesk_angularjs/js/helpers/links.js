
define([],function(){
    return {
        /*
            all POST, PUT, DELETE Request should have the following in the request header
            "Content-Type": "application/x-www-form-urlencoded"
            "X-CSRF-Token": "Fh1I5djzKSGyGGgy0m9fxog2wwiyElwKKF3-l_Wh8-s"

             - 200 `OK` - the request was successful (some API calls may return 201 instead). | GET,PUT
             - 201 `Created` - the request was successful and a resource was created. | POST
             - 204 `No Content` - the request was successful but there is no representation to return (i.e. the response is empty). | DELETE
             - 400 `Bad Request` - the request could not be understood or was missing required parameters.
             - 401 `Unauthorized` - authentication failed or user doesn't have permissions for requested operation.
             - 403 `Forbidden` - access denied.
             - 404 `Not Found` - resource was not found.
             - 405 `Method Not Allowed` - requested method is not supported for resource.
             - 429 `Too Many Requests` - exceeded KirkeWeb API limits. Pause requests, wait up to one minute, and try again.
         */

        baseUrl: Drupal.settings.basePath,

        /**
         * Endpoints that provide system wide functionality like authentication
         * @returns {string}
         */
        token: function() {
            return this.baseUrl+'services/session/token';
        },

        users:function() {
            return this.baseUrl+'api/user.json';
        },

        nodes:function() {
            return this.baseUrl+'api/node.json';
        },

        reports:function(page, pagesize) {
            return this.baseUrl+'api/media.json?page='+ page +'&pagesize='+ pagesize;
        }

    }
});