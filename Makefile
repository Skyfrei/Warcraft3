# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /export/home/klaviot99dm/Lab1/Warcraft3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /export/home/klaviot99dm/Lab1/Warcraft3

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /export/home/klaviot99dm/Lab1/Warcraft3/CMakeFiles /export/home/klaviot99dm/Lab1/Warcraft3/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /export/home/klaviot99dm/Lab1/Warcraft3/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named Final

# Build rule for target.
Final: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 Final
.PHONY : Final

# fast build rule for target.
Final/fast:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/build
.PHONY : Final/fast

#=============================================================================
# Target rules for targets named Warcraft

# Build rule for target.
Warcraft: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 Warcraft
.PHONY : Warcraft

# fast build rule for target.
Warcraft/fast:
	$(MAKE) -f CMakeFiles/Warcraft.dir/build.make CMakeFiles/Warcraft.dir/build
.PHONY : Warcraft/fast

Bindings/bind.o: Bindings/bind.cpp.o

.PHONY : Bindings/bind.o

# target to build an object file
Bindings/bind.cpp.o:
	$(MAKE) -f CMakeFiles/Warcraft.dir/build.make CMakeFiles/Warcraft.dir/Bindings/bind.cpp.o
.PHONY : Bindings/bind.cpp.o

Bindings/bind.i: Bindings/bind.cpp.i

.PHONY : Bindings/bind.i

# target to preprocess a source file
Bindings/bind.cpp.i:
	$(MAKE) -f CMakeFiles/Warcraft.dir/build.make CMakeFiles/Warcraft.dir/Bindings/bind.cpp.i
.PHONY : Bindings/bind.cpp.i

Bindings/bind.s: Bindings/bind.cpp.s

.PHONY : Bindings/bind.s

# target to generate assembly for a file
Bindings/bind.cpp.s:
	$(MAKE) -f CMakeFiles/Warcraft.dir/build.make CMakeFiles/Warcraft.dir/Bindings/bind.cpp.s
.PHONY : Bindings/bind.cpp.s

Living.o: Living.cpp.o

.PHONY : Living.o

# target to build an object file
Living.cpp.o:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/Living.cpp.o
	$(MAKE) -f CMakeFiles/Warcraft.dir/build.make CMakeFiles/Warcraft.dir/Living.cpp.o
.PHONY : Living.cpp.o

Living.i: Living.cpp.i

.PHONY : Living.i

# target to preprocess a source file
Living.cpp.i:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/Living.cpp.i
	$(MAKE) -f CMakeFiles/Warcraft.dir/build.make CMakeFiles/Warcraft.dir/Living.cpp.i
.PHONY : Living.cpp.i

Living.s: Living.cpp.s

.PHONY : Living.s

# target to generate assembly for a file
Living.cpp.s:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/Living.cpp.s
	$(MAKE) -f CMakeFiles/Warcraft.dir/build.make CMakeFiles/Warcraft.dir/Living.cpp.s
.PHONY : Living.cpp.s

Race/Structure/Barrack.o: Race/Structure/Barrack.cpp.o

.PHONY : Race/Structure/Barrack.o

# target to build an object file
Race/Structure/Barrack.cpp.o:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/Race/Structure/Barrack.cpp.o
.PHONY : Race/Structure/Barrack.cpp.o

Race/Structure/Barrack.i: Race/Structure/Barrack.cpp.i

.PHONY : Race/Structure/Barrack.i

# target to preprocess a source file
Race/Structure/Barrack.cpp.i:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/Race/Structure/Barrack.cpp.i
.PHONY : Race/Structure/Barrack.cpp.i

Race/Structure/Barrack.s: Race/Structure/Barrack.cpp.s

.PHONY : Race/Structure/Barrack.s

# target to generate assembly for a file
Race/Structure/Barrack.cpp.s:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/Race/Structure/Barrack.cpp.s
.PHONY : Race/Structure/Barrack.cpp.s

Race/Unit/Peasant.o: Race/Unit/Peasant.cpp.o

.PHONY : Race/Unit/Peasant.o

# target to build an object file
Race/Unit/Peasant.cpp.o:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/Race/Unit/Peasant.cpp.o
.PHONY : Race/Unit/Peasant.cpp.o

Race/Unit/Peasant.i: Race/Unit/Peasant.cpp.i

.PHONY : Race/Unit/Peasant.i

