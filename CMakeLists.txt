cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)

project(Main)

add_library(models
    lib/models/Point.cpp
)
target_include_directories(models PUBLIC lib/models)


add_library(drivers
    lib/drivers/Driver.cpp
)
target_include_directories(drivers PUBLIC lib/drivers)

add_executable(Main main.cpp)

target_link_libraries(Main models drivers)

