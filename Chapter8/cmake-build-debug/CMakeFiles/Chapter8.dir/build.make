# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = "D:\soft\ide\gongju\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\soft\ide\gongju\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\project\C\study-c\Chapter8

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\project\C\study-c\Chapter8\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Chapter8.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Chapter8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Chapter8.dir/flags.make

CMakeFiles/Chapter8.dir/07.dynamic_memory.c.obj: CMakeFiles/Chapter8.dir/flags.make
CMakeFiles/Chapter8.dir/07.dynamic_memory.c.obj: ../07.dynamic_memory.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\project\C\study-c\Chapter8\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Chapter8.dir/07.dynamic_memory.c.obj"
	D:\soft\ide\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Chapter8.dir\07.dynamic_memory.c.obj   -c D:\project\C\study-c\Chapter8\07.dynamic_memory.c

CMakeFiles/Chapter8.dir/07.dynamic_memory.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Chapter8.dir/07.dynamic_memory.c.i"
	D:\soft\ide\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\project\C\study-c\Chapter8\07.dynamic_memory.c > CMakeFiles\Chapter8.dir\07.dynamic_memory.c.i

CMakeFiles/Chapter8.dir/07.dynamic_memory.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Chapter8.dir/07.dynamic_memory.c.s"
	D:\soft\ide\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\project\C\study-c\Chapter8\07.dynamic_memory.c -o CMakeFiles\Chapter8.dir\07.dynamic_memory.c.s

# Object files for target Chapter8
Chapter8_OBJECTS = \
"CMakeFiles/Chapter8.dir/07.dynamic_memory.c.obj"

# External object files for target Chapter8
Chapter8_EXTERNAL_OBJECTS =

Chapter8.exe: CMakeFiles/Chapter8.dir/07.dynamic_memory.c.obj
Chapter8.exe: CMakeFiles/Chapter8.dir/build.make
Chapter8.exe: CMakeFiles/Chapter8.dir/linklibs.rsp
Chapter8.exe: CMakeFiles/Chapter8.dir/objects1.rsp
Chapter8.exe: CMakeFiles/Chapter8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\project\C\study-c\Chapter8\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Chapter8.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Chapter8.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Chapter8.dir/build: Chapter8.exe

.PHONY : CMakeFiles/Chapter8.dir/build

CMakeFiles/Chapter8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Chapter8.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Chapter8.dir/clean

CMakeFiles/Chapter8.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\project\C\study-c\Chapter8 D:\project\C\study-c\Chapter8 D:\project\C\study-c\Chapter8\cmake-build-debug D:\project\C\study-c\Chapter8\cmake-build-debug D:\project\C\study-c\Chapter8\cmake-build-debug\CMakeFiles\Chapter8.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Chapter8.dir/depend

