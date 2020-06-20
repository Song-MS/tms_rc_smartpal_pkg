# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_tms_msg_ts_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED tms_msg_ts_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(tms_msg_ts_FOUND FALSE)
  elseif(NOT tms_msg_ts_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(tms_msg_ts_FOUND FALSE)
  endif()
  return()
endif()
set(_tms_msg_ts_CONFIG_INCLUDED TRUE)

# output package information
if(NOT tms_msg_ts_FIND_QUIETLY)
  message(STATUS "Found tms_msg_ts: 1.0.0 (${tms_msg_ts_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'tms_msg_ts' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(tms_msg_ts_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_cmake-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${tms_msg_ts_DIR}/${_extra}")
endforeach()
