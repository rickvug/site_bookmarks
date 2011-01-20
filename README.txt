My Bookmarks
============

My Bookmarks allows a user to bookmark any page on the site, giving each one a
unique name. The majority of this module is exportables and glue code that ties
Flag, Flag Page, Flag Note, Views and Token together. Because of this approach
It should be easy to modify and extend.

TODO:
-----
* Allow for anonymous flagging link without Sessions API available.
* An install file is needed to set additional variables for Flag Note. Note that
  Flag Note itself may be re-factored so that configuration is properly exportable.
* Further tweaks to the UI and code refinement.
* Remove dependency on lib_views so that the module can be shared.
* Move to older version of Views 2.x API for backwards compatibility.

COMPATIBILITY NOTES:
--------------------
* Flag Page 2.1 or higher is required due to a previous compatibility issue and
  the required Views integration. See http://drupal.org/node/1017484 and 
  http://drupal.org/node/1022818.
* There is a known issue with flag removal not removing the attached note. See
  http://drupal.org/node/1029646 for the issue and patch.
* Anonymous bookmarking requires a patch to Flag Page found at http://drupal.org/node/1033886.
* Flag Note patch at http://drupal.org/node/1023204 recommended to see all available token replacement options.
* Views 3. Views 2.x support is planned.

AUTHORS:
--------
Sheetal Yeol (drupaltechie)
Rick Vugteveen (rickvug)

Thank you to Ravi.J, alexpott and gunzip for assistance with patches to support this functionality.