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
CMAKE_COMMAND = /cygdrive/c/Users/gulu/AppData/Local/JetBrains/CLion2020.1/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/gulu/AppData/Local/JetBrains/CLion2020.1/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/i/matrix1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/i/matrix1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/matrix.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/matrix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/matrix.dir/flags.make

CMakeFiles/matrix.dir/main.cpp.o: CMakeFiles/matrix.dir/flags.make
CMakeFiles/matrix.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/i/matrix1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/matrix.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matrix.dir/main.cpp.o -c /cygdrive/i/matrix1/main.cpp

CMakeFiles/matrix.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matrix.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/i/matrix1/main.cpp > CMakeFiles/matrix.dir/main.cpp.i

CMakeFiles/matrix.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matrix.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/i/matrix1/main.cpp -o CMakeFiles/matrix.dir/main.cpp.s

CMakeFiles/matrix.dir/matrix/matrix.cpp.o: CMakeFiles/matrix.dir/flags.make
CMakeFiles/matrix.dir/matrix/matrix.cpp.o: ../matrix/matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/i/matrix1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/matrix.dir/matrix/matrix.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matrix.dir/matrix/matrix.cpp.o -c /cygdrive/i/matrix1/matrix/matrix.cpp

CMakeFiles/matrix.dir/matrix/matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matrix.dir/matrix/matrix.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/i/matrix1/matrix/matrix.cpp > CMakeFiles/matrix.dir/matrix/matrix.cpp.i

CMakeFiles/matrix.dir/matrix/matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matrix.dir/matrix/matrix.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/i/matrix1/matrix/matrix.cpp -o CMakeFiles/matrix.dir/matrix/matrix.cpp.s

CMakeFiles/matrix.dir/matrix/sparse_matrix.cpp.o: CMakeFiles/matrix.dir/flags.make
CMakeFiles/matrix.dir/matrix/sparse_matrix.cpp.o: ../matrix/sparse_matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/i/matrix1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/matrix.dir/matrix/sparse_matrix.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matrix.dir/matrix/sparse_matrix.cpp.o -c /cygdrive/i/matrix1/matrix/sparse_matrix.cpp

CMakeFiles/matrix.dir/matrix/sparse_matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matrix.dir/matrix/sparse_matrix.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/i/matrix1/matrix/sparse_matrix.cpp > CMakeFiles/matrix.dir/matrix/sparse_matrix.cpp.i

CMakeFiles/matrix.dir/matrix/sparse_matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matrix.dir/matrix/sparse_matrix.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/i/matrix1/matrix/sparse_matrix.cpp -o CMakeFiles/matrix.dir/matrix/sparse_matrix.cpp.s

# Object files for target matrix
matrix_OBJECTS = \
"CMakeFiles/matrix.dir/main.cpp.o" \
"CMakeFiles/matrix.dir/matrix/matrix.cpp.o" \
"CMakeFiles/matrix.dir/matrix/sparse_matrix.cpp.o"

# External object files for target matrix
matrix_EXTERNAL_OBJECTS =

matrix.exe: CMakeFiles/matrix.dir/main.cpp.o
matrix.exe: CMakeFiles/matrix.dir/matrix/matrix.cpp.o
matrix.exe: CMakeFiles/matrix.dir/matrix/sparse_matrix.cpp.o
matrix.exe: CMakeFiles/matrix.dir/build.make
matrix.exe: CMakeFiles/matrix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/i/matrix1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable matrix.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/matrix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/matrix.dir/build: matrix.exe

.PHONY : CMakeFiles/matrix.dir/build

CMakeFiles/matrix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/matrix.dir/cmake_clean.cmake
.PHONY : CMakeFiles/matrix.dir/clean

CMakeFiles/matrix.dir/depend:
	cd /cygdrive/i/matrix1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/i/matrix1 /cygdrive/i/matrix1 /cygdrive/i/matrix1/cmake-build-debug /cygdrive/i/matrix1/cmake-build-debug /cygdrive/i/matrix1/cmake-build-debug/CMakeFiles/matrix.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/matrix.dir/depend

