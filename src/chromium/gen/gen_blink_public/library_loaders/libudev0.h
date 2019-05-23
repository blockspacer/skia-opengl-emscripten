// This is generated file. Do not modify directly.
// Path to the code generator: tools/generate_library_loader/generate_library_loader.py .

#ifndef LIBRARY_LOADER_LIBUDEV0_H
#define LIBRARY_LOADER_LIBUDEV0_H

#include "third_party/libudev/libudev0.h"
#define LIBRARY_LOADER_LIBUDEV0_H_DLOPEN


#include <string>

class LibUdev0Loader {
 public:
  LibUdev0Loader();
  ~LibUdev0Loader();

  bool Load(const std::string& library_name)
      __attribute__((warn_unused_result));

  bool loaded() const { return loaded_; }

  decltype(&::udev_device_get_action) udev_device_get_action;
  decltype(&::udev_device_get_devnode) udev_device_get_devnode;
  decltype(&::udev_device_get_parent) udev_device_get_parent;
  decltype(&::udev_device_get_parent_with_subsystem_devtype) udev_device_get_parent_with_subsystem_devtype;
  decltype(&::udev_device_get_property_value) udev_device_get_property_value;
  decltype(&::udev_device_get_subsystem) udev_device_get_subsystem;
  decltype(&::udev_device_get_sysattr_value) udev_device_get_sysattr_value;
  decltype(&::udev_device_get_sysname) udev_device_get_sysname;
  decltype(&::udev_device_get_syspath) udev_device_get_syspath;
  decltype(&::udev_device_new_from_devnum) udev_device_new_from_devnum;
  decltype(&::udev_device_new_from_subsystem_sysname) udev_device_new_from_subsystem_sysname;
  decltype(&::udev_device_new_from_syspath) udev_device_new_from_syspath;
  decltype(&::udev_device_unref) udev_device_unref;
  decltype(&::udev_enumerate_add_match_subsystem) udev_enumerate_add_match_subsystem;
  decltype(&::udev_enumerate_get_list_entry) udev_enumerate_get_list_entry;
  decltype(&::udev_enumerate_new) udev_enumerate_new;
  decltype(&::udev_enumerate_scan_devices) udev_enumerate_scan_devices;
  decltype(&::udev_enumerate_unref) udev_enumerate_unref;
  decltype(&::udev_list_entry_get_next) udev_list_entry_get_next;
  decltype(&::udev_list_entry_get_name) udev_list_entry_get_name;
  decltype(&::udev_monitor_enable_receiving) udev_monitor_enable_receiving;
  decltype(&::udev_monitor_filter_add_match_subsystem_devtype) udev_monitor_filter_add_match_subsystem_devtype;
  decltype(&::udev_monitor_get_fd) udev_monitor_get_fd;
  decltype(&::udev_monitor_new_from_netlink) udev_monitor_new_from_netlink;
  decltype(&::udev_monitor_receive_device) udev_monitor_receive_device;
  decltype(&::udev_monitor_unref) udev_monitor_unref;
  decltype(&::udev_new) udev_new;
  decltype(&::udev_set_log_fn) udev_set_log_fn;
  decltype(&::udev_set_log_priority) udev_set_log_priority;
  decltype(&::udev_unref) udev_unref;


 private:
  void CleanUp(bool unload);

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  void* library_;
#endif

  bool loaded_;

  // Disallow copy constructor and assignment operator.
  LibUdev0Loader(const LibUdev0Loader&);
  void operator=(const LibUdev0Loader&);
};

#endif  // LIBRARY_LOADER_LIBUDEV0_H
