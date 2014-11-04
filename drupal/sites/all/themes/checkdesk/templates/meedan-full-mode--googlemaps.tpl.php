<div class="media-holder media-inline-holder">
  <?php if(isset($embed->html)) : ?>
    <div class="media">
      <?php print $embed->html; ?>
    </div>
  <?php endif; ?>
  <div class="media-content">
    <span class="title"><?php print l($node->title, 'node/' . $node->nid , array('html' => TRUE)); ?></span>
    <span class="description"><?php print $embed->description; ?></span>
    <?php if(isset($author_name)) : ?>
      <span class="author"><?php print $author_name ?></span>
    <?php elseif(isset($provider_name)) : ?>
      <span class="provider"><?php print $provider_name ?></span>
    <?php endif; ?>
    <span>
      <?php if(isset($favicon_link)) : ?><span class="provider-icon"><?php print $favicon_link ?></span><?php endif; ?> <span class="ts"><?php print $media_creation_info; ?></span>
    </span>
  </div>
  <?php if(isset($report_status['status'])) : ?>
    <span class="media-status">
      <?php print $report_status['status']; ?>
    </span>
  <?php endif; ?>
  What the fuck.
</div> <!-- /media-holder -->