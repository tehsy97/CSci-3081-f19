# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/teh00001/3081_f19/repo-teh00001/external/gtest/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/teh00001/3081_f19/repo-teh00001/external/gtest/build

# Include any dependencies generated for this target.
include googlemock/CMakeFiles/gmock.dir/depend.make

# Include the progress variables for this target.
include googlemock/CMakeFiles/gmock.dir/progress.make

# Include the compile flags for this target's objects.
include googlemock/CMakeFiles/gmock.dir/flags.make

googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o: googlemock/CMakeFiles/gmock.dir/flags.make
googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o: /home/teh00001/3081_f19/repo-teh00001/external/gtest/src/googlemock/src/gmock-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/teh00001/3081_f19/repo-teh00001/external/gtest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o"
	cd /home/teh00001/3081_f19/repo-teh00001/external/gtest/build/googlemock && /soft/gcc/7.1.0/Linux_x86_64/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gmock.dir/src/gmock-all.cc.o -c /home/teh00001/3081_f19/repo-teh00001/external/gtest/src/googlemock/src/gmock-all.cc

googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock.dir/src/gmock-all.cc.i"
	cd /home/teh00001/3081_f19/repo-teh00001/external/gtest/build/googlemock && /soft/gcc/7.1.0/Linux_x86_64/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teh00001/3081_f19/repo-teh00001/external/gtest/src/googlemock/src/gmock-all.cc > CMakeFiles/gmock.dir/src/gmock-all.cc.i

googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock.dir/src/gmock-all.cc.s"
	cd /home/teh00001/3081_f19/repo-teh00001/external/gtest/build/googlemock && /soft/gcc/7.1.0/Linux_x86_64/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teh00001/3081_f19/repo-teh00001/external/gtest/src/googlemock/src/gmock-all.cc -o CMakeFiles/gmock.dir/src/gmock-all.cc.s

googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.requires:

.PHONY : googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.requires

googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.provides: googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.requires
	$(MAKE) -f googlemock/CMakeFiles/gmock.dir/build.make googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.provides.build
.PHONY : googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.provides

googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.provides.build: googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o


# Object files for target gmock
gmock_OBJECTS = \
"CMakeFiles/gmock.dir/src/gmock-all.cc.o"

# External object files for target gmock
gmock_EXTERNAL_OBJECTS =

lib/libgmock.a: googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
lib/libgmock.a: googlemock/CMakeFiles/gmock.dir/build.make
lib/libgmock.a: googlemock/CMakeFiles/gmock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/teh00001/3081_f19/repo-teh00001/external/gtest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../lib/libgmock.a"
	cd /home/teh00001/3081_f19/repo-teh00001/external/gtest/build/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock.dir/cmake_clean_target.cmake
	cd /home/teh00001/3081_f19/repo-teh00001/external/gtest/build/googlemock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gmock.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
googlemock/CMakeFiles/gmock.dir/build: lib/libgmock.a

.PHONY : googlemock/CMakeFiles/gmock.dir/build

googlemock/CMakeFiles/gmock.dir/requires: googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.requires

.PHONY : googlemock/CMakeFiles/gmock.dir/requires

googlemock/CMakeFiles/gmock.dir/clean:
	cd /home/teh00001/3081_f19/repo-teh00001/external/gtest/build/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock.dir/cmake_clean.cmake
.PHONY : googlemock/CMakeFiles/gmock.dir/clean

googlemock/CMakeFiles/gmock.dir/depend:
	cd /home/teh00001/3081_f19/repo-teh00001/external/gtest/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/teh00001/3081_f19/repo-teh00001/external/gtest/src /home/teh00001/3081_f19/repo-teh00001/external/gtest/src/googlemock /home/teh00001/3081_f19/repo-teh00001/external/gtest/build /home/teh00001/3081_f19/repo-teh00001/external/gtest/build/googlemock /home/teh00001/3081_f19/repo-teh00001/external/gtest/build/googlemock/CMakeFiles/gmock.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : googlemock/CMakeFiles/gmock.dir/depend

