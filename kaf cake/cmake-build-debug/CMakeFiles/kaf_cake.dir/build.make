# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/asia/Downloads/CLion-2021.1.3/clion-2021.1.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/asia/Downloads/CLion-2021.1.3/clion-2021.1.3/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/asia/CLionProjects/kaf cake"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/asia/CLionProjects/kaf cake/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/kaf_cake.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/kaf_cake.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/kaf_cake.dir/flags.make

CMakeFiles/kaf_cake.dir/main.cpp.o: CMakeFiles/kaf_cake.dir/flags.make
CMakeFiles/kaf_cake.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/asia/CLionProjects/kaf cake/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/kaf_cake.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kaf_cake.dir/main.cpp.o -c "/home/asia/CLionProjects/kaf cake/main.cpp"

CMakeFiles/kaf_cake.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kaf_cake.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/asia/CLionProjects/kaf cake/main.cpp" > CMakeFiles/kaf_cake.dir/main.cpp.i

CMakeFiles/kaf_cake.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kaf_cake.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/asia/CLionProjects/kaf cake/main.cpp" -o CMakeFiles/kaf_cake.dir/main.cpp.s

# Object files for target kaf_cake
kaf_cake_OBJECTS = \
"CMakeFiles/kaf_cake.dir/main.cpp.o"

# External object files for target kaf_cake
kaf_cake_EXTERNAL_OBJECTS =

kaf_cake: CMakeFiles/kaf_cake.dir/main.cpp.o
kaf_cake: CMakeFiles/kaf_cake.dir/build.make
kaf_cake: CMakeFiles/kaf_cake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/asia/CLionProjects/kaf cake/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable kaf_cake"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kaf_cake.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/kaf_cake.dir/build: kaf_cake

.PHONY : CMakeFiles/kaf_cake.dir/build

CMakeFiles/kaf_cake.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/kaf_cake.dir/cmake_clean.cmake
.PHONY : CMakeFiles/kaf_cake.dir/clean

CMakeFiles/kaf_cake.dir/depend:
	cd "/home/asia/CLionProjects/kaf cake/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/asia/CLionProjects/kaf cake" "/home/asia/CLionProjects/kaf cake" "/home/asia/CLionProjects/kaf cake/cmake-build-debug" "/home/asia/CLionProjects/kaf cake/cmake-build-debug" "/home/asia/CLionProjects/kaf cake/cmake-build-debug/CMakeFiles/kaf_cake.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/kaf_cake.dir/depend

