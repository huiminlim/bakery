# Set CMake minimum version to currently using
cmake_minimum_required( VERSION 3.26 )

# Setup Project name
message( "Configuring project: Bakery" )
project( Bakery
         VERSION 0.0.1
         LANGUAGES CXX )

# Set C++ Standard to C++14
set( CMAKE_CXX_STANDARD 14 )

# Use solution folders
set_property( GLOBAL PROPERTY USE_FOLDERS ON )

# Force CMake Install directory into build folder
set( CMAKE_DEBUG_POSTFIX d CACHE STRING "" FORCE )
set( CMAKE_CURRENT_BINARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/build/vc16_x64 CACHE PATH "" FORCE )
set( CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_BINARY_DIR}/install CACHE PATH "" FORCE )

# Set CMake Module Path
set( CMAKE_MODULE_PATH
     ${CMAKE_CURRENT_SOURCE_DIR}/cmake
     CACHE PATH "" FORCE )

# Fetch BinLog
include( FetchContent )
FetchContent_Declare( binlog
                      GIT_REPOSITORY https://github.com/morganstanley/binlog.git
                      GIT_TAG 4cd8f78 )
FetchContent_MakeAvailable( binlog )

# Include modules required in this project
add_subdirectory( modules )

#Include apps required in this project
add_subdirectory( apps )
