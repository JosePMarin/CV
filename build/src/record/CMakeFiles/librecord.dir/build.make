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

# Include any dependencies generated for this target.
include src/record/CMakeFiles/librecord.dir/depend.make

# Include the progress variables for this target.
include src/record/CMakeFiles/librecord.dir/progress.make

# Include the compile flags for this target's objects.
include src/record/CMakeFiles/librecord.dir/flags.make

src/record/CMakeFiles/librecord.dir/Record.cpp.o: src/record/CMakeFiles/librecord.dir/flags.make
src/record/CMakeFiles/librecord.dir/Record.cpp.o: ../src/record/Record.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jmarin/Desktop/CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/record/CMakeFiles/librecord.dir/Record.cpp.o"
	cd /home/jmarin/Desktop/CV/build/src/record && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/librecord.dir/Record.cpp.o -c /home/jmarin/Desktop/CV/src/record/Record.cpp

src/record/CMakeFiles/librecord.dir/Record.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/librecord.dir/Record.cpp.i"
	cd /home/jmarin/Desktop/CV/build/src/record && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jmarin/Desktop/CV/src/record/Record.cpp > CMakeFiles/librecord.dir/Record.cpp.i

src/record/CMakeFiles/librecord.dir/Record.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/librecord.dir/Record.cpp.s"
	cd /home/jmarin/Desktop/CV/build/src/record && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jmarin/Desktop/CV/src/record/Record.cpp -o CMakeFiles/librecord.dir/Record.cpp.s

# Object files for target librecord
librecord_OBJECTS = \
"CMakeFiles/librecord.dir/Record.cpp.o"

# External object files for target librecord
librecord_EXTERNAL_OBJECTS =

src/record/liblibrecord.a: src/record/CMakeFiles/librecord.dir/Record.cpp.o
src/record/liblibrecord.a: src/record/CMakeFiles/librecord.dir/build.make
src/record/liblibrecord.a: src/record/CMakeFiles/librecord.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jmarin/Desktop/CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblibrecord.a"
	cd /home/jmarin/Desktop/CV/build/src/record && $(CMAKE_COMMAND) -P CMakeFiles/librecord.dir/cmake_clean_target.cmake
	cd /home/jmarin/Desktop/CV/build/src/record && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/librecord.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/record/CMakeFiles/librecord.dir/build: src/record/liblibrecord.a

.PHONY : src/record/CMakeFiles/librecord.dir/build

src/record/CMakeFiles/librecord.dir/clean:
	cd /home/jmarin/Desktop/CV/build/src/record && $(CMAKE_COMMAND) -P CMakeFiles/librecord.dir/cmake_clean.cmake
.PHONY : src/record/CMakeFiles/librecord.dir/clean

src/record/CMakeFiles/librecord.dir/depend:
	cd /home/jmarin/Desktop/CV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jmarin/Desktop/CV /home/jmarin/Desktop/CV/src/record /home/jmarin/Desktop/CV/build /home/jmarin/Desktop/CV/build/src/record /home/jmarin/Desktop/CV/build/src/record/CMakeFiles/librecord.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/record/CMakeFiles/librecord.dir/depend

