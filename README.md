# cmake_template

## Definition

Small template for C/C++ and Fortran projects using CMake. Capable of building an app and associated libraries.

## Required

- CMake version 3.15 or higher;
- C and C++ compilers;

## Usage

The root CMakeLists.txt file looks for souurce code inside the "src" directory. Inside, another CMakeLists.txt indicates which folderss contain projects, wheter it's an app or a library.
New apps and libraries must be added to the search list as well.

Apps and libraries are divided into "sources" and "headers" folders. The CMakeLists.txt associated will handle file location for *.c/*.cpp and *.h files.
