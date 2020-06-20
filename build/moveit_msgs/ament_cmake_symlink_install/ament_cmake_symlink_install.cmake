# generated from
# ament_cmake_core/cmake/symlink_install/ament_cmake_symlink_install.cmake.in

# create empty symlink install manifest before starting install step
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt")

#
# Reimplement CMake install(DIRECTORY) command to use symlinks instead of
# copying resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_directory cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "DIRECTORY;PATTERN;PATTERN_EXCLUDE" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_directory() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/common/colcon_ws/install/moveit_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # default pattern to include
  if(NOT ARG_PATTERN)
    set(ARG_PATTERN "*")
  endif()

  # iterate over directories
  foreach(dir ${ARG_DIRECTORY})
    # make dir an absolute path
    if(NOT IS_ABSOLUTE "${dir}")
      set(dir "${cmake_current_source_dir}/${dir}")
    endif()

    if(EXISTS "${dir}")
      # if directory has no trailing slash
      # append folder name to destination
      set(destination "${ARG_DESTINATION}")
      string(LENGTH "${dir}" length)
      math(EXPR offset "${length} - 1")
      string(SUBSTRING "${dir}" ${offset} 1 dir_last_char)
      if(NOT dir_last_char STREQUAL "/")
        get_filename_component(destination_name "${dir}" NAME)
        set(destination "${destination}/${destination_name}")
      else()
        # remove trailing slash
        string(SUBSTRING "${dir}" 0 ${offset} dir)
      endif()

      # glob recursive files
      set(relative_files "")
      foreach(pattern ${ARG_PATTERN})
        file(
          GLOB_RECURSE
          include_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT include_files STREQUAL "")
          list(APPEND relative_files ${include_files})
        endif()
      endforeach()
      foreach(pattern ${ARG_PATTERN_EXCLUDE})
        file(
          GLOB_RECURSE
          exclude_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT exclude_files STREQUAL "")
          list(REMOVE_ITEM relative_files ${exclude_files})
        endif()
      endforeach()
      list(SORT relative_files)

      foreach(relative_file ${relative_files})
        set(absolute_file "${dir}/${relative_file}")
        # determine link name for file including destination path
        set(symlink "${destination}/${relative_file}")

        # ensure that destination exists
        get_filename_component(symlink_dir "${symlink}" PATH)
        if(NOT EXISTS "${symlink_dir}")
          file(MAKE_DIRECTORY "${symlink_dir}")
        endif()

        _ament_cmake_symlink_install_create_symlink("${absolute_file}" "${symlink}")
      endforeach()
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_directory() can't find '${dir}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(FILES) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_files cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION;RENAME" "FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/common/colcon_ws/install/moveit_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  if(ARG_RENAME)
    list(LENGTH ARG_FILES file_count)
    if(NOT file_count EQUAL 1)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "RENAME argument but not with a single file")
    endif()
  endif()

  # iterate over files
  foreach(file ${ARG_FILES})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      if(NOT ARG_RENAME)
        set(symlink "${ARG_DESTINATION}/${filename}")
      else()
        set(symlink "${ARG_DESTINATION}/${ARG_RENAME}")
      endif()
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_files() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(PROGRAMS) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_programs cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "PROGRAMS" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_programs() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/common/colcon_ws/install/moveit_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # iterate over programs
  foreach(file ${ARG_PROGRAMS})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${ARG_DESTINATION}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_programs() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(TARGETS) command to use symlinks instead of copying
