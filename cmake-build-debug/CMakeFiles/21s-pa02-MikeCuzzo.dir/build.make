# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /snap/clion/139/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/139/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mcuzzo71/Desktop/21s-pa02-MikeCuzzo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mcuzzo71/Desktop/21s-pa02-MikeCuzzo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/21s-pa02-MikeCuzzo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/21s-pa02-MikeCuzzo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/21s-pa02-MikeCuzzo.dir/flags.make

CMakeFiles/21s-pa02-MikeCuzzo.dir/src/main.cpp.o: CMakeFiles/21s-pa02-MikeCuzzo.dir/flags.make
CMakeFiles/21s-pa02-MikeCuzzo.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mcuzzo71/Desktop/21s-pa02-MikeCuzzo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/21s-pa02-MikeCuzzo.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/21s-pa02-MikeCuzzo.dir/src/main.cpp.o -c /home/mcuzzo71/Desktop/21s-pa02-MikeCuzzo/src/main.cpp

CMakeFiles/21s-pa02-MikeCuzzo.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/21s-pa02-MikeCuzzo.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mcuzzo71/Desktop/21s-pa02-MikeCuzzo/src/main.cpp > CMakeFiles/21s-pa02-MikeCuzzo.dir/src/main.cpp.i

CMakeFiles/21s-pa02-MikeCuzzo.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/21s-pa02-MikeCuzzo.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mcuzzo71/Desktop/21s-pa02-MikeCuzzo/src/main.cpp -o CMakeFiles/21s-pa02-MikeCuzzo.dir/src/main.cpp.s

# Object files for target 21s-pa02-MikeCuzzo
21s__pa02__MikeCuzzo_OBJECTS = \
"CMakeFiles/21s-pa02-MikeCuzzo.dir/src/main.cpp.o"

# External object files for target 21s-pa02-MikeCuzzo
21s__pa02__MikeCuzzo_EXTERNAL_OBJECTS =

21s-pa02-MikeCuzzo: CMakeFiles/21s-pa02-MikeCuzzo.dir/src/main.cpp.o
21s-pa02-MikeCuzzo: CMakeFiles/21s-pa02-MikeCuzzo.dir/build.make
21s-pa02-MikeCuzzo: CMakeFiles/21s-pa02-MikeCuzzo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mcuzzo71/Desktop/21s-pa02-MikeCuzzo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 21s-pa02-MikeCuzzo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/21s-pa02-MikeCuzzo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/21s-pa02-MikeCuzzo.dir/build: 21s-pa02-MikeCuzzo

.PHONY : CMakeFiles/21s-pa02-MikeCuzzo.dir/build

CMakeFiles/21s-pa02-MikeCuzzo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/21s-pa02-MikeCuzzo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/21s-pa02-MikeCuzzo.dir/clean

CMakeFiles/21s-pa02-MikeCuzzo.dir/depend:
	cd /home/mcuzzo71/Desktop/21s-pa02-MikeCuzzo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mcuzzo71/Desktop/21s-pa02-MikeCuzzo /home/mcuzzo71/Desktop/21s-pa02-MikeCuzzo /home/mcuzzo71/Desktop/21s-pa02-MikeCuzzo/cmake-build-debug /home/mcuzzo71/Desktop/21s-pa02-MikeCuzzo/cmake-build-debug /home/mcuzzo71/Desktop/21s-pa02-MikeCuzzo/cmake-build-debug/CMakeFiles/21s-pa02-MikeCuzzo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/21s-pa02-MikeCuzzo.dir/depend
