cmake_minimum_required(VERSION 3.14...3.22)

project(Greeter_standalone LANGUAGES CXX)

set(CMAKE_PREFIX_PATH "${CMAKE_SOURCE_DIR}/../build")

# --- Import tools ----

include(../cmake/tools.cmake)

# ---- Dependencies ----

include(../cmake/CPM.cmake)
find_package(cxxopts REQUIRED)
CPMAddPackage(NAME Greeter SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR}/..)

# ---- Create standalone executable ----

file(GLOB sources CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp)

add_executable(${PROJECT_NAME} ${sources})

set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 23)

target_link_libraries(${PROJECT_NAME} Greeter::Greeter cxxopts::cxxopts)
