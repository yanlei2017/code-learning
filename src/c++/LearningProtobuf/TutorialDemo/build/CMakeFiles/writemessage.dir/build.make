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
CMAKE_SOURCE_DIR = /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/build

# Include any dependencies generated for this target.
include CMakeFiles/writemessage.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/writemessage.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/writemessage.dir/flags.make

CMakeFiles/writemessage.dir/writemessage.cpp.o: CMakeFiles/writemessage.dir/flags.make
CMakeFiles/writemessage.dir/writemessage.cpp.o: ../writemessage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/writemessage.dir/writemessage.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/writemessage.dir/writemessage.cpp.o -c /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/writemessage.cpp

CMakeFiles/writemessage.dir/writemessage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/writemessage.dir/writemessage.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/writemessage.cpp > CMakeFiles/writemessage.dir/writemessage.cpp.i

CMakeFiles/writemessage.dir/writemessage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/writemessage.dir/writemessage.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/writemessage.cpp -o CMakeFiles/writemessage.dir/writemessage.cpp.s

CMakeFiles/writemessage.dir/writemessage.cpp.o.requires:

.PHONY : CMakeFiles/writemessage.dir/writemessage.cpp.o.requires

CMakeFiles/writemessage.dir/writemessage.cpp.o.provides: CMakeFiles/writemessage.dir/writemessage.cpp.o.requires
	$(MAKE) -f CMakeFiles/writemessage.dir/build.make CMakeFiles/writemessage.dir/writemessage.cpp.o.provides.build
.PHONY : CMakeFiles/writemessage.dir/writemessage.cpp.o.provides

CMakeFiles/writemessage.dir/writemessage.cpp.o.provides.build: CMakeFiles/writemessage.dir/writemessage.cpp.o


CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.o: CMakeFiles/writemessage.dir/flags.make
CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.o: ../protobuf_gen/person.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.o -c /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/protobuf_gen/person.pb.cc

CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/protobuf_gen/person.pb.cc > CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.i

CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/protobuf_gen/person.pb.cc -o CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.s

CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.o.requires:

.PHONY : CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.o.requires

CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.o.provides: CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.o.requires
	$(MAKE) -f CMakeFiles/writemessage.dir/build.make CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.o.provides.build
.PHONY : CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.o.provides

CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.o.provides.build: CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.o


# Object files for target writemessage
writemessage_OBJECTS = \
"CMakeFiles/writemessage.dir/writemessage.cpp.o" \
"CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.o"

# External object files for target writemessage
writemessage_EXTERNAL_OBJECTS =

../writemessage: CMakeFiles/writemessage.dir/writemessage.cpp.o
../writemessage: CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.o
../writemessage: CMakeFiles/writemessage.dir/build.make
../writemessage: /usr/local/lib/libprotobuf.so
../writemessage: CMakeFiles/writemessage.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../writemessage"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/writemessage.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/writemessage.dir/build: ../writemessage

.PHONY : CMakeFiles/writemessage.dir/build

CMakeFiles/writemessage.dir/requires: CMakeFiles/writemessage.dir/writemessage.cpp.o.requires
CMakeFiles/writemessage.dir/requires: CMakeFiles/writemessage.dir/protobuf_gen/person.pb.cc.o.requires

.PHONY : CMakeFiles/writemessage.dir/requires

CMakeFiles/writemessage.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/writemessage.dir/cmake_clean.cmake
.PHONY : CMakeFiles/writemessage.dir/clean

CMakeFiles/writemessage.dir/depend:
	cd /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/build /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/build /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/build/CMakeFiles/writemessage.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/writemessage.dir/depend
