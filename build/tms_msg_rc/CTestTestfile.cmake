# CMake generated Testfile for 
# Source directory: /home/common/colcon_ws/src/ros_tms/tms_msg/tms_msg_rc
# Build directory: /home/common/colcon_ws/build/tms_msg_rc
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/common/colcon_ws/build/tms_msg_rc/test_results/tms_msg_rc/lint_cmake.xunit.xml" "--package-name" "tms_msg_rc" "--output-file" "/home/common/colcon_ws/build/tms_msg_rc/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/dashing/bin/ament_lint_cmake" "--xunit-file" "/home/common/colcon_ws/build/tms_msg_rc/test_results/tms_msg_rc/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/common/colcon_ws/src/ros_tms/tms_msg/tms_msg_rc")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/common/colcon_ws/build/tms_msg_rc/test_results/tms_msg_rc/xmllint.xunit.xml" "--package-name" "tms_msg_rc" "--output-file" "/home/common/colcon_ws/build/tms_msg_rc/ament_xmllint/xmllint.txt" "--command" "/opt/ros/dashing/bin/ament_xmllint" "--xunit-file" "/home/common/colcon_ws/build/tms_msg_rc/test_results/tms_msg_rc/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/common/colcon_ws/src/ros_tms/tms_msg/tms_msg_rc")
subdirs("tms_msg_rc__py")
