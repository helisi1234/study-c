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
CMAKE_SOURCE_DIR = D:\project\C\study-c\Chapter7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\project\C\study-c\Chapter7\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Chapter7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Chapter7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Chapter7.dir/flags.make

CMakeFiles/Chapter7.dir/helloworld.c.obj: CMakeFiles/Chapter7.dir/flags.make
CMakeFiles/Chapter7.dir/helloworld.c.obj: ../helloworld.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\project\C\study-c\Chapter7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Chapter7.dir/helloworld.c.obj"
	D:\soft\ide\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Chapter7.dir\helloworld.c.obj   -c D:\project\C\study-c\Chapter7\helloworld.c

CMakeFiles/Chapter7.dir/helloworld.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Chapter7.dir/helloworld.c.i"
	D:\soft\ide\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\project\C\study-c\Chapter7\helloworld.c > CMakeFiles\Chapter7.dir\helloworld.c.i

CMakeFiles/Chapter7.dir/helloworld.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Chapter7.dir/helloworld.c.s"
	D:\soft\ide\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\project\C\study-c\Chapter7\helloworld.c -o CMakeFiles\Chapter7.dir\helloworld.c.s

CMakeFiles/Chapter7.dir/mathutils/factorial.c.obj: CMakeFiles/Chapter7.dir/flags.make
CMakeFiles/Chapter7.dir/mathutils/factorial.c.obj: ../mathutils/factorial.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\project\C\study-c\Chapter7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Chapter7.dir/mathutils/factorial.c.obj"
	D:\soft\ide\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Chapter7.dir\mathutils\factorial.c.obj   -c D:\project\C\study-c\Chapter7\mathutils\factorial.c

CMakeFiles/Chapter7.dir/mathutils/factorial.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Chapter7.dir/mathutils/factorial.c.i"
	D:\soft\ide\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\project\C\study-c\Chapter7\mathutils\factorial.c > CMakeFiles\Chapter7.dir\mathutils\factorial.c.i

CMakeFiles/Chapter7.dir/mathutils/factorial.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Chapter7.dir/mathutils/factorial.c.s"
	D:\soft\ide\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\project\C\study-c\Chapter7\mathutils\factorial.c -o CMakeFiles\Chapter7.dir\mathutils\factorial.c.s

CMakeFiles/Chapter7.dir/mathutils/fibonacci.c.obj: CMakeFiles/Chapter7.dir/flags.make
CMakeFiles/Chapter7.dir/mathutils/fibonacci.c.obj: ../mathutils/fibonacci.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\project\C\study-c\Chapter7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Chapter7.dir/mathutils/fibonacci.c.obj"
	D:\soft\ide\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Chapter7.dir\mathutils\fibonacci.c.obj   -c D:\project\C\study-c\Chapter7\mathutils\fibonacci.c

CMakeFiles/Chapter7.dir/mathutils/fibonacci.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Chapter7.dir/mathutils/fibonacci.c.i"
	D:\soft\ide\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\project\C\study-c\Chapter7\mathutils\fibonacci.c > CMakeFiles\Chapter7.dir\mathutils\fibonacci.c.i

CMakeFiles/Chapter7.dir/mathutils/fibonacci.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Chapter7.dir/mathutils/fibonacci.c.s"
	D:\soft\ide\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\project\C\study-c\Chapter7\mathutils\fibonacci.c -o CMakeFiles\Chapter7.dir\mathutils\fibonacci.c.s

# Object files for target Chapter7
Chapter7_OBJECTS = \
"CMakeFiles/Chapter7.dir/helloworld.c.obj" \
"CMakeFiles/Chapter7.dir/mathutils/factorial.c.obj" \
"CMakeFiles/Chapter7.dir/mathutils/fibonacci.c.obj"

# External object files for target Chapter7
Chapter7_EXTERNAL_OBJECTS =

Chapter7.exe: CMakeFiles/Chapter7.dir/helloworld.c.obj
Chapter7.exe: CMakeFiles/Chapter7.dir/mathutils/factorial.c.obj
Chapter7.exe: CMakeFiles/Chapter7.dir/mathutils/fibonacci.c.obj
Chapter7.exe: CMakeFiles/Chapter7.dir/build.make
Chapter7.exe: CMakeFiles/Chapter7.dir/linklibs.rsp
Chapter7.exe: CMakeFiles/Chapter7.dir/objects1.rsp
Chapter7.exe: CMakeFiles/Chapter7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\project\C\study-c\Chapter7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable Chapter7.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Chapter7.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Chapter7.dir/build: Chapter7.exe

.PHONY : CMakeFiles/Chapter7.dir/build

CMakeFiles/Chapter7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Chapter7.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Chapter7.dir/clean

CMakeFiles/Chapter7.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\project\C\study-c\Chapter7 D:\project\C\study-c\Chapter7 D:\project\C\study-c\Chapter7\cmake-build-debug D:\project\C\study-c\Chapter7\cmake-build-debug D:\project\C\study-c\Chapter7\cmake-build-debug\CMakeFiles\Chapter7.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Chapter7.dir/depend

