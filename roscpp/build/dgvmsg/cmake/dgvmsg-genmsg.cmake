# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "dgvmsg: 17 messages, 0 services")

set(MSG_I_FLAGS "-Idgvmsg:/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg;-Igeometry_msgs:/opt/ros/indigo/share/geometry_msgs/cmake/../msg;-Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(dgvmsg_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Twist.msg" NAME_WE)
add_custom_target(_dgvmsg_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dgvmsg" "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Twist.msg" "dgvmsg/Vector3"
)

get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Encounter.msg" NAME_WE)
add_custom_target(_dgvmsg_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dgvmsg" "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Encounter.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/EncounterV.msg" NAME_WE)
add_custom_target(_dgvmsg_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dgvmsg" "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/EncounterV.msg" "std_msgs/Header:dgvmsg/Encounter"
)

get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/LaserEcho.msg" NAME_WE)
add_custom_target(_dgvmsg_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dgvmsg" "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/LaserEcho.msg" ""
)

get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Vector3.msg" NAME_WE)
add_custom_target(_dgvmsg_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dgvmsg" "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Vector3.msg" ""
)

get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/remoterctrl.msg" NAME_WE)
add_custom_target(_dgvmsg_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dgvmsg" "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/remoterctrl.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/String.msg" NAME_WE)
add_custom_target(_dgvmsg_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dgvmsg" "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/String.msg" ""
)

get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedbackArray.msg" NAME_WE)
add_custom_target(_dgvmsg_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dgvmsg" "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedbackArray.msg" "dgvmsg/JoyFeedback"
)

get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/ctrl_ModeMessage.msg" NAME_WE)
add_custom_target(_dgvmsg_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dgvmsg" "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/ctrl_ModeMessage.msg" "dgvmsg/Twist:dgvmsg/Vector3:std_msgs/Header"
)

get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/LaserScan.msg" NAME_WE)
add_custom_target(_dgvmsg_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dgvmsg" "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/LaserScan.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Joy.msg" NAME_WE)
add_custom_target(_dgvmsg_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dgvmsg" "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Joy.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedback.msg" NAME_WE)
add_custom_target(_dgvmsg_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dgvmsg" "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedback.msg" ""
)

get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverNode.msg" NAME_WE)
add_custom_target(_dgvmsg_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dgvmsg" "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverNode.msg" ""
)

get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Imu.msg" NAME_WE)
add_custom_target(_dgvmsg_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dgvmsg" "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Imu.msg" "geometry_msgs/Vector3:std_msgs/Header:geometry_msgs/Quaternion"
)

get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverVelocity.msg" NAME_WE)
add_custom_target(_dgvmsg_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dgvmsg" "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverVelocity.msg" "dgvmsg/DriverNode"
)

get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/remoter.msg" NAME_WE)
add_custom_target(_dgvmsg_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dgvmsg" "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/remoter.msg" "dgvmsg/Vector3:std_msgs/Header"
)

get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverStatues.msg" NAME_WE)
add_custom_target(_dgvmsg_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dgvmsg" "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverStatues.msg" ""
)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Twist.msg"
  "${MSG_I_FLAGS}"
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dgvmsg
)
_generate_msg_cpp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Encounter.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dgvmsg
)
_generate_msg_cpp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/EncounterV.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Encounter.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dgvmsg
)
_generate_msg_cpp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/LaserEcho.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dgvmsg
)
_generate_msg_cpp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Vector3.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dgvmsg
)
_generate_msg_cpp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/remoterctrl.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dgvmsg
)
_generate_msg_cpp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/String.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dgvmsg
)
_generate_msg_cpp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedbackArray.msg"
  "${MSG_I_FLAGS}"
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dgvmsg
)
_generate_msg_cpp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/ctrl_ModeMessage.msg"
  "${MSG_I_FLAGS}"
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Twist.msg;/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Vector3.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dgvmsg
)
_generate_msg_cpp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/LaserScan.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dgvmsg
)
_generate_msg_cpp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Joy.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dgvmsg
)
_generate_msg_cpp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dgvmsg
)
_generate_msg_cpp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverNode.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dgvmsg
)
_generate_msg_cpp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Imu.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dgvmsg
)
_generate_msg_cpp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverVelocity.msg"
  "${MSG_I_FLAGS}"
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverNode.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dgvmsg
)
_generate_msg_cpp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/remoter.msg"
  "${MSG_I_FLAGS}"
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Vector3.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dgvmsg
)
_generate_msg_cpp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverStatues.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dgvmsg
)

### Generating Services

