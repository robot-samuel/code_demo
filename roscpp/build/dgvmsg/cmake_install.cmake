# Install script for directory: /home/pc-robot/Workspace/demo/roscpp/src/dgvmsg

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/pc-robot/Workspace/demo/roscpp/install")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dgvmsg/msg" TYPE FILE FILES
    "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/ctrl_ModeMessage.msg"
    "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Imu.msg"
    "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Joy.msg"
    "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/String.msg"
    "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Twist.msg"
    "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Vector3.msg"
    "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/LaserScan.msg"
    "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/LaserEcho.msg"
    "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedbackArray.msg"
    "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/JoyFeedback.msg"
    "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverNode.msg"
    "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverVelocity.msg"
    "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/Encounter.msg"
    "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/EncounterV.msg"
    "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/remoter.msg"
    "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/remoterctrl.msg"
    "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg/DriverStatues.msg"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dgvmsg/cmake" TYPE FILE FILES "/home/pc-robot/Workspace/demo/roscpp/build/dgvmsg/catkin_generated/installspace/dgvmsg-msg-paths.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/pc-robot/Workspace/demo/roscpp/devel/include/dgvmsg")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/pc-robot/Workspace/demo/roscpp/devel/share/common-lisp/ros/dgvmsg")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/pc-robot/Workspace/demo/roscpp/devel/lib/python2.7/dist-packages/dgvmsg")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/pc-robot/Workspace/demo/roscpp/devel/lib/python2.7/dist-packages/dgvmsg")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/pc-robot/Workspace/demo/roscpp/build/dgvmsg/catkin_generated/installspace/dgvmsg.pc")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dgvmsg/cmake" TYPE FILE FILES "/home/pc-robot/Workspace/demo/roscpp/build/dgvmsg/catkin_generated/installspace/dgvmsg-msg-extras.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dgvmsg/cmake" TYPE FILE FILES
    "/home/pc-robot/Workspace/demo/roscpp/build/dgvmsg/catkin_generated/installspace/dgvmsgConfig.cmake"
    "/home/pc-robot/Workspace/demo/roscpp/build/dgvmsg/catkin_generated/installspace/dgvmsgConfig-version.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dgvmsg" TYPE FILE FILES "/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/package.xml")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

