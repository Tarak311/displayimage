# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /container/home/tarak/workspace/opencv/git/displayimage

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /container/home/tarak/workspace/opencv/git/displayimage/build

# Include any dependencies generated for this target.
include src/CMakeFiles/DisplayImage.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/DisplayImage.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/DisplayImage.dir/flags.make

src/CMakeFiles/DisplayImage.dir/DisplayImage.cpp.o: src/CMakeFiles/DisplayImage.dir/flags.make
src/CMakeFiles/DisplayImage.dir/DisplayImage.cpp.o: ../src/DisplayImage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/container/home/tarak/workspace/opencv/git/displayimage/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/DisplayImage.dir/DisplayImage.cpp.o"
	cd /container/home/tarak/workspace/opencv/git/displayimage/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DisplayImage.dir/DisplayImage.cpp.o -c /container/home/tarak/workspace/opencv/git/displayimage/src/DisplayImage.cpp

src/CMakeFiles/DisplayImage.dir/DisplayImage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DisplayImage.dir/DisplayImage.cpp.i"
	cd /container/home/tarak/workspace/opencv/git/displayimage/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /container/home/tarak/workspace/opencv/git/displayimage/src/DisplayImage.cpp > CMakeFiles/DisplayImage.dir/DisplayImage.cpp.i

src/CMakeFiles/DisplayImage.dir/DisplayImage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DisplayImage.dir/DisplayImage.cpp.s"
	cd /container/home/tarak/workspace/opencv/git/displayimage/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /container/home/tarak/workspace/opencv/git/displayimage/src/DisplayImage.cpp -o CMakeFiles/DisplayImage.dir/DisplayImage.cpp.s

src/CMakeFiles/DisplayImage.dir/DisplayImage.cpp.o.requires:

.PHONY : src/CMakeFiles/DisplayImage.dir/DisplayImage.cpp.o.requires

src/CMakeFiles/DisplayImage.dir/DisplayImage.cpp.o.provides: src/CMakeFiles/DisplayImage.dir/DisplayImage.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/DisplayImage.dir/build.make src/CMakeFiles/DisplayImage.dir/DisplayImage.cpp.o.provides.build
.PHONY : src/CMakeFiles/DisplayImage.dir/DisplayImage.cpp.o.provides

src/CMakeFiles/DisplayImage.dir/DisplayImage.cpp.o.provides.build: src/CMakeFiles/DisplayImage.dir/DisplayImage.cpp.o


# Object files for target DisplayImage
DisplayImage_OBJECTS = \
"CMakeFiles/DisplayImage.dir/DisplayImage.cpp.o"

# External object files for target DisplayImage
DisplayImage_EXTERNAL_OBJECTS =

