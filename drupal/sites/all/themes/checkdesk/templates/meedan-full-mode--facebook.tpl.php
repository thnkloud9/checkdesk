<div class="media">
  <?php if(isset($embed->html)) : ?>
      <?php if($embed->type == 'video') : ?>
        <div class="video--facebook">
          <?php print $embed->html; ?>
        </div>
      <?php else : ?>
        <div class="facebook-holder">
          <?php print $embed->html; ?>
        </div>
      <?php endif; ?> 
  <?php elseif (isset($full_image)) : ?>
    <div class="img-holder">
      <?php print $full_image; ?>
    </div>
  <?php endif ;?>
</div>
<?php if (isset($full_image) || $embed->type == 'video') : ?>
  <div class="media-content">
    <span class="title">
      <?php print l($node->title, 'node/' . $node->nid , array('html' => TRUE)); ?>
    </span>
    <?php if(isset($media_description)) : ?><span class="description expandable"><?php print $media_description; ?></span><?php endif; ?>
    <?php if(isset($author_name)) : ?><span class="author"><?php print $author_name ?></span><?php endif; ?>
    <span>
      <?php if(isset($favicon_link)) : ?><span class="provider-icon"><?php print $favicon_link ?></span><?php endif; ?> <span class="ts"><?php print $media_creation_info; ?></span>
    </span>
  </div>
<?php endif ;?>
<?php if(isset($report_status['status'])) : ?>
  <span class="media-status">
    <?php print $report_status['status']; ?>
  </span>
<?php endif; ?>