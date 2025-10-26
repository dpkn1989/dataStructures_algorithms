cmake_minimum_required(VERSION 3.0)
project(queue LANGUAGES CXX)

# Prefer a Debug build when not specified
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type" FORCE)
endif()

# ...existing code...
# Source files
set(SOURCES
    main.cpp
    queue_example.cpp
    circularQueue_example.cpp
)

# Header/include directories (adjust path if your headers are elsewhere)
set(HEADER_DIRS
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Create executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Add include directories for the target
target_include_directories(${PROJECT_NAME} PRIVATE ${HEADER_DIRS})

# Add debug flags for the Debug configuration (works with single-config generators)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -O0")

# Per-target, generator-expression safe flags (works for multi-config as well)
target_compile_options(${PROJECT_NAME} PRIVATE
  $<$<CONFIG:Debug>:-g>
  $<$<CONFIG:Debug>:-O0>
)