# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pc-robot/Workspace/demo/zmqcpp/testproxy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pc-robot/Workspace/demo/zmqcpp/testproxy/bulid

# Include any dependencies generated for this target.
include CMakeFiles/testproxy.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testproxy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testproxy.dir/flags.make

CMakeFiles/testproxy.dir/main.cpp.o: CMakeFiles/testproxy.dir/flags.make
CMakeFiles/testproxy.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pc-robot/Workspace/demo/zmqcpp/testproxy/bulid/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/testproxy.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testproxy.dir/main.cpp.o -c /home/pc-robot/Workspace/demo/zmqcpp/testproxy/main.cpp

CMakeFiles/testproxy.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testproxy.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pc-robot/Workspace/demo/zmqcpp/testproxy/main.cpp > CMakeFiles/testproxy.dir/main.cpp.i

CMakeFiles/testproxy.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testproxy.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pc-robot/Workspace/demo/zmqcpp/testproxy/main.cpp -o CMakeFiles/testproxy.dir/main.cpp.s

CMakeFiles/testproxy.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/testproxy.dir/main.cpp.o.requires

CMakeFiles/testproxy.dir/main.cpp.o.provides: CMakeFiles/testproxy.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/testproxy.dir/build.make CMakeFiles/testproxy.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/testproxy.dir/main.cpp.o.provides

CMakeFiles/testproxy.dir/main.cpp.o.provides.build: CMakeFiles/testproxy.dir/main.cpp.o

# Object files for target testproxy
testproxy_OBJECTS = \
"CMakeFiles/testproxy.dir/main.cpp.o"

# External object files for target testproxy
testproxy_EXTERNAL_OBJECTS =

testproxy: CMakeFiles/testproxy.dir/main.cpp.o
testproxy: CMakeFiles/testproxy.dir/build.make
testproxy: CMakeFiles/testproxy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable testproxy"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testproxy.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testproxy.dir/build: testproxy
.PHONY : CMakeFiles/testproxy.dir/build

CMakeFiles/testproxy.dir/requires: CMakeFiles/testproxy.dir/main.cpp.o.requires
.PHONY : CMakeFiles/testproxy.dir/requires

CMakeFiles/testproxy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/testproxy.dir/cmake_clean.cmake
.PHONY : CMakeFiles/testproxy.dir/clean

CMakeFiles/testproxy.dir/depend:
	cd /home/pc-robot/Workspace/demo/zmqcpp/testproxy/bulid && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pc-robot/Workspace/demo/zmqcpp/testproxy /home/pc-robot/Workspace/demo/zmqcpp/testproxy /home/pc-robot/Workspace/demo/zmqcpp/testproxy/bulid /home/pc-robot/Workspace/demo/zmqcpp/testproxy/bulid /home/pc-robot/Workspace/demo/zmqcpp/testproxy/bulid/CMakeFiles/testproxy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testproxy.dir/depend

