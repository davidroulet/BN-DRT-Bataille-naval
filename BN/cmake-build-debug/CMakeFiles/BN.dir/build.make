# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "P:\Clion\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "P:\Clion\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = W:\Documents\GitHub\BN-DRT-Bataille-naval\BN

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = W:\Documents\GitHub\BN-DRT-Bataille-naval\BN\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BN.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BN.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BN.dir/flags.make

CMakeFiles/BN.dir/main.c.obj: CMakeFiles/BN.dir/flags.make
CMakeFiles/BN.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=W:\Documents\GitHub\BN-DRT-Bataille-naval\BN\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/BN.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\BN.dir\main.c.obj   -c W:\Documents\GitHub\BN-DRT-Bataille-naval\BN\main.c

CMakeFiles/BN.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BN.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E W:\Documents\GitHub\BN-DRT-Bataille-naval\BN\main.c > CMakeFiles\BN.dir\main.c.i

CMakeFiles/BN.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BN.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S W:\Documents\GitHub\BN-DRT-Bataille-naval\BN\main.c -o CMakeFiles\BN.dir\main.c.s

# Object files for target BN
BN_OBJECTS = \
"CMakeFiles/BN.dir/main.c.obj"

# External object files for target BN
BN_EXTERNAL_OBJECTS =

BN.exe: CMakeFiles/BN.dir/main.c.obj
BN.exe: CMakeFiles/BN.dir/build.make
BN.exe: CMakeFiles/BN.dir/linklibs.rsp
BN.exe: CMakeFiles/BN.dir/objects1.rsp
BN.exe: CMakeFiles/BN.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=W:\Documents\GitHub\BN-DRT-Bataille-naval\BN\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable BN.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BN.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BN.dir/build: BN.exe

.PHONY : CMakeFiles/BN.dir/build

CMakeFiles/BN.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BN.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BN.dir/clean

CMakeFiles/BN.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" W:\Documents\GitHub\BN-DRT-Bataille-naval\BN W:\Documents\GitHub\BN-DRT-Bataille-naval\BN W:\Documents\GitHub\BN-DRT-Bataille-naval\BN\cmake-build-debug W:\Documents\GitHub\BN-DRT-Bataille-naval\BN\cmake-build-debug W:\Documents\GitHub\BN-DRT-Bataille-naval\BN\cmake-build-debug\CMakeFiles\BN.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BN.dir/depend

