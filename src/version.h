#pragma once

// The version string.  Its components are:
//
// <feature year>.<purpose>.<update number>
//
// where,
//
//   feature year:  features are tied to a yearly release cycle and this
//                  number indicates the yearly feature set that this version
//                  of supports.
//
//   purpose:       The purpose of this build, usually named after the reason
//                  that a branch is cut.  On trunk it will be "master", and on
//                  LTS branches for example it will be "lts".
//
//   update number: The current update revision number (e.g. release number)
//                  for a given pair of values above.  This will always be 0 on
//                  trunk.  When a release branch is cut, this should be
//                  modified to start at 1, and be incremented each time a
//                  release is cut.
//.
#define SKG_VERSION "20.master.0"