# target to preprocess a source file
Race/Unit/Peasant.cpp.i:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/Race/Unit/Peasant.cpp.i
.PHONY : Race/Unit/Peasant.cpp.i

Race/Unit/Peasant.s: Race/Unit/Peasant.cpp.s

.PHONY : Race/Unit/Peasant.s

# target to generate assembly for a file
Race/Unit/Peasant.cpp.s:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/Race/Unit/Peasant.cpp.s
.PHONY : Race/Unit/Peasant.cpp.s

Race/Unit/Unit.o: Race/Unit/Unit.cpp.o

.PHONY : Race/Unit/Unit.o

# target to build an object file
Race/Unit/Unit.cpp.o:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/Race/Unit/Unit.cpp.o
.PHONY : Race/Unit/Unit.cpp.o

Race/Unit/Unit.i: Race/Unit/Unit.cpp.i

.PHONY : Race/Unit/Unit.i

# target to preprocess a source file
Race/Unit/Unit.cpp.i:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/Race/Unit/Unit.cpp.i
.PHONY : Race/Unit/Unit.cpp.i

Race/Unit/Unit.s: Race/Unit/Unit.cpp.s

.PHONY : Race/Unit/Unit.s

# target to generate assembly for a file
Race/Unit/Unit.cpp.s:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/Race/Unit/Unit.cpp.s
.PHONY : Race/Unit/Unit.cpp.s

State/Manager.o: State/Manager.cpp.o

.PHONY : State/Manager.o

# target to build an object file
State/Manager.cpp.o:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/State/Manager.cpp.o
.PHONY : State/Manager.cpp.o

State/Manager.i: State/Manager.cpp.i

.PHONY : State/Manager.i

# target to preprocess a source file
State/Manager.cpp.i:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/State/Manager.cpp.i
.PHONY : State/Manager.cpp.i

State/Manager.s: State/Manager.cpp.s

.PHONY : State/Manager.s

# target to generate assembly for a file
State/Manager.cpp.s:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/State/Manager.cpp.s
.PHONY : State/Manager.cpp.s

State/Player.o: State/Player.cpp.o

.PHONY : State/Player.o

# target to build an object file
State/Player.cpp.o:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/State/Player.cpp.o
.PHONY : State/Player.cpp.o

State/Player.i: State/Player.cpp.i

.PHONY : State/Player.i

# target to preprocess a source file
State/Player.cpp.i:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/State/Player.cpp.i
.PHONY : State/Player.cpp.i

State/Player.s: State/Player.cpp.s

.PHONY : State/Player.s

# target to generate assembly for a file
State/Player.cpp.s:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/State/Player.cpp.s
.PHONY : State/Player.cpp.s

State/Task.o: State/Task.cpp.o

.PHONY : State/Task.o

# target to build an object file
State/Task.cpp.o:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/State/Task.cpp.o
.PHONY : State/Task.cpp.o

State/Task.i: State/Task.cpp.i

.PHONY : State/Task.i

# target to preprocess a source file
State/Task.cpp.i:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/State/Task.cpp.i
.PHONY : State/Task.cpp.i

State/Task.s: State/Task.cpp.s

.PHONY : State/Task.s

# target to generate assembly for a file
State/Task.cpp.s:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/State/Task.cpp.s
.PHONY : State/Task.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/Final.dir/build.make CMakeFiles/Final.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... Final"
	@echo "... Warcraft"
	@echo "... Bindings/bind.o"
	@echo "... Bindings/bind.i"
	@echo "... Bindings/bind.s"
	@echo "... Living.o"
	@echo "... Living.i"
	@echo "... Living.s"
	@echo "... Race/Structure/Barrack.o"
	@echo "... Race/Structure/Barrack.i"
	@echo "... Race/Structure/Barrack.s"
	@echo "... Race/Unit/Peasant.o"
	@echo "... Race/Unit/Peasant.i"
	@echo "... Race/Unit/Peasant.s"
	@echo "... Race/Unit/Unit.o"
	@echo "... Race/Unit/Unit.i"
	@echo "... Race/Unit/Unit.s"
	@echo "... State/Manager.o"
	@echo "... State/Manager.i"
	@echo "... State/Manager.s"
	@echo "... State/Player.o"
	@echo "... State/Player.i"
	@echo "... State/Player.s"
	@echo "... State/Task.o"
	@echo "... State/Task.i"
	@echo "... State/Task.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

