# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/nicholas/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nicholas/catkin_ws/build

# Include any dependencies generated for this target.
include PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/depend.make

# Include the progress variables for this target.
include PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/progress.make

# Include the compile flags for this target's objects.
include PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/flags.make

PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/lsl-static_autogen/mocs_compilation.cpp.o: PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/flags.make
PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/lsl-static_autogen/mocs_compilation.cpp.o: PlotJuggler/3rdparty/liblsl/lsl-static_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nicholas/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/lsl-static_autogen/mocs_compilation.cpp.o"
	cd /home/nicholas/catkin_ws/build/PlotJuggler/3rdparty/liblsl && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lsl-static.dir/lsl-static_autogen/mocs_compilation.cpp.o -c /home/nicholas/catkin_ws/build/PlotJuggler/3rdparty/liblsl/lsl-static_autogen/mocs_compilation.cpp

PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/lsl-static_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lsl-static.dir/lsl-static_autogen/mocs_compilation.cpp.i"
	cd /home/nicholas/catkin_ws/build/PlotJuggler/3rdparty/liblsl && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nicholas/catkin_ws/build/PlotJuggler/3rdparty/liblsl/lsl-static_autogen/mocs_compilation.cpp > CMakeFiles/lsl-static.dir/lsl-static_autogen/mocs_compilation.cpp.i

PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/lsl-static_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lsl-static.dir/lsl-static_autogen/mocs_compilation.cpp.s"
	cd /home/nicholas/catkin_ws/build/PlotJuggler/3rdparty/liblsl && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nicholas/catkin_ws/build/PlotJuggler/3rdparty/liblsl/lsl-static_autogen/mocs_compilation.cpp -o CMakeFiles/lsl-static.dir/lsl-static_autogen/mocs_compilation.cpp.s

PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/src/buildinfo.cpp.o: PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/flags.make
PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/src/buildinfo.cpp.o: /home/nicholas/catkin_ws/src/PlotJuggler/3rdparty/liblsl/src/buildinfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nicholas/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/src/buildinfo.cpp.o"
	cd /home/nicholas/catkin_ws/build/PlotJuggler/3rdparty/liblsl && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lsl-static.dir/src/buildinfo.cpp.o -c /home/nicholas/catkin_ws/src/PlotJuggler/3rdparty/liblsl/src/buildinfo.cpp

PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/src/buildinfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lsl-static.dir/src/buildinfo.cpp.i"
	cd /home/nicholas/catkin_ws/build/PlotJuggler/3rdparty/liblsl && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nicholas/catkin_ws/src/PlotJuggler/3rdparty/liblsl/src/buildinfo.cpp > CMakeFiles/lsl-static.dir/src/buildinfo.cpp.i

PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/src/buildinfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lsl-static.dir/src/buildinfo.cpp.s"
	cd /home/nicholas/catkin_ws/build/PlotJuggler/3rdparty/liblsl && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nicholas/catkin_ws/src/PlotJuggler/3rdparty/liblsl/src/buildinfo.cpp -o CMakeFiles/lsl-static.dir/src/buildinfo.cpp.s

# Object files for target lsl-static
lsl__static_OBJECTS = \
"CMakeFiles/lsl-static.dir/lsl-static_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/lsl-static.dir/src/buildinfo.cpp.o"

# External object files for target lsl-static
lsl__static_EXTERNAL_OBJECTS =

/home/nicholas/catkin_ws/devel/lib/liblsl-static.a: PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/lsl-static_autogen/mocs_compilation.cpp.o
/home/nicholas/catkin_ws/devel/lib/liblsl-static.a: PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/src/buildinfo.cpp.o
/home/nicholas/catkin_ws/devel/lib/liblsl-static.a: PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/build.make
/home/nicholas/catkin_ws/devel/lib/liblsl-static.a: PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nicholas/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library /home/nicholas/catkin_ws/devel/lib/liblsl-static.a"
	cd /home/nicholas/catkin_ws/build/PlotJuggler/3rdparty/liblsl && $(CMAKE_COMMAND) -P CMakeFiles/lsl-static.dir/cmake_clean_target.cmake
	cd /home/nicholas/catkin_ws/build/PlotJuggler/3rdparty/liblsl && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lsl-static.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/build: /home/nicholas/catkin_ws/devel/lib/liblsl-static.a

.PHONY : PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/build

PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/clean:
	cd /home/nicholas/catkin_ws/build/PlotJuggler/3rdparty/liblsl && $(CMAKE_COMMAND) -P CMakeFiles/lsl-static.dir/cmake_clean.cmake
.PHONY : PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/clean

PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/depend:
	cd /home/nicholas/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nicholas/catkin_ws/src /home/nicholas/catkin_ws/src/PlotJuggler/3rdparty/liblsl /home/nicholas/catkin_ws/build /home/nicholas/catkin_ws/build/PlotJuggler/3rdparty/liblsl /home/nicholas/catkin_ws/build/PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : PlotJuggler/3rdparty/liblsl/CMakeFiles/lsl-static.dir/depend

