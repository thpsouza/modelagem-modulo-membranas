# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\Program Files\JetBrains\CLion 2023.3.4\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Program Files\JetBrains\CLion 2023.3.4\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\EQ\Desktop\Thiago Souza\Teste"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\EQ\Desktop\Thiago Souza\Teste\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Teste.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Teste.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Teste.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Teste.dir/flags.make

CMakeFiles/Teste.dir/main.cpp.obj: CMakeFiles/Teste.dir/flags.make
CMakeFiles/Teste.dir/main.cpp.obj: C:/Users/EQ/Desktop/Thiago\ Souza/Teste/main.cpp
CMakeFiles/Teste.dir/main.cpp.obj: CMakeFiles/Teste.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\EQ\Desktop\Thiago Souza\Teste\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Teste.dir/main.cpp.obj"
	C:\msys64\mingw64\bin\clang++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Teste.dir/main.cpp.obj -MF CMakeFiles\Teste.dir\main.cpp.obj.d -o CMakeFiles\Teste.dir\main.cpp.obj -c "C:\Users\EQ\Desktop\Thiago Souza\Teste\main.cpp"

CMakeFiles/Teste.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Teste.dir/main.cpp.i"
	C:\msys64\mingw64\bin\clang++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\EQ\Desktop\Thiago Souza\Teste\main.cpp" > CMakeFiles\Teste.dir\main.cpp.i

CMakeFiles/Teste.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Teste.dir/main.cpp.s"
	C:\msys64\mingw64\bin\clang++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\EQ\Desktop\Thiago Souza\Teste\main.cpp" -o CMakeFiles\Teste.dir\main.cpp.s

# Object files for target Teste
Teste_OBJECTS = \
"CMakeFiles/Teste.dir/main.cpp.obj"

# External object files for target Teste
Teste_EXTERNAL_OBJECTS =

Teste.exe: CMakeFiles/Teste.dir/main.cpp.obj
Teste.exe: CMakeFiles/Teste.dir/build.make
Teste.exe: CMakeFiles/Teste.dir/linkLibs.rsp
Teste.exe: CMakeFiles/Teste.dir/objects1.rsp
Teste.exe: CMakeFiles/Teste.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\EQ\Desktop\Thiago Souza\Teste\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Teste.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Teste.dir\link.txt --verbose=$(VERBOSE)
	C:\Windows\System32\WindowsPowerShell\v1.0\powershell.exe -noprofile -executionpolicy Bypass -file C:/Users/EQ/.vcpkg-clion/vcpkg/scripts/buildsystems/msbuild/applocal.ps1 -targetBinary "C:/Users/EQ/Desktop/Thiago Souza/Teste/cmake-build-debug/Teste.exe" -installedDir C:/Users/EQ/.vcpkg-clion/vcpkg/installed/x64-windows/debug/bin -OutVariable out

# Rule to build all files generated by this target.
CMakeFiles/Teste.dir/build: Teste.exe
.PHONY : CMakeFiles/Teste.dir/build

CMakeFiles/Teste.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Teste.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Teste.dir/clean

CMakeFiles/Teste.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\EQ\Desktop\Thiago Souza\Teste" "C:\Users\EQ\Desktop\Thiago Souza\Teste" "C:\Users\EQ\Desktop\Thiago Souza\Teste\cmake-build-debug" "C:\Users\EQ\Desktop\Thiago Souza\Teste\cmake-build-debug" "C:\Users\EQ\Desktop\Thiago Souza\Teste\cmake-build-debug\CMakeFiles\Teste.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/Teste.dir/depend

