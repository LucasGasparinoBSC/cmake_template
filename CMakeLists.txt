# Set minimum CMake version
cmake_minimum_required(VERSION 3.15)

# Set project name, version and languages
project(test LANGUAGES C CXX)

# Set project versions: major, minor and patch
set(TEST_VERSION_MAJOR "0")
set(TEST_VERSION_MINOR "0")
set(TEST_VERSION_PATCH "0")
set(TEST_VERSION "${TEST_VERSION_MAJOR}.${TEST_VERSION_MINOR}.${TEST_VERSION_PATCH}")

add_subdirectory(src)