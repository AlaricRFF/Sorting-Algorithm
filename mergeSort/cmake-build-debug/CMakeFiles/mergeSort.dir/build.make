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
CMAKE_COMMAND = "/Users/mac/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/211.7142.21/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/mac/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/211.7142.21/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mac/Desktop/2021.Autumn/code/mergeSort

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mac/Desktop/2021.Autumn/code/mergeSort/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mergeSort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mergeSort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mergeSort.dir/flags.make

CMakeFiles/mergeSort.dir/mergeSort.cpp.o: CMakeFiles/mergeSort.dir/flags.make
CMakeFiles/mergeSort.dir/mergeSort.cpp.o: ../mergeSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mac/Desktop/2021.Autumn/code/mergeSort/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mergeSort.dir/mergeSort.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mergeSort.dir/mergeSort.cpp.o -c /Users/mac/Desktop/2021.Autumn/code/mergeSort/mergeSort.cpp

CMakeFiles/mergeSort.dir/mergeSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mergeSort.dir/mergeSort.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Desktop/2021.Autumn/code/mergeSort/mergeSort.cpp > CMakeFiles/mergeSort.dir/mergeSort.cpp.i

CMakeFiles/mergeSort.dir/mergeSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mergeSort.dir/mergeSort.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Desktop/2021.Autumn/code/mergeSort/mergeSort.cpp -o CMakeFiles/mergeSort.dir/mergeSort.cpp.s

# Object files for target mergeSort
mergeSort_OBJECTS = \
"CMakeFiles/mergeSort.dir/mergeSort.cpp.o"

# External object files for target mergeSort
mergeSort_EXTERNAL_OBJECTS =

mergeSort: CMakeFiles/mergeSort.dir/mergeSort.cpp.o
mergeSort: CMakeFiles/mergeSort.dir/build.make
mergeSort: CMakeFiles/mergeSort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mac/Desktop/2021.Autumn/code/mergeSort/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mergeSort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mergeSort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mergeSort.dir/build: mergeSort

.PHONY : CMakeFiles/mergeSort.dir/build

CMakeFiles/mergeSort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mergeSort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mergeSort.dir/clean

CMakeFiles/mergeSort.dir/depend:
	cd /Users/mac/Desktop/2021.Autumn/code/mergeSort/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mac/Desktop/2021.Autumn/code/mergeSort /Users/mac/Desktop/2021.Autumn/code/mergeSort /Users/mac/Desktop/2021.Autumn/code/mergeSort/cmake-build-debug /Users/mac/Desktop/2021.Autumn/code/mergeSort/cmake-build-debug /Users/mac/Desktop/2021.Autumn/code/mergeSort/cmake-build-debug/CMakeFiles/mergeSort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mergeSort.dir/depend
