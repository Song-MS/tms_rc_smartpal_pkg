set(_AMENT_PACKAGE_NAME "tms_msg_rc")
set(tms_msg_rc_VERSION "1.0.2")
set(tms_msg_rc_MAINTAINER "Akihiro Kawamura <kawamura@ait.kyushu-u.ac.jp>")
set(tms_msg_rc_BUILD_DEPENDS "rclcpp" "sensor_msgs" "std_msgs" "geometry_msgs")
set(tms_msg_rc_BUILDTOOL_DEPENDS "ament_cmake" "rosidl_default_generators")
set(tms_msg_rc_BUILD_EXPORT_DEPENDS "rclcpp" "sensor_msgs" "std_msgs" "geometry_msgs")
set(tms_msg_rc_BUILDTOOL_EXPORT_DEPENDS )
set(tms_msg_rc_EXEC_DEPENDS "rosidl_default_runtime" "rclcpp" "sensor_msgs" "std_msgs" "geometry_msgs")
set(tms_msg_rc_TEST_DEPENDS "ament_lint_auto" "ament_lint_common")
set(tms_msg_rc_GROUP_DEPENDS )
set(tms_msg_rc_MEMBER_OF_GROUPS "rosidl_interface_packages")
set(tms_msg_rc_DEPRECATED "")
set(tms_msg_rc_EXPORT_TAGS)
list(APPEND tms_msg_rc_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