### Generating Module File
_generate_module_cpp(dgvmsg
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dgvmsg
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(dgvmsg_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(dgvmsg_generate_messages dgvmsg_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Twist.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_cpp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Encounter.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_cpp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/EncounterV.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_cpp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/LaserEcho.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_cpp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Vector3.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_cpp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/remoterctrl.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_cpp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/String.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_cpp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedbackArray.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_cpp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/ctrl_ModeMessage.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_cpp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/LaserScan.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_cpp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Joy.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_cpp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedback.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_cpp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverNode.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_cpp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Imu.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_cpp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverVelocity.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_cpp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/remoter.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_cpp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverStatues.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_cpp _dgvmsg_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(dgvmsg_gencpp)
add_dependencies(dgvmsg_gencpp dgvmsg_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS dgvmsg_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Twist.msg"
  "${MSG_I_FLAGS}"
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dgvmsg
)
_generate_msg_lisp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Encounter.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dgvmsg
)
_generate_msg_lisp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/EncounterV.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Encounter.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dgvmsg
)
_generate_msg_lisp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/LaserEcho.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dgvmsg
)
_generate_msg_lisp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Vector3.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dgvmsg
)
_generate_msg_lisp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/remoterctrl.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dgvmsg
)
_generate_msg_lisp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/String.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dgvmsg
)
_generate_msg_lisp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedbackArray.msg"
  "${MSG_I_FLAGS}"
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dgvmsg
)
_generate_msg_lisp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/ctrl_ModeMessage.msg"
  "${MSG_I_FLAGS}"
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Twist.msg;/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Vector3.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dgvmsg
)
_generate_msg_lisp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/LaserScan.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dgvmsg
)
_generate_msg_lisp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Joy.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dgvmsg
)
_generate_msg_lisp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dgvmsg
)
_generate_msg_lisp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverNode.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dgvmsg
)
_generate_msg_lisp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Imu.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dgvmsg
)
_generate_msg_lisp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverVelocity.msg"
  "${MSG_I_FLAGS}"
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverNode.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dgvmsg
)
_generate_msg_lisp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/remoter.msg"
  "${MSG_I_FLAGS}"
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Vector3.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dgvmsg
)
_generate_msg_lisp(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverStatues.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dgvmsg
)

### Generating Services

### Generating Module File
_generate_module_lisp(dgvmsg
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dgvmsg
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(dgvmsg_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(dgvmsg_generate_messages dgvmsg_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Twist.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_lisp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Encounter.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_lisp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/EncounterV.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_lisp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/LaserEcho.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_lisp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Vector3.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_lisp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/remoterctrl.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_lisp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/String.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_lisp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedbackArray.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_lisp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/ctrl_ModeMessage.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_lisp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/LaserScan.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_lisp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Joy.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_lisp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedback.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_lisp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverNode.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_lisp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Imu.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_lisp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverVelocity.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_lisp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/remoter.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_lisp _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverStatues.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_lisp _dgvmsg_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(dgvmsg_genlisp)
add_dependencies(dgvmsg_genlisp dgvmsg_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS dgvmsg_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Twist.msg"
  "${MSG_I_FLAGS}"
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg
)
_generate_msg_py(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Encounter.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg
)
_generate_msg_py(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/EncounterV.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Encounter.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg
)
_generate_msg_py(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/LaserEcho.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg
)
_generate_msg_py(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Vector3.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg
)
_generate_msg_py(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/remoterctrl.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg
)
_generate_msg_py(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/String.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg
)
_generate_msg_py(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedbackArray.msg"
  "${MSG_I_FLAGS}"
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedback.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg
)
_generate_msg_py(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/ctrl_ModeMessage.msg"
  "${MSG_I_FLAGS}"
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Twist.msg;/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Vector3.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg
)
_generate_msg_py(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/LaserScan.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg
)
_generate_msg_py(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Joy.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg
)
_generate_msg_py(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg
)
_generate_msg_py(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverNode.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg
)
_generate_msg_py(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Imu.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg
)
_generate_msg_py(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverVelocity.msg"
  "${MSG_I_FLAGS}"
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverNode.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg
)
_generate_msg_py(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/remoter.msg"
  "${MSG_I_FLAGS}"
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Vector3.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg
)
_generate_msg_py(dgvmsg
  "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverStatues.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg
)

### Generating Services

### Generating Module File
_generate_module_py(dgvmsg
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(dgvmsg_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(dgvmsg_generate_messages dgvmsg_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Twist.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_py _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Encounter.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_py _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/EncounterV.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_py _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/LaserEcho.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_py _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Vector3.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_py _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/remoterctrl.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_py _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/String.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_py _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedbackArray.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_py _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/ctrl_ModeMessage.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_py _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/LaserScan.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_py _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Joy.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_py _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedback.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_py _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverNode.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_py _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Imu.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_py _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverVelocity.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_py _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/remoter.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_py _dgvmsg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverStatues.msg" NAME_WE)
add_dependencies(dgvmsg_generate_messages_py _dgvmsg_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(dgvmsg_genpy)
add_dependencies(dgvmsg_genpy dgvmsg_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS dgvmsg_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dgvmsg)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dgvmsg
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(dgvmsg_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dgvmsg)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/dgvmsg
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(dgvmsg_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dgvmsg
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(dgvmsg_generate_messages_py geometry_msgs_generate_messages_py)
endif()
