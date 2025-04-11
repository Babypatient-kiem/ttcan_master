cmake_minimum_required(VERSION 3.21)
project(Manikin_CAN_Driver_DL C CXX)

option(MANIKIN_CAN_DRIVER_BUILD_TESTS "Enable building tests" YES)


add_library(${PROJECT_NAME} ${CMAKE_CURRENT_LIST_DIR}/src/ttcan_master_driver.c)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_LIST_DIR}/src/)


if(CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
  set(CMAKE_C_STANDARD 11)
  set(CMAKE_C_STANDARD_REQUIRED True)
  set(CMAKE_CXX_STANDARD 17)
  set(CMAKE_CXX_STANDARD_REQUIRED True)
  set(MANIKIN_CAN_DRIVER_BUILD_TESTS ON)
endif()


if(MANIKIN_CAN_DRIVER_BUILD_TESTS)
  add_subdirectory(tests)
endif()