# resources.
#
# :param TARGET_FILES: the absolute files, replacing the name of targets passed
#   in as TARGETS
# :type TARGET_FILES: list of files
# :param ARGN: the same arguments as the CMake install command except that
#   keywords identifying the kind of type and the DESTINATION keyword must be
#   joined with an underscore, e.g. ARCHIVE_DESTINATION.
# :type ARGN: various
#
function(ament_cmake_symlink_install_targets)
  cmake_parse_arguments(ARG "OPTIONAL" "ARCHIVE_DESTINATION;DESTINATION;LIBRARY_DESTINATION;RUNTIME_DESTINATION"
    "TARGETS;TARGET_FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_targets() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # iterate over target files
  foreach(file ${ARG_TARGET_FILES})
    if(NOT IS_ABSOLUTE "${file}")
      message(FATAL_ERROR "ament_cmake_symlink_install_targets() target file "
        "'${file}' must be an absolute path")
    endif()

    # determine destination of file based on extension
    set(destination "")
    get_filename_component(fileext "${file}" EXT)
    if(fileext STREQUAL ".a" OR fileext STREQUAL ".lib")
      set(destination "${ARG_ARCHIVE_DESTINATION}")
    elseif(fileext STREQUAL ".dylib" OR fileext STREQUAL ".so")
      set(destination "${ARG_LIBRARY_DESTINATION}")
    elseif(fileext STREQUAL "" OR fileext STREQUAL ".dll" OR fileext STREQUAL ".exe")
      set(destination "${ARG_RUNTIME_DESTINATION}")
    endif()
    if(destination STREQUAL "")
      set(destination "${ARG_DESTINATION}")
    endif()

    # make destination an absolute path and ensure that it exists
    if(NOT IS_ABSOLUTE "${destination}")
      set(destination "/home/common/colcon_ws/install/moveit_msgs/${destination}")
    endif()
    if(NOT EXISTS "${destination}")
      file(MAKE_DIRECTORY "${destination}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${destination}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_targets() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

function(_ament_cmake_symlink_install_create_symlink absolute_file symlink)
  # register symlink for being removed during install step
  file(APPEND "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt"
    "${symlink}\n")

  # avoid any work if correct symlink is already in place
  if(EXISTS "${symlink}" AND IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    get_filename_component(real_absolute_file "${absolute_file}" REALPATH)
    if(destination STREQUAL real_absolute_file)
      message(STATUS "Up-to-date symlink: ${symlink}")
      return()
    endif()
  endif()

  message(STATUS "Symlinking: ${symlink}")
  if(EXISTS "${symlink}" OR IS_SYMLINK "${symlink}")
    file(REMOVE "${symlink}")
  endif()

  execute_process(
    COMMAND "/usr/bin/cmake" "-E" "create_symlink"
      "${absolute_file}"
      "${symlink}"
  )
  # the CMake command does not provide a return code so check manually
  if(NOT EXISTS "${symlink}" OR NOT IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    message(FATAL_ERROR
      "Could not create symlink '${symlink}' pointing to '${absolute_file}'")
  endif()
endfunction()

# end of template

message(STATUS "Execute custom install script")

# begin of custom install code

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/moveit_msgs" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/moveit_msgs" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")

# install("TARGETS" "moveit_msgs__rosidl_typesupport_c" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")
include("/home/common/colcon_ws/build/moveit_msgs/ament_cmake_symlink_install_targets_0_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(FILES "/opt/ros/dashing/lib/python3.6/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/moveit_msgs/environment")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/opt/ros/dashing/lib/python3.6/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/moveit_msgs/environment")

# install("TARGETS" "moveit_msgs__rosidl_typesupport_cpp" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")
include("/home/common/colcon_ws/build/moveit_msgs/ament_cmake_symlink_install_targets_1_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(DIRECTORY "/home/common/colcon_ws/build/moveit_msgs/rosidl_typesupport_fastrtps_c/moveit_msgs/" "DESTINATION" "include/moveit_msgs" "PATTERN_EXCLUDE" "*.cpp")
ament_cmake_symlink_install_directory("/home/common/colcon_ws/src/moveit_msgs" DIRECTORY "/home/common/colcon_ws/build/moveit_msgs/rosidl_typesupport_fastrtps_c/moveit_msgs/" "DESTINATION" "include/moveit_msgs" "PATTERN_EXCLUDE" "*.cpp")

# install("TARGETS" "moveit_msgs__rosidl_typesupport_fastrtps_c" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")
include("/home/common/colcon_ws/build/moveit_msgs/ament_cmake_symlink_install_targets_2_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(DIRECTORY "/home/common/colcon_ws/build/moveit_msgs/rosidl_generator_c/moveit_msgs/" "DESTINATION" "include/moveit_msgs" "PATTERN" "*.h")
ament_cmake_symlink_install_directory("/home/common/colcon_ws/src/moveit_msgs" DIRECTORY "/home/common/colcon_ws/build/moveit_msgs/rosidl_generator_c/moveit_msgs/" "DESTINATION" "include/moveit_msgs" "PATTERN" "*.h")

# install("TARGETS" "moveit_msgs__rosidl_generator_c" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")
include("/home/common/colcon_ws/build/moveit_msgs/ament_cmake_symlink_install_targets_3_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(DIRECTORY "/home/common/colcon_ws/build/moveit_msgs/rosidl_typesupport_fastrtps_cpp/moveit_msgs/" "DESTINATION" "include/moveit_msgs" "PATTERN_EXCLUDE" "*.cpp")
ament_cmake_symlink_install_directory("/home/common/colcon_ws/src/moveit_msgs" DIRECTORY "/home/common/colcon_ws/build/moveit_msgs/rosidl_typesupport_fastrtps_cpp/moveit_msgs/" "DESTINATION" "include/moveit_msgs" "PATTERN_EXCLUDE" "*.cpp")

# install("TARGETS" "moveit_msgs__rosidl_typesupport_fastrtps_cpp" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")
include("/home/common/colcon_ws/build/moveit_msgs/ament_cmake_symlink_install_targets_4_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(DIRECTORY "/home/common/colcon_ws/build/moveit_msgs/rosidl_generator_cpp/moveit_msgs/" "DESTINATION" "include/moveit_msgs" "PATTERN" "*.hpp")
ament_cmake_symlink_install_directory("/home/common/colcon_ws/src/moveit_msgs" DIRECTORY "/home/common/colcon_ws/build/moveit_msgs/rosidl_generator_cpp/moveit_msgs/" "DESTINATION" "include/moveit_msgs" "PATTERN" "*.hpp")

# install(DIRECTORY "/home/common/colcon_ws/build/moveit_msgs/rosidl_typesupport_introspection_c/moveit_msgs/" "DESTINATION" "include/moveit_msgs" "PATTERN" "*.h")
ament_cmake_symlink_install_directory("/home/common/colcon_ws/src/moveit_msgs" DIRECTORY "/home/common/colcon_ws/build/moveit_msgs/rosidl_typesupport_introspection_c/moveit_msgs/" "DESTINATION" "include/moveit_msgs" "PATTERN" "*.h")

# install("TARGETS" "moveit_msgs__rosidl_typesupport_introspection_c" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")
include("/home/common/colcon_ws/build/moveit_msgs/ament_cmake_symlink_install_targets_5_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(DIRECTORY "/home/common/colcon_ws/build/moveit_msgs/rosidl_typesupport_introspection_cpp/moveit_msgs/" "DESTINATION" "include/moveit_msgs" "PATTERN" "*.hpp")
ament_cmake_symlink_install_directory("/home/common/colcon_ws/src/moveit_msgs" DIRECTORY "/home/common/colcon_ws/build/moveit_msgs/rosidl_typesupport_introspection_cpp/moveit_msgs/" "DESTINATION" "include/moveit_msgs" "PATTERN" "*.hpp")

# install("TARGETS" "moveit_msgs__rosidl_typesupport_introspection_cpp" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")
include("/home/common/colcon_ws/build/moveit_msgs/ament_cmake_symlink_install_targets_6_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_environment_hooks/pythonpath.sh" "DESTINATION" "share/moveit_msgs/environment")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_environment_hooks/pythonpath.sh" "DESTINATION" "share/moveit_msgs/environment")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_generator_py/moveit_msgs/__init__.py" "DESTINATION" "lib/python3.6/site-packages/moveit_msgs")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_generator_py/moveit_msgs/__init__.py" "DESTINATION" "lib/python3.6/site-packages/moveit_msgs")

# install(DIRECTORY "/home/common/colcon_ws/build/moveit_msgs/rosidl_generator_py/moveit_msgs/msg/" "DESTINATION" "lib/python3.6/site-packages/moveit_msgs/msg" "PATTERN" "*.py")
ament_cmake_symlink_install_directory("/home/common/colcon_ws/src/moveit_msgs" DIRECTORY "/home/common/colcon_ws/build/moveit_msgs/rosidl_generator_py/moveit_msgs/msg/" "DESTINATION" "lib/python3.6/site-packages/moveit_msgs/msg" "PATTERN" "*.py")

# install(DIRECTORY "/home/common/colcon_ws/build/moveit_msgs/rosidl_generator_py/moveit_msgs/srv/" "DESTINATION" "lib/python3.6/site-packages/moveit_msgs/srv" "PATTERN" "*.py")
ament_cmake_symlink_install_directory("/home/common/colcon_ws/src/moveit_msgs" DIRECTORY "/home/common/colcon_ws/build/moveit_msgs/rosidl_generator_py/moveit_msgs/srv/" "DESTINATION" "lib/python3.6/site-packages/moveit_msgs/srv" "PATTERN" "*.py")

# install(DIRECTORY "/home/common/colcon_ws/build/moveit_msgs/rosidl_generator_py/moveit_msgs/action/" "DESTINATION" "lib/python3.6/site-packages/moveit_msgs/action" "PATTERN" "*.py")
ament_cmake_symlink_install_directory("/home/common/colcon_ws/src/moveit_msgs" DIRECTORY "/home/common/colcon_ws/build/moveit_msgs/rosidl_generator_py/moveit_msgs/action/" "DESTINATION" "lib/python3.6/site-packages/moveit_msgs/action" "PATTERN" "*.py")

# install("TARGETS" "moveit_msgs__rosidl_typesupport_c__pyext" "DESTINATION" "lib/python3.6/site-packages/moveit_msgs")
include("/home/common/colcon_ws/build/moveit_msgs/ament_cmake_symlink_install_targets_7_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "moveit_msgs__rosidl_typesupport_fastrtps_c__pyext" "DESTINATION" "lib/python3.6/site-packages/moveit_msgs")
include("/home/common/colcon_ws/build/moveit_msgs/ament_cmake_symlink_install_targets_8_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "moveit_msgs__python" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")
include("/home/common/colcon_ws/build/moveit_msgs/ament_cmake_symlink_install_targets_9_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/AllowedCollisionEntry.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/AllowedCollisionEntry.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/AllowedCollisionMatrix.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/AllowedCollisionMatrix.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/AttachedCollisionObject.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/AttachedCollisionObject.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/BoundingVolume.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/BoundingVolume.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/CartesianPoint.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/CartesianPoint.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/CartesianTrajectory.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/CartesianTrajectory.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/CartesianTrajectoryPoint.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/CartesianTrajectoryPoint.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/CollisionObject.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/CollisionObject.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/ConstraintEvalResult.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/ConstraintEvalResult.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/Constraints.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/Constraints.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/CostSource.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/CostSource.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/ContactInformation.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/ContactInformation.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/DisplayTrajectory.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/DisplayTrajectory.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/DisplayRobotState.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/DisplayRobotState.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/GenericTrajectory.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/GenericTrajectory.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/Grasp.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/Grasp.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/GripperTranslation.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/GripperTranslation.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/JointConstraint.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/JointConstraint.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/JointLimits.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/JointLimits.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/LinkPadding.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/LinkPadding.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/LinkScale.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/LinkScale.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/MotionPlanRequest.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/MotionPlanRequest.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/MotionPlanResponse.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/MotionPlanResponse.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/MotionPlanDetailedResponse.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/MotionPlanDetailedResponse.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/MoveItErrorCodes.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/MoveItErrorCodes.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/TrajectoryConstraints.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/TrajectoryConstraints.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/ObjectColor.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/ObjectColor.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/OrientationConstraint.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/OrientationConstraint.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/OrientedBoundingBox.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/OrientedBoundingBox.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/PlaceLocation.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/PlaceLocation.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/PlannerInterfaceDescription.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/PlannerInterfaceDescription.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/PlannerParams.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/PlannerParams.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/PlanningScene.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/PlanningScene.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/PlanningSceneComponents.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/PlanningSceneComponents.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/PlanningSceneWorld.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/PlanningSceneWorld.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/PlanningOptions.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/PlanningOptions.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/PositionConstraint.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/PositionConstraint.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/RobotState.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/RobotState.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/RobotTrajectory.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/RobotTrajectory.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/VisibilityConstraint.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/VisibilityConstraint.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/WorkspaceParameters.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/WorkspaceParameters.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/KinematicSolverInfo.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/KinematicSolverInfo.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/PositionIKRequest.idl" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/msg/PositionIKRequest.idl" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/GetMotionPlan.idl" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/GetMotionPlan.idl" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/ExecuteKnownTrajectory.idl" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/ExecuteKnownTrajectory.idl" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/GetStateValidity.idl" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/GetStateValidity.idl" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/GetCartesianPath.idl" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/GetCartesianPath.idl" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/GetPlanningScene.idl" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/GetPlanningScene.idl" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/GraspPlanning.idl" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/GraspPlanning.idl" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/ApplyPlanningScene.idl" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/ApplyPlanningScene.idl" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/QueryPlannerInterfaces.idl" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/QueryPlannerInterfaces.idl" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/GetPositionFK.idl" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/GetPositionFK.idl" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/GetPositionIK.idl" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/GetPositionIK.idl" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/GetPlannerParams.idl" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/GetPlannerParams.idl" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/SetPlannerParams.idl" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/SetPlannerParams.idl" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/SaveMap.idl" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/SaveMap.idl" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/LoadMap.idl" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/LoadMap.idl" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/SaveRobotStateToWarehouse.idl" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/SaveRobotStateToWarehouse.idl" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/ListRobotStatesInWarehouse.idl" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/ListRobotStatesInWarehouse.idl" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/GetRobotStateFromWarehouse.idl" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/GetRobotStateFromWarehouse.idl" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/CheckIfRobotStateExistsInWarehouse.idl" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/CheckIfRobotStateExistsInWarehouse.idl" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/RenameRobotStateInWarehouse.idl" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/RenameRobotStateInWarehouse.idl" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/DeleteRobotStateFromWarehouse.idl" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/srv/DeleteRobotStateFromWarehouse.idl" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/action/ExecuteTrajectory.idl" "DESTINATION" "share/moveit_msgs/action")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/action/ExecuteTrajectory.idl" "DESTINATION" "share/moveit_msgs/action")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/action/MoveGroup.idl" "DESTINATION" "share/moveit_msgs/action")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/action/MoveGroup.idl" "DESTINATION" "share/moveit_msgs/action")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/action/Pickup.idl" "DESTINATION" "share/moveit_msgs/action")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/action/Pickup.idl" "DESTINATION" "share/moveit_msgs/action")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/action/Place.idl" "DESTINATION" "share/moveit_msgs/action")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_adapter/moveit_msgs/action/Place.idl" "DESTINATION" "share/moveit_msgs/action")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/AllowedCollisionEntry.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/AllowedCollisionEntry.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/AllowedCollisionMatrix.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/AllowedCollisionMatrix.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/AttachedCollisionObject.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/AttachedCollisionObject.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/BoundingVolume.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/BoundingVolume.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/CartesianPoint.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/CartesianPoint.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/CartesianTrajectory.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/CartesianTrajectory.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/CartesianTrajectoryPoint.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/CartesianTrajectoryPoint.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/CollisionObject.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/CollisionObject.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/ConstraintEvalResult.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/ConstraintEvalResult.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/Constraints.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/Constraints.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/CostSource.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/CostSource.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/ContactInformation.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/ContactInformation.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/DisplayTrajectory.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/DisplayTrajectory.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/DisplayRobotState.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/DisplayRobotState.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/GenericTrajectory.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/GenericTrajectory.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/Grasp.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/Grasp.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/GripperTranslation.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/GripperTranslation.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/JointConstraint.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/JointConstraint.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/JointLimits.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/JointLimits.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/LinkPadding.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/LinkPadding.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/LinkScale.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/LinkScale.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/MotionPlanRequest.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/MotionPlanRequest.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/MotionPlanResponse.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/MotionPlanResponse.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/MotionPlanDetailedResponse.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/MotionPlanDetailedResponse.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/MoveItErrorCodes.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/MoveItErrorCodes.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/TrajectoryConstraints.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/TrajectoryConstraints.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/ObjectColor.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/ObjectColor.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/OrientationConstraint.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/OrientationConstraint.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/OrientedBoundingBox.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/OrientedBoundingBox.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/PlaceLocation.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/PlaceLocation.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/PlannerInterfaceDescription.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/PlannerInterfaceDescription.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/PlannerParams.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/PlannerParams.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/PlanningScene.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/PlanningScene.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/PlanningSceneComponents.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/PlanningSceneComponents.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/PlanningSceneWorld.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/PlanningSceneWorld.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/PlanningOptions.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/PlanningOptions.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/PositionConstraint.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/PositionConstraint.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/RobotState.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/RobotState.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/RobotTrajectory.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/RobotTrajectory.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/VisibilityConstraint.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/VisibilityConstraint.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/WorkspaceParameters.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/WorkspaceParameters.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/KinematicSolverInfo.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/KinematicSolverInfo.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/msg/PositionIKRequest.msg" "DESTINATION" "share/moveit_msgs/msg")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/msg/PositionIKRequest.msg" "DESTINATION" "share/moveit_msgs/msg")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/srv/GetMotionPlan.srv" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/srv/GetMotionPlan.srv" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetMotionPlan_Request.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetMotionPlan_Request.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetMotionPlan_Response.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetMotionPlan_Response.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/srv/ExecuteKnownTrajectory.srv" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/srv/ExecuteKnownTrajectory.srv" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/ExecuteKnownTrajectory_Request.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/ExecuteKnownTrajectory_Request.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/ExecuteKnownTrajectory_Response.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/ExecuteKnownTrajectory_Response.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/srv/GetStateValidity.srv" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/srv/GetStateValidity.srv" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetStateValidity_Request.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetStateValidity_Request.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetStateValidity_Response.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetStateValidity_Response.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/srv/GetCartesianPath.srv" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/srv/GetCartesianPath.srv" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetCartesianPath_Request.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetCartesianPath_Request.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetCartesianPath_Response.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetCartesianPath_Response.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/srv/GetPlanningScene.srv" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/srv/GetPlanningScene.srv" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetPlanningScene_Request.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetPlanningScene_Request.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetPlanningScene_Response.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetPlanningScene_Response.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/srv/GraspPlanning.srv" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/srv/GraspPlanning.srv" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GraspPlanning_Request.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GraspPlanning_Request.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GraspPlanning_Response.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GraspPlanning_Response.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/srv/ApplyPlanningScene.srv" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/srv/ApplyPlanningScene.srv" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/ApplyPlanningScene_Request.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/ApplyPlanningScene_Request.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/ApplyPlanningScene_Response.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/ApplyPlanningScene_Response.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/srv/QueryPlannerInterfaces.srv" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/srv/QueryPlannerInterfaces.srv" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/QueryPlannerInterfaces_Request.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/QueryPlannerInterfaces_Request.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/QueryPlannerInterfaces_Response.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/QueryPlannerInterfaces_Response.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/srv/GetPositionFK.srv" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/srv/GetPositionFK.srv" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetPositionFK_Request.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetPositionFK_Request.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetPositionFK_Response.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetPositionFK_Response.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/srv/GetPositionIK.srv" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/srv/GetPositionIK.srv" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetPositionIK_Request.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetPositionIK_Request.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetPositionIK_Response.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetPositionIK_Response.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/srv/GetPlannerParams.srv" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/srv/GetPlannerParams.srv" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetPlannerParams_Request.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetPlannerParams_Request.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetPlannerParams_Response.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetPlannerParams_Response.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/srv/SetPlannerParams.srv" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/srv/SetPlannerParams.srv" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/SetPlannerParams_Request.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/SetPlannerParams_Request.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/SetPlannerParams_Response.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/SetPlannerParams_Response.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/srv/SaveMap.srv" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/srv/SaveMap.srv" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/SaveMap_Request.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/SaveMap_Request.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/SaveMap_Response.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/SaveMap_Response.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/srv/LoadMap.srv" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/srv/LoadMap.srv" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/LoadMap_Request.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/LoadMap_Request.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/LoadMap_Response.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/LoadMap_Response.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/srv/SaveRobotStateToWarehouse.srv" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/srv/SaveRobotStateToWarehouse.srv" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/SaveRobotStateToWarehouse_Request.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/SaveRobotStateToWarehouse_Request.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/SaveRobotStateToWarehouse_Response.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/SaveRobotStateToWarehouse_Response.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/srv/ListRobotStatesInWarehouse.srv" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/srv/ListRobotStatesInWarehouse.srv" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/ListRobotStatesInWarehouse_Request.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/ListRobotStatesInWarehouse_Request.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/ListRobotStatesInWarehouse_Response.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/ListRobotStatesInWarehouse_Response.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/srv/GetRobotStateFromWarehouse.srv" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/srv/GetRobotStateFromWarehouse.srv" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetRobotStateFromWarehouse_Request.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetRobotStateFromWarehouse_Request.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetRobotStateFromWarehouse_Response.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/GetRobotStateFromWarehouse_Response.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/srv/CheckIfRobotStateExistsInWarehouse.srv" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/srv/CheckIfRobotStateExistsInWarehouse.srv" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/CheckIfRobotStateExistsInWarehouse_Request.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/CheckIfRobotStateExistsInWarehouse_Request.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/CheckIfRobotStateExistsInWarehouse_Response.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/CheckIfRobotStateExistsInWarehouse_Response.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/srv/RenameRobotStateInWarehouse.srv" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/srv/RenameRobotStateInWarehouse.srv" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/RenameRobotStateInWarehouse_Request.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/RenameRobotStateInWarehouse_Request.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/RenameRobotStateInWarehouse_Response.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/RenameRobotStateInWarehouse_Response.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/srv/DeleteRobotStateFromWarehouse.srv" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/srv/DeleteRobotStateFromWarehouse.srv" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/DeleteRobotStateFromWarehouse_Request.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/DeleteRobotStateFromWarehouse_Request.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/DeleteRobotStateFromWarehouse_Response.msg" "DESTINATION" "share/moveit_msgs/srv")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/srv/DeleteRobotStateFromWarehouse_Response.msg" "DESTINATION" "share/moveit_msgs/srv")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/action/ExecuteTrajectory.action" "DESTINATION" "share/moveit_msgs/action")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/action/ExecuteTrajectory.action" "DESTINATION" "share/moveit_msgs/action")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/action/MoveGroup.action" "DESTINATION" "share/moveit_msgs/action")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/action/MoveGroup.action" "DESTINATION" "share/moveit_msgs/action")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/action/Pickup.action" "DESTINATION" "share/moveit_msgs/action")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/action/Pickup.action" "DESTINATION" "share/moveit_msgs/action")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/action/Place.action" "DESTINATION" "share/moveit_msgs/action")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/action/Place.action" "DESTINATION" "share/moveit_msgs/action")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/moveit_msgs" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/moveit_msgs" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/moveit_msgs" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/moveit_msgs" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")

