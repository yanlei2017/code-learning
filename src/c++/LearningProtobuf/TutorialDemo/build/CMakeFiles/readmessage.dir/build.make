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
include CMakeFiles/readmessage.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/readmessage.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/readmessage.dir/flags.make

CMakeFiles/readmessage.dir/readmessage.cpp.o: CMakeFiles/readmessage.dir/flags.make
CMakeFiles/readmessage.dir/readmessage.cpp.o: ../readmessage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/readmessage.dir/readmessage.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/readmessage.dir/readmessage.cpp.o -c /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/readmessage.cpp

CMakeFiles/readmessage.dir/readmessage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/readmessage.dir/readmessage.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/readmessage.cpp > CMakeFiles/readmessage.dir/readmessage.cpp.i

CMakeFiles/readmessage.dir/readmessage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/readmessage.dir/readmessage.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/readmessage.cpp -o CMakeFiles/readmessage.dir/readmessage.cpp.s

CMakeFiles/readmessage.dir/readmessage.cpp.o.requires:

.PHONY : CMakeFiles/readmessage.dir/readmessage.cpp.o.requires

CMakeFiles/readmessage.dir/readmessage.cpp.o.provides: CMakeFiles/readmessage.dir/readmessage.cpp.o.requires
	$(MAKE) -f CMakeFiles/readmessage.dir/build.make CMakeFiles/readmessage.dir/readmessage.cpp.o.provides.build
.PHONY : CMakeFiles/readmessage.dir/readmessage.cpp.o.provides

CMakeFiles/readmessage.dir/readmessage.cpp.o.provides.build: CMakeFiles/readmessage.dir/readmessage.cpp.o


CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.o: CMakeFiles/readmessage.dir/flags.make
CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.o: ../protobuf_gen/person.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.o -c /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/protobuf_gen/person.pb.cc

CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/protobuf_gen/person.pb.cc > CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.i

CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/protobuf_gen/person.pb.cc -o CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.s

CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.o.requires:

.PHONY : CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.o.requires

CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.o.provides: CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.o.requires
	$(MAKE) -f CMakeFiles/readmessage.dir/build.make CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.o.provides.build
.PHONY : CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.o.provides

CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.o.provides.build: CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.o


# Object files for target readmessage
readmessage_OBJECTS = \
"CMakeFiles/readmessage.dir/readmessage.cpp.o" \
"CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.o"

# External object files for target readmessage
readmessage_EXTERNAL_OBJECTS =

../readmessage: CMakeFiles/readmessage.dir/readmessage.cpp.o
../readmessage: CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.o
../readmessage: CMakeFiles/readmessage.dir/build.make
../readmessage: /usr/local/lib/libprotobuf.so
../readmessage: CMakeFiles/readmessage.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../readmessage"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/readmessage.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/readmessage.dir/build: ../readmessage

.PHONY : CMakeFiles/readmessage.dir/build

CMakeFiles/readmessage.dir/requires: CMakeFiles/readmessage.dir/readmessage.cpp.o.requires
CMakeFiles/readmessage.dir/requires: CMakeFiles/readmessage.dir/protobuf_gen/person.pb.cc.o.requires

.PHONY : CMakeFiles/readmessage.dir/requires

CMakeFiles/readmessage.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/readmessage.dir/cmake_clean.cmake
.PHONY : CMakeFiles/readmessage.dir/clean

CMakeFiles/readmessage.dir/depend:
	cd /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/build /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/build /home/yanlei/note/c++/src/c++/LearningProtobuf/TutorialDemo/build/CMakeFiles/readmessage.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/readmessage.dir/depend

