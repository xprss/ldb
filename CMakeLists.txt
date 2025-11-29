cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)

project(Main)

add_library(models
    src/lib/models/Point.cpp
)
target_include_directories(models PUBLIC src/lib/models)


add_library(drivers
    src/lib/drivers/Driver.cpp
)
target_include_directories(drivers PUBLIC src/lib/drivers)

add_executable(Main src/main.cpp)

target_link_libraries(Main models drivers)

