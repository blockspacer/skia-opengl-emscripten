// This is generated file. Do not modify directly.
// Path to the code generator: tools/generate_library_loader/generate_library_loader.py .

#include "libudev0.h"

#include <dlfcn.h>

// Put these sanity checks here so that they fire at most once
// (to avoid cluttering the build output).
#if !defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN) && !defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
#error neither LIBRARY_LOADER_LIBUDEV0_H_DLOPEN nor LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED defined
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN) && defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
#error both LIBRARY_LOADER_LIBUDEV0_H_DLOPEN and LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED defined
#endif

LibUdev0Loader::LibUdev0Loader() : loaded_(false) {
}

LibUdev0Loader::~LibUdev0Loader() {
  CleanUp(loaded_);
}

bool LibUdev0Loader::Load(const std::string& library_name) {
  if (loaded_)
    return false;

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  library_ = dlopen(library_name.c_str(), RTLD_LAZY);
  if (!library_)
    return false;
#endif


#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_device_get_action =
      reinterpret_cast<decltype(this->udev_device_get_action)>(
          dlsym(library_, "udev_device_get_action"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_device_get_action = &::udev_device_get_action;
#endif
  if (!udev_device_get_action) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_device_get_devnode =
      reinterpret_cast<decltype(this->udev_device_get_devnode)>(
          dlsym(library_, "udev_device_get_devnode"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_device_get_devnode = &::udev_device_get_devnode;
#endif
  if (!udev_device_get_devnode) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_device_get_parent =
      reinterpret_cast<decltype(this->udev_device_get_parent)>(
          dlsym(library_, "udev_device_get_parent"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_device_get_parent = &::udev_device_get_parent;
#endif
  if (!udev_device_get_parent) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_device_get_parent_with_subsystem_devtype =
      reinterpret_cast<decltype(this->udev_device_get_parent_with_subsystem_devtype)>(
          dlsym(library_, "udev_device_get_parent_with_subsystem_devtype"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_device_get_parent_with_subsystem_devtype = &::udev_device_get_parent_with_subsystem_devtype;
#endif
  if (!udev_device_get_parent_with_subsystem_devtype) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_device_get_property_value =
      reinterpret_cast<decltype(this->udev_device_get_property_value)>(
          dlsym(library_, "udev_device_get_property_value"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_device_get_property_value = &::udev_device_get_property_value;
#endif
  if (!udev_device_get_property_value) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_device_get_subsystem =
      reinterpret_cast<decltype(this->udev_device_get_subsystem)>(
          dlsym(library_, "udev_device_get_subsystem"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_device_get_subsystem = &::udev_device_get_subsystem;
#endif
  if (!udev_device_get_subsystem) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_device_get_sysattr_value =
      reinterpret_cast<decltype(this->udev_device_get_sysattr_value)>(
          dlsym(library_, "udev_device_get_sysattr_value"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_device_get_sysattr_value = &::udev_device_get_sysattr_value;
#endif
  if (!udev_device_get_sysattr_value) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_device_get_sysname =
      reinterpret_cast<decltype(this->udev_device_get_sysname)>(
          dlsym(library_, "udev_device_get_sysname"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_device_get_sysname = &::udev_device_get_sysname;
#endif
  if (!udev_device_get_sysname) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_device_get_syspath =
      reinterpret_cast<decltype(this->udev_device_get_syspath)>(
          dlsym(library_, "udev_device_get_syspath"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_device_get_syspath = &::udev_device_get_syspath;
#endif
  if (!udev_device_get_syspath) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_device_new_from_devnum =
      reinterpret_cast<decltype(this->udev_device_new_from_devnum)>(
          dlsym(library_, "udev_device_new_from_devnum"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_device_new_from_devnum = &::udev_device_new_from_devnum;
#endif
  if (!udev_device_new_from_devnum) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_device_new_from_subsystem_sysname =
      reinterpret_cast<decltype(this->udev_device_new_from_subsystem_sysname)>(
          dlsym(library_, "udev_device_new_from_subsystem_sysname"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_device_new_from_subsystem_sysname = &::udev_device_new_from_subsystem_sysname;
#endif
  if (!udev_device_new_from_subsystem_sysname) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_device_new_from_syspath =
      reinterpret_cast<decltype(this->udev_device_new_from_syspath)>(
          dlsym(library_, "udev_device_new_from_syspath"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_device_new_from_syspath = &::udev_device_new_from_syspath;
#endif
  if (!udev_device_new_from_syspath) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_device_unref =
      reinterpret_cast<decltype(this->udev_device_unref)>(
          dlsym(library_, "udev_device_unref"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_device_unref = &::udev_device_unref;
#endif
  if (!udev_device_unref) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_enumerate_add_match_subsystem =
      reinterpret_cast<decltype(this->udev_enumerate_add_match_subsystem)>(
          dlsym(library_, "udev_enumerate_add_match_subsystem"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_enumerate_add_match_subsystem = &::udev_enumerate_add_match_subsystem;
#endif
  if (!udev_enumerate_add_match_subsystem) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_enumerate_get_list_entry =
      reinterpret_cast<decltype(this->udev_enumerate_get_list_entry)>(
          dlsym(library_, "udev_enumerate_get_list_entry"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_enumerate_get_list_entry = &::udev_enumerate_get_list_entry;
#endif
  if (!udev_enumerate_get_list_entry) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_enumerate_new =
      reinterpret_cast<decltype(this->udev_enumerate_new)>(
          dlsym(library_, "udev_enumerate_new"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_enumerate_new = &::udev_enumerate_new;
#endif
  if (!udev_enumerate_new) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_enumerate_scan_devices =
      reinterpret_cast<decltype(this->udev_enumerate_scan_devices)>(
          dlsym(library_, "udev_enumerate_scan_devices"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_enumerate_scan_devices = &::udev_enumerate_scan_devices;
#endif
  if (!udev_enumerate_scan_devices) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_enumerate_unref =
      reinterpret_cast<decltype(this->udev_enumerate_unref)>(
          dlsym(library_, "udev_enumerate_unref"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_enumerate_unref = &::udev_enumerate_unref;
#endif
  if (!udev_enumerate_unref) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_list_entry_get_next =
      reinterpret_cast<decltype(this->udev_list_entry_get_next)>(
          dlsym(library_, "udev_list_entry_get_next"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_list_entry_get_next = &::udev_list_entry_get_next;
#endif
  if (!udev_list_entry_get_next) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_list_entry_get_name =
      reinterpret_cast<decltype(this->udev_list_entry_get_name)>(
          dlsym(library_, "udev_list_entry_get_name"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_list_entry_get_name = &::udev_list_entry_get_name;
#endif
  if (!udev_list_entry_get_name) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_monitor_enable_receiving =
      reinterpret_cast<decltype(this->udev_monitor_enable_receiving)>(
          dlsym(library_, "udev_monitor_enable_receiving"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_monitor_enable_receiving = &::udev_monitor_enable_receiving;
#endif
  if (!udev_monitor_enable_receiving) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_monitor_filter_add_match_subsystem_devtype =
      reinterpret_cast<decltype(this->udev_monitor_filter_add_match_subsystem_devtype)>(
          dlsym(library_, "udev_monitor_filter_add_match_subsystem_devtype"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_monitor_filter_add_match_subsystem_devtype = &::udev_monitor_filter_add_match_subsystem_devtype;
#endif
  if (!udev_monitor_filter_add_match_subsystem_devtype) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_monitor_get_fd =
      reinterpret_cast<decltype(this->udev_monitor_get_fd)>(
          dlsym(library_, "udev_monitor_get_fd"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_monitor_get_fd = &::udev_monitor_get_fd;
#endif
  if (!udev_monitor_get_fd) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_monitor_new_from_netlink =
      reinterpret_cast<decltype(this->udev_monitor_new_from_netlink)>(
          dlsym(library_, "udev_monitor_new_from_netlink"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_monitor_new_from_netlink = &::udev_monitor_new_from_netlink;
#endif
  if (!udev_monitor_new_from_netlink) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_monitor_receive_device =
      reinterpret_cast<decltype(this->udev_monitor_receive_device)>(
          dlsym(library_, "udev_monitor_receive_device"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_monitor_receive_device = &::udev_monitor_receive_device;
#endif
  if (!udev_monitor_receive_device) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_monitor_unref =
      reinterpret_cast<decltype(this->udev_monitor_unref)>(
          dlsym(library_, "udev_monitor_unref"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_monitor_unref = &::udev_monitor_unref;
#endif
  if (!udev_monitor_unref) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_new =
      reinterpret_cast<decltype(this->udev_new)>(
          dlsym(library_, "udev_new"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_new = &::udev_new;
#endif
  if (!udev_new) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_set_log_fn =
      reinterpret_cast<decltype(this->udev_set_log_fn)>(
          dlsym(library_, "udev_set_log_fn"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_set_log_fn = &::udev_set_log_fn;
#endif
  if (!udev_set_log_fn) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_set_log_priority =
      reinterpret_cast<decltype(this->udev_set_log_priority)>(
          dlsym(library_, "udev_set_log_priority"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_set_log_priority = &::udev_set_log_priority;
#endif
  if (!udev_set_log_priority) {
    CleanUp(true);
    return false;
  }

#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  udev_unref =
      reinterpret_cast<decltype(this->udev_unref)>(
          dlsym(library_, "udev_unref"));
#endif
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DT_NEEDED)
  udev_unref = &::udev_unref;
#endif
  if (!udev_unref) {
    CleanUp(true);
    return false;
  }


  loaded_ = true;
  return true;
}

void LibUdev0Loader::CleanUp(bool unload) {
#if defined(LIBRARY_LOADER_LIBUDEV0_H_DLOPEN)
  if (unload) {
    dlclose(library_);
    library_ = NULL;
  }
#endif
  loaded_ = false;
  udev_device_get_action = NULL;
  udev_device_get_devnode = NULL;
  udev_device_get_parent = NULL;
  udev_device_get_parent_with_subsystem_devtype = NULL;
  udev_device_get_property_value = NULL;
  udev_device_get_subsystem = NULL;
  udev_device_get_sysattr_value = NULL;
  udev_device_get_sysname = NULL;
  udev_device_get_syspath = NULL;
  udev_device_new_from_devnum = NULL;
  udev_device_new_from_subsystem_sysname = NULL;
  udev_device_new_from_syspath = NULL;
  udev_device_unref = NULL;
  udev_enumerate_add_match_subsystem = NULL;
  udev_enumerate_get_list_entry = NULL;
  udev_enumerate_new = NULL;
  udev_enumerate_scan_devices = NULL;
  udev_enumerate_unref = NULL;
  udev_list_entry_get_next = NULL;
  udev_list_entry_get_name = NULL;
  udev_monitor_enable_receiving = NULL;
  udev_monitor_filter_add_match_subsystem_devtype = NULL;
  udev_monitor_get_fd = NULL;
  udev_monitor_new_from_netlink = NULL;
  udev_monitor_receive_device = NULL;
  udev_monitor_unref = NULL;
  udev_new = NULL;
  udev_set_log_fn = NULL;
  udev_set_log_priority = NULL;
  udev_unref = NULL;

}
