# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_doublenode_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED doublenode_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(doublenode_FOUND FALSE)
  elseif(NOT doublenode_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(doublenode_FOUND FALSE)
  endif()
  return()
endif()
set(_doublenode_CONFIG_INCLUDED TRUE)

# output package information
if(NOT doublenode_FIND_QUIETLY)
  message(STATUS "Found doublenode: 0.0.0 (${doublenode_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'doublenode' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(doublenode_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${doublenode_DIR}/${_extra}")
endforeach()
