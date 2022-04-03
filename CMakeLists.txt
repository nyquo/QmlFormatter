cmake_minimum_required(VERSION 3.12.2)

project(QmlFormatter LANGUAGES C CXX VERSION 0.1)

# Set a default build type if none was specified
set(default_build_type "Release")

# Build type
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    message(STATUS "Setting build type to '${default_build_type}' as none was specified.")
    set(CMAKE_BUILD_TYPE "${default_build_type}" CACHE  STRING "Choose the type of build." FORCE)
    # Set the possible values of build type for cmake-gui
    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS  "Debug" "Release")
endif()

# CXX standards
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# CXX Flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

# Set executable output dir
set(EXECUTABLE_OUTPUT_PATH "${PROJECT_BINARY_DIR}/${CMAKE_SYSTEM_NAME}-${CMAKE_SYSTEM_PROCESSOR}")

# Set library output dir
set(LIBRARY_OUTPUT_PATH "${PROJECT_BINARY_DIR}/${CMAKE_SYSTEM_NAME}-${CMAKE_SYSTEM_PROCESSOR}")

# Libs of the project
add_subdirectory(libs)

# Apps of the project
add_subdirectory(apps)