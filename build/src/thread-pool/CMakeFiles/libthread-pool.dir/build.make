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
include src/thread-pool/CMakeFiles/libthread-pool.dir/depend.make

# Include the progress variables for this target.
include src/thread-pool/CMakeFiles/libthread-pool.dir/progress.make

# Include the compile flags for this target's objects.
include src/thread-pool/CMakeFiles/libthread-pool.dir/flags.make

src/thread-pool/CMakeFiles/libthread-pool.dir/ThreadPool.cpp.o: src/thread-pool/CMakeFiles/libthread-pool.dir/flags.make
src/thread-pool/CMakeFiles/libthread-pool.dir/ThreadPool.cpp.o: ../src/thread-pool/ThreadPool.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jmarin/Desktop/CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/thread-pool/CMakeFiles/libthread-pool.dir/ThreadPool.cpp.o"
	cd /home/jmarin/Desktop/CV/build/src/thread-pool && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libthread-pool.dir/ThreadPool.cpp.o -c /home/jmarin/Desktop/CV/src/thread-pool/ThreadPool.cpp

src/thread-pool/CMakeFiles/libthread-pool.dir/ThreadPool.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libthread-pool.dir/ThreadPool.cpp.i"
	cd /home/jmarin/Desktop/CV/build/src/thread-pool && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jmarin/Desktop/CV/src/thread-pool/ThreadPool.cpp > CMakeFiles/libthread-pool.dir/ThreadPool.cpp.i

src/thread-pool/CMakeFiles/libthread-pool.dir/ThreadPool.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libthread-pool.dir/ThreadPool.cpp.s"
	cd /home/jmarin/Desktop/CV/build/src/thread-pool && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jmarin/Desktop/CV/src/thread-pool/ThreadPool.cpp -o CMakeFiles/libthread-pool.dir/ThreadPool.cpp.s

# Object files for target libthread-pool
libthread__pool_OBJECTS = \
"CMakeFiles/libthread-pool.dir/ThreadPool.cpp.o"

# External object files for target libthread-pool
libthread__pool_EXTERNAL_OBJECTS =

src/thread-pool/liblibthread-pool.a: src/thread-pool/CMakeFiles/libthread-pool.dir/ThreadPool.cpp.o
src/thread-pool/liblibthread-pool.a: src/thread-pool/CMakeFiles/libthread-pool.dir/build.make
src/thread-pool/liblibthread-pool.a: src/thread-pool/CMakeFiles/libthread-pool.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jmarin/Desktop/CV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblibthread-pool.a"
	cd /home/jmarin/Desktop/CV/build/src/thread-pool && $(CMAKE_COMMAND) -P CMakeFiles/libthread-pool.dir/cmake_clean_target.cmake
	cd /home/jmarin/Desktop/CV/build/src/thread-pool && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libthread-pool.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/thread-pool/CMakeFiles/libthread-pool.dir/build: src/thread-pool/liblibthread-pool.a

.PHONY : src/thread-pool/CMakeFiles/libthread-pool.dir/build

src/thread-pool/CMakeFiles/libthread-pool.dir/clean:
	cd /home/jmarin/Desktop/CV/build/src/thread-pool && $(CMAKE_COMMAND) -P CMakeFiles/libthread-pool.dir/cmake_clean.cmake
.PHONY : src/thread-pool/CMakeFiles/libthread-pool.dir/clean

src/thread-pool/CMakeFiles/libthread-pool.dir/depend:
	cd /home/jmarin/Desktop/CV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jmarin/Desktop/CV /home/jmarin/Desktop/CV/src/thread-pool /home/jmarin/Desktop/CV/build /home/jmarin/Desktop/CV/build/src/thread-pool /home/jmarin/Desktop/CV/build/src/thread-pool/CMakeFiles/libthread-pool.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/thread-pool/CMakeFiles/libthread-pool.dir/depend