# install(FILES "/opt/ros/dashing/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/moveit_msgs/environment")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/opt/ros/dashing/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/moveit_msgs/environment")

# install(FILES "/opt/ros/dashing/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/moveit_msgs/environment")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/opt/ros/dashing/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/moveit_msgs/environment")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/moveit_msgs")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/moveit_msgs")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/moveit_msgs")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/moveit_msgs")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/moveit_msgs")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/moveit_msgs")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_index/share/ament_index/resource_index/packages/moveit_msgs" "DESTINATION" "share/ament_index/resource_index/packages")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_index/share/ament_index/resource_index/packages/moveit_msgs" "DESTINATION" "share/ament_index/resource_index/packages")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/moveit_msgs/cmake")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/moveit_msgs/cmake")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/moveit_msgs/cmake")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/moveit_msgs/cmake")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/moveit_msgs/cmake")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/moveit_msgs/cmake")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/moveit_msgs/cmake")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/moveit_msgs/cmake")

# install(FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_core/moveit_msgsConfig.cmake" "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_core/moveit_msgsConfig-version.cmake" "DESTINATION" "share/moveit_msgs/cmake")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_core/moveit_msgsConfig.cmake" "/home/common/colcon_ws/build/moveit_msgs/ament_cmake_core/moveit_msgsConfig-version.cmake" "DESTINATION" "share/moveit_msgs/cmake")

# install(FILES "/home/common/colcon_ws/src/moveit_msgs/package.xml" "DESTINATION" "share/moveit_msgs")
ament_cmake_symlink_install_files("/home/common/colcon_ws/src/moveit_msgs" FILES "/home/common/colcon_ws/src/moveit_msgs/package.xml" "DESTINATION" "share/moveit_msgs")
