<?php
/**
 * @file
 * write_tests.default_lessons.inc
 */

/**
 * Implements hook_default_lessons().
 */
function write_tests_default_lessons() {
  $export = array();

  $lessons = new stdClass;
  $lessons->disabled = FALSE; /* Edit this to true to make a default lessons disabled initially */
  $lessons->api_version = 1;
  $lessons->name = 'write_tests';
  $lessons->title = 'Write tests';
  $lessons->author = '';
  $lessons->project = 'learn_drupal';
  $lessons->project_type = 'core';
  $lessons->lesson_type = 'configuration';
  $lessons->description = '';
  $lessons->version = '7';
  $lessons->steps = 'This lesson is not written yet. Want to help write it?

<ol>
  <li>Please edit this lesson here: <a href=\'/admin/structure/lessons\'>admin/structure/lessons</a></li>
  <li>Export the lesson as a feature module by clicking the "Recreate" link here: <a href=\'admin/structure/features\'>admin/structure/features</a> </li>
  <li>Submit your lesson by opening a ticket and uploading your module here: http://drupal.org/project/issues/learn</li>
</ol>';
  $lessons->permission = '';
  $export['write_tests'] = $lessons;

  return $export;
}