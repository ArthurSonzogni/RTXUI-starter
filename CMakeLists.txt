cmake_minimum_required(VERSION 3.24)

project(rtxui-starter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)
FetchContent_Declare(rtxui
  GIT_REPOSITORY https://github.com/ArthurSonzogni/RTXUI.git
  GIT_TAG        v0.1.4  # A release tag, or main for the latest.
  GIT_SHALLOW    TRUE
  EXCLUDE_FROM_ALL
)
FetchContent_MakeAvailable(rtxui)

add_executable(rtxui-starter src/main.cpp)
target_link_libraries(rtxui-starter PRIVATE rtxui)
