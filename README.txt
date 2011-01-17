My Bookmarks
============

My Bookmarks allows a user to bookmark any page on the site, giving each one a
unique name. The majority of this module is exportables and glue code that ties
Flag, Flag Page, Flag Note, Views and Token together. Because of this approach
It should be easy to modify and extend.

TODO:
-----
* An install file is needed to set additional variables for Flag Note.
* Further tweaks to the UI and code refinement.
* Remove dependency on lib_views so that the module can be shared.

COMPATIBILITY NOTES:
--------------------
* Flag Page 2.1 or higher is required due to a previous compatibility issue and
  the required Views integration. See http://drupal.org/node/1017484 and 
  http://drupal.org/node/1022818.
- There is a known issue with flag removal not removing the attached note. See
  http://drupal.org/node/1029646 for the issue and patch.
- Flag Note patch at http://drupal.org/node/1023204 recommended to see all available token replacement options.

AUTHORS:
--------
Sheetal Yeol
Rick Vugteveen (rickvug)

Thank you to Ravi.J, alexpott and gunzip for assistance with patches to support this functionality.