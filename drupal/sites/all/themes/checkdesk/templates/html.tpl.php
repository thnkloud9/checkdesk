<!DOCTYPE html>
<!--[if lt IE 7]>      <html class="no-js lt-ie9 lt-ie8 lt-ie7"> <![endif]-->
<!--[if IE 7]>         <html class="no-js lt-ie9 lt-ie8"> <![endif]-->
<!--[if IE 8]>         <html class="no-js lt-ie9"> <![endif]-->
<!--[if gt IE 8]><!--> <html class="no-js"> <!--<![endif]-->
    <head>
        <meta charset="utf-8" />
        <!--[if IE 8]> <meta http-equiv="X-UA-Compatible" content="IE=8" />  <![endif]-->
        <!--[if gt IE 8]><!--> <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" /> <!--<![endif]-->
        <title><?php print $head_title; ?></title>
        <meta name="description" content="" />
        <meta name="viewport" content="initial-scale=1, maximum-scale=1, width=device-width, user-scalable=no" />
        <?php print $head; ?>
        <?php print $scripts; ?>
        <?php print $styles; ?>
    </head>
    <body class="<?php print $classes; ?>" id="main-body">
        <div class="page-container">
            <!--[if lt IE 7]>
                <p class="chromeframe">You are using an outdated browser. <a href="http://browsehappy.com/">Upgrade your browser today</a> or <a href="http://www.google.com/chromeframe/?redirect=true">install Google Chrome Frame</a> to better experience this site.</p>
            <![endif]-->
            <?php print $page_top; ?>
            <?php print $page; ?>
            <?php print $page_bottom; ?>
        </div>
    </body>
</html>
