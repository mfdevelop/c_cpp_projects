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
CMAKE_SOURCE_DIR = /home/asia/CLionProjects/startUpBaClass

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/asia/CLionProjects/startUpBaClass/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/startUpBaClass.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/startUpBaClass.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/startUpBaClass.dir/flags.make

CMakeFiles/startUpBaClass.dir/main.cpp.o: CMakeFiles/startUpBaClass.dir/flags.make
CMakeFiles/startUpBaClass.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/asia/CLionProjects/startUpBaClass/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/startUpBaClass.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/startUpBaClass.dir/main.cpp.o -c /home/asia/CLionProjects/startUpBaClass/main.cpp

CMakeFiles/startUpBaClass.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/startUpBaClass.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/asia/CLionProjects/startUpBaClass/main.cpp > CMakeFiles/startUpBaClass.dir/main.cpp.i

CMakeFiles/startUpBaClass.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/startUpBaClass.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/asia/CLionProjects/startUpBaClass/main.cpp -o CMakeFiles/startUpBaClass.dir/main.cpp.s

# Object files for target startUpBaClass
startUpBaClass_OBJECTS = \
"CMakeFiles/startUpBaClass.dir/main.cpp.o"

# External object files for target startUpBaClass
startUpBaClass_EXTERNAL_OBJECTS =

startUpBaClass: CMakeFiles/startUpBaClass.dir/main.cpp.o
startUpBaClass: CMakeFiles/startUpBaClass.dir/build.make
startUpBaClass: CMakeFiles/startUpBaClass.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/asia/CLionProjects/startUpBaClass/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable startUpBaClass"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/startUpBaClass.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/startUpBaClass.dir/build: startUpBaClass

.PHONY : CMakeFiles/startUpBaClass.dir/build

CMakeFiles/startUpBaClass.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/startUpBaClass.dir/cmake_clean.cmake
.PHONY : CMakeFiles/startUpBaClass.dir/clean

CMakeFiles/startUpBaClass.dir/depend:
	cd /home/asia/CLionProjects/startUpBaClass/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/asia/CLionProjects/startUpBaClass /home/asia/CLionProjects/startUpBaClass /home/asia/CLionProjects/startUpBaClass/cmake-build-debug /home/asia/CLionProjects/startUpBaClass/cmake-build-debug /home/asia/CLionProjects/startUpBaClass/cmake-build-debug/CMakeFiles/startUpBaClass.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/startUpBaClass.dir/depend

