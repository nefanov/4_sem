cmake_minimum_required(VERSION 3.0)

project(MyProject VERSION 1.2.3.4 LANGUAGES C CXX)

set(VARIABLE "No.5")

message("Seminar " ${VARIABLE})

add_library(MyLibrary SHARED libcode.c)

add_executable(MainProg main.c)

target_link_libraries(MainProg MyLibrary)
