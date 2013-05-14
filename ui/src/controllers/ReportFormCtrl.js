var ReportFormCtrl = ['$scope', '$routeParams', '$location', 'Report', function ($scope, $routeParams, $location, Report) {
  if ($routeParams.nid) {
    $scope.report = Report.get({ nid: $routeParams.nid });
  } else {
    $scope.report = new Report({
      title: '',
      type: 'media',
      body: {
        und: [
          {
            url: ''
          }
        ]
      },
      field_link: {
        und: [
          {
            url: ''
          }
        ]
      }
    });
  }

  $scope.submit = function() {
    $scope.report.save(function (report) {
      $location.path('/report/' + report.nid);
    });
    return false;
  };

  $scope.cancel = function () {
    if ($routeParams.nid) {
      $location.path('/report/' + $routeParams.nid);
    } else {
      $location.path('/');
    }
  };
}];

app.controller('ReportFormCtrl', ReportFormCtrl);