src/DisplayImage: src/CMakeFiles/DisplayImage.dir/DisplayImage.cpp.o
src/DisplayImage: src/CMakeFiles/DisplayImage.dir/build.make
src/DisplayImage: imagehandler/libimagehandler.a
src/DisplayImage: builder/libbuilder.a
src/DisplayImage: /usr/lib/libopencv_calib3d.a
src/DisplayImage: /usr/lib/libopencv_core.a
src/DisplayImage: /usr/lib/libopencv_cudaarithm.a
src/DisplayImage: /usr/lib/libopencv_cudabgsegm.a
src/DisplayImage: /usr/lib/libopencv_cudacodec.a
src/DisplayImage: /usr/lib/libopencv_cudafeatures2d.a
src/DisplayImage: /usr/lib/libopencv_cudafilters.a
src/DisplayImage: /usr/lib/libopencv_cudaimgproc.a
src/DisplayImage: /usr/lib/libopencv_cudalegacy.a
src/DisplayImage: /usr/lib/libopencv_cudaobjdetect.a
src/DisplayImage: /usr/lib/libopencv_cudaoptflow.a
src/DisplayImage: /usr/lib/libopencv_cudastereo.a
src/DisplayImage: /usr/lib/libopencv_cudawarping.a
src/DisplayImage: /usr/lib/libopencv_cudev.a
src/DisplayImage: /usr/lib/libopencv_dnn.a
src/DisplayImage: /usr/lib/libopencv_features2d.a
src/DisplayImage: /usr/lib/libopencv_flann.a
src/DisplayImage: /usr/lib/libopencv_highgui.a
src/DisplayImage: /usr/lib/libopencv_imgcodecs.a
src/DisplayImage: /usr/lib/libopencv_imgproc.a
src/DisplayImage: /usr/lib/libopencv_ml.a
src/DisplayImage: /usr/lib/libopencv_objdetect.a
src/DisplayImage: /usr/lib/libopencv_photo.a
src/DisplayImage: /usr/lib/libopencv_shape.a
src/DisplayImage: /usr/lib/libopencv_stitching.a
src/DisplayImage: /usr/lib/libopencv_superres.a
src/DisplayImage: /usr/lib/libopencv_video.a
src/DisplayImage: /usr/lib/libopencv_videoio.a
src/DisplayImage: /usr/lib/libopencv_videostab.a
src/DisplayImage: /usr/share/OpenCV/3rdparty/lib/liblibprotobuf.a
src/DisplayImage: /usr/lib/libopencv_cudafeatures2d.a
src/DisplayImage: /usr/lib/libopencv_cudacodec.a
src/DisplayImage: /usr/lib/libopencv_cudaoptflow.a
src/DisplayImage: /usr/lib/libopencv_cudalegacy.a
src/DisplayImage: /usr/lib/libopencv_calib3d.a
src/DisplayImage: /usr/lib/libopencv_cudawarping.a
src/DisplayImage: /usr/lib/libopencv_features2d.a
src/DisplayImage: /usr/lib/libopencv_flann.a
src/DisplayImage: /usr/lib/libopencv_highgui.a
src/DisplayImage: /usr/lib/libopencv_objdetect.a
src/DisplayImage: /usr/lib/libopencv_photo.a
src/DisplayImage: /usr/lib/libopencv_cudaimgproc.a
src/DisplayImage: /usr/lib/libopencv_cudafilters.a
src/DisplayImage: /usr/lib/libopencv_cudaarithm.a
src/DisplayImage: /usr/lib/libopencv_video.a
src/DisplayImage: /usr/lib/libopencv_videoio.a
src/DisplayImage: /usr/lib/libopencv_imgcodecs.a
src/DisplayImage: /usr/share/OpenCV/3rdparty/lib/liblibwebp.a
src/DisplayImage: /usr/share/OpenCV/3rdparty/lib/liblibtiff.a
src/DisplayImage: /usr/lib/x86_64-linux-gnu/libjpeg.so
src/DisplayImage: /usr/lib/x86_64-linux-gnu/libpng.so
src/DisplayImage: /usr/lib/x86_64-linux-gnu/libjasper.so
src/DisplayImage: /usr/lib/x86_64-linux-gnu/libjpeg.so
src/DisplayImage: /usr/lib/x86_64-linux-gnu/libpng.so
src/DisplayImage: /usr/lib/x86_64-linux-gnu/libjasper.so
src/DisplayImage: /usr/share/OpenCV/3rdparty/lib/libIlmImf.a
src/DisplayImage: /usr/lib/libopencv_imgproc.a
src/DisplayImage: /usr/lib/libopencv_core.a
src/DisplayImage: /usr/lib/x86_64-linux-gnu/libz.so
src/DisplayImage: /usr/share/OpenCV/3rdparty/lib/libittnotify.a
src/DisplayImage: /usr/lib/libopencv_cudev.a
src/DisplayImage: /usr/share/OpenCV/3rdparty/lib/libippiw.a
src/DisplayImage: /usr/share/OpenCV/3rdparty/lib/libippicv.a
src/DisplayImage: src/CMakeFiles/DisplayImage.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/container/home/tarak/workspace/opencv/git/displayimage/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DisplayImage"
	cd /container/home/tarak/workspace/opencv/git/displayimage/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DisplayImage.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/DisplayImage.dir/build: src/DisplayImage

.PHONY : src/CMakeFiles/DisplayImage.dir/build

src/CMakeFiles/DisplayImage.dir/requires: src/CMakeFiles/DisplayImage.dir/DisplayImage.cpp.o.requires

.PHONY : src/CMakeFiles/DisplayImage.dir/requires

src/CMakeFiles/DisplayImage.dir/clean:
	cd /container/home/tarak/workspace/opencv/git/displayimage/build/src && $(CMAKE_COMMAND) -P CMakeFiles/DisplayImage.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/DisplayImage.dir/clean

src/CMakeFiles/DisplayImage.dir/depend:
	cd /container/home/tarak/workspace/opencv/git/displayimage/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /container/home/tarak/workspace/opencv/git/displayimage /container/home/tarak/workspace/opencv/git/displayimage/src /container/home/tarak/workspace/opencv/git/displayimage/build /container/home/tarak/workspace/opencv/git/displayimage/build/src /container/home/tarak/workspace/opencv/git/displayimage/build/src/CMakeFiles/DisplayImage.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/DisplayImage.dir/depend

