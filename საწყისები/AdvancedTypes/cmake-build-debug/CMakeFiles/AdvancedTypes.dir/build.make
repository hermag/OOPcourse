# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ereklemagradze/CodeArea/OOPcourse/საწყისები/AdvancedTypes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ereklemagradze/CodeArea/OOPcourse/საწყისები/AdvancedTypes/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/AdvancedTypes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AdvancedTypes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AdvancedTypes.dir/flags.make

CMakeFiles/AdvancedTypes.dir/main.cpp.o: CMakeFiles/AdvancedTypes.dir/flags.make
CMakeFiles/AdvancedTypes.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ereklemagradze/CodeArea/OOPcourse/საწყისები/AdvancedTypes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AdvancedTypes.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AdvancedTypes.dir/main.cpp.o -c /Users/ereklemagradze/CodeArea/OOPcourse/საწყისები/AdvancedTypes/main.cpp

CMakeFiles/AdvancedTypes.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AdvancedTypes.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ereklemagradze/CodeArea/OOPcourse/საწყისები/AdvancedTypes/main.cpp > CMakeFiles/AdvancedTypes.dir/main.cpp.i

CMakeFiles/AdvancedTypes.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AdvancedTypes.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ereklemagradze/CodeArea/OOPcourse/საწყისები/AdvancedTypes/main.cpp -o CMakeFiles/AdvancedTypes.dir/main.cpp.s

# Object files for target AdvancedTypes
AdvancedTypes_OBJECTS = \
"CMakeFiles/AdvancedTypes.dir/main.cpp.o"

# External object files for target AdvancedTypes
AdvancedTypes_EXTERNAL_OBJECTS =

AdvancedTypes: CMakeFiles/AdvancedTypes.dir/main.cpp.o
AdvancedTypes: CMakeFiles/AdvancedTypes.dir/build.make
AdvancedTypes: CMakeFiles/AdvancedTypes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ereklemagradze/CodeArea/OOPcourse/საწყისები/AdvancedTypes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AdvancedTypes"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AdvancedTypes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AdvancedTypes.dir/build: AdvancedTypes

.PHONY : CMakeFiles/AdvancedTypes.dir/build

CMakeFiles/AdvancedTypes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AdvancedTypes.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AdvancedTypes.dir/clean

CMakeFiles/AdvancedTypes.dir/depend:
	cd /Users/ereklemagradze/CodeArea/OOPcourse/საწყისები/AdvancedTypes/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ereklemagradze/CodeArea/OOPcourse/საწყისები/AdvancedTypes /Users/ereklemagradze/CodeArea/OOPcourse/საწყისები/AdvancedTypes /Users/ereklemagradze/CodeArea/OOPcourse/საწყისები/AdvancedTypes/cmake-build-debug /Users/ereklemagradze/CodeArea/OOPcourse/საწყისები/AdvancedTypes/cmake-build-debug /Users/ereklemagradze/CodeArea/OOPcourse/საწყისები/AdvancedTypes/cmake-build-debug/CMakeFiles/AdvancedTypes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AdvancedTypes.dir/depend

