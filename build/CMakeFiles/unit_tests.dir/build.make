# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jmarin/Desktop/CV

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jmarin/Desktop/CV/build

# Utility rule file for unit_tests.

# Include the progress variables for this target.
include CMakeFiles/unit_tests.dir/progress.make

CMakeFiles/unit_tests:
	/usr/local/bin/ctest -R unit_

unit_tests: CMakeFiles/unit_tests
unit_tests: CMakeFiles/unit_tests.dir/build.make

.PHONY : unit_tests

# Rule to build all files generated by this target.
CMakeFiles/unit_tests.dir/build: unit_tests

.PHONY : CMakeFiles/unit_tests.dir/build

CMakeFiles/unit_tests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/unit_tests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/unit_tests.dir/clean

CMakeFiles/unit_tests.dir/depend:
	cd /home/jmarin/Desktop/CV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jmarin/Desktop/CV /home/jmarin/Desktop/CV /home/jmarin/Desktop/CV/build /home/jmarin/Desktop/CV/build /home/jmarin/Desktop/CV/build/CMakeFiles/unit_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/unit_tests.dir/depend

