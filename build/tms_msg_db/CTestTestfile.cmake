# CMake generated Testfile for 
# Source directory: /home/common/colcon_ws/src/ros_tms/tms_msg/tms_msg_db
# Build directory: /home/common/colcon_ws/build/tms_msg_db
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/common/colcon_ws/build/tms_msg_db/test_results/tms_msg_db/lint_cmake.xunit.xml" "--package-name" "tms_msg_db" "--output-file" "/home/common/colcon_ws/build/tms_msg_db/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/dashing/bin/ament_lint_cmake" "--xunit-file" "/home/common/colcon_ws/build/tms_msg_db/test_results/tms_msg_db/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/common/colcon_ws/src/ros_tms/tms_msg/tms_msg_db")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/common/colcon_ws/build/tms_msg_db/test_results/tms_msg_db/xmllint.xunit.xml" "--package-name" "tms_msg_db" "--output-file" "/home/common/colcon_ws/build/tms_msg_db/ament_xmllint/xmllint.txt" "--command" "/opt/ros/dashing/bin/ament_xmllint" "--xunit-file" "/home/common/colcon_ws/build/tms_msg_db/test_results/tms_msg_db/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/common/colcon_ws/src/ros_tms/tms_msg/tms_msg_db")
subdirs("tms_msg_db__py")
