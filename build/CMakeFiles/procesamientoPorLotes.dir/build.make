# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kristo/Documents/productor_consumidor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kristo/Documents/productor_consumidor/build

# Include any dependencies generated for this target.
include CMakeFiles/procesamientoPorLotes.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/procesamientoPorLotes.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/procesamientoPorLotes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/procesamientoPorLotes.dir/flags.make

CMakeFiles/procesamientoPorLotes.dir/src/main.cpp.o: CMakeFiles/procesamientoPorLotes.dir/flags.make
CMakeFiles/procesamientoPorLotes.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/procesamientoPorLotes.dir/src/main.cpp.o: CMakeFiles/procesamientoPorLotes.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kristo/Documents/productor_consumidor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/procesamientoPorLotes.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/procesamientoPorLotes.dir/src/main.cpp.o -MF CMakeFiles/procesamientoPorLotes.dir/src/main.cpp.o.d -o CMakeFiles/procesamientoPorLotes.dir/src/main.cpp.o -c /home/kristo/Documents/productor_consumidor/src/main.cpp

CMakeFiles/procesamientoPorLotes.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/procesamientoPorLotes.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kristo/Documents/productor_consumidor/src/main.cpp > CMakeFiles/procesamientoPorLotes.dir/src/main.cpp.i

CMakeFiles/procesamientoPorLotes.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/procesamientoPorLotes.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kristo/Documents/productor_consumidor/src/main.cpp -o CMakeFiles/procesamientoPorLotes.dir/src/main.cpp.s

CMakeFiles/procesamientoPorLotes.dir/src/controller.cpp.o: CMakeFiles/procesamientoPorLotes.dir/flags.make
CMakeFiles/procesamientoPorLotes.dir/src/controller.cpp.o: ../src/controller.cpp
CMakeFiles/procesamientoPorLotes.dir/src/controller.cpp.o: CMakeFiles/procesamientoPorLotes.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kristo/Documents/productor_consumidor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/procesamientoPorLotes.dir/src/controller.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/procesamientoPorLotes.dir/src/controller.cpp.o -MF CMakeFiles/procesamientoPorLotes.dir/src/controller.cpp.o.d -o CMakeFiles/procesamientoPorLotes.dir/src/controller.cpp.o -c /home/kristo/Documents/productor_consumidor/src/controller.cpp

CMakeFiles/procesamientoPorLotes.dir/src/controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/procesamientoPorLotes.dir/src/controller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kristo/Documents/productor_consumidor/src/controller.cpp > CMakeFiles/procesamientoPorLotes.dir/src/controller.cpp.i

CMakeFiles/procesamientoPorLotes.dir/src/controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/procesamientoPorLotes.dir/src/controller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kristo/Documents/productor_consumidor/src/controller.cpp -o CMakeFiles/procesamientoPorLotes.dir/src/controller.cpp.s

CMakeFiles/procesamientoPorLotes.dir/src/cursor.cpp.o: CMakeFiles/procesamientoPorLotes.dir/flags.make
CMakeFiles/procesamientoPorLotes.dir/src/cursor.cpp.o: ../src/cursor.cpp
CMakeFiles/procesamientoPorLotes.dir/src/cursor.cpp.o: CMakeFiles/procesamientoPorLotes.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kristo/Documents/productor_consumidor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/procesamientoPorLotes.dir/src/cursor.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/procesamientoPorLotes.dir/src/cursor.cpp.o -MF CMakeFiles/procesamientoPorLotes.dir/src/cursor.cpp.o.d -o CMakeFiles/procesamientoPorLotes.dir/src/cursor.cpp.o -c /home/kristo/Documents/productor_consumidor/src/cursor.cpp

CMakeFiles/procesamientoPorLotes.dir/src/cursor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/procesamientoPorLotes.dir/src/cursor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kristo/Documents/productor_consumidor/src/cursor.cpp > CMakeFiles/procesamientoPorLotes.dir/src/cursor.cpp.i

CMakeFiles/procesamientoPorLotes.dir/src/cursor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/procesamientoPorLotes.dir/src/cursor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kristo/Documents/productor_consumidor/src/cursor.cpp -o CMakeFiles/procesamientoPorLotes.dir/src/cursor.cpp.s

# Object files for target procesamientoPorLotes
procesamientoPorLotes_OBJECTS = \
"CMakeFiles/procesamientoPorLotes.dir/src/main.cpp.o" \
"CMakeFiles/procesamientoPorLotes.dir/src/controller.cpp.o" \
"CMakeFiles/procesamientoPorLotes.dir/src/cursor.cpp.o"

# External object files for target procesamientoPorLotes
procesamientoPorLotes_EXTERNAL_OBJECTS =

procesamientoPorLotes: CMakeFiles/procesamientoPorLotes.dir/src/main.cpp.o
procesamientoPorLotes: CMakeFiles/procesamientoPorLotes.dir/src/controller.cpp.o
procesamientoPorLotes: CMakeFiles/procesamientoPorLotes.dir/src/cursor.cpp.o
procesamientoPorLotes: CMakeFiles/procesamientoPorLotes.dir/build.make
procesamientoPorLotes: CMakeFiles/procesamientoPorLotes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kristo/Documents/productor_consumidor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable procesamientoPorLotes"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/procesamientoPorLotes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/procesamientoPorLotes.dir/build: procesamientoPorLotes
.PHONY : CMakeFiles/procesamientoPorLotes.dir/build

CMakeFiles/procesamientoPorLotes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/procesamientoPorLotes.dir/cmake_clean.cmake
.PHONY : CMakeFiles/procesamientoPorLotes.dir/clean

CMakeFiles/procesamientoPorLotes.dir/depend:
	cd /home/kristo/Documents/productor_consumidor/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kristo/Documents/productor_consumidor /home/kristo/Documents/productor_consumidor /home/kristo/Documents/productor_consumidor/build /home/kristo/Documents/productor_consumidor/build /home/kristo/Documents/productor_consumidor/build/CMakeFiles/procesamientoPorLotes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/procesamientoPorLotes.dir/depend

