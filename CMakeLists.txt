cmake_minimum_required(VERSION 3.9.0)
set(my_var 1234 CACHE STRING "")
add_executable(run func.cpp main.cpp)

add_dependencies(run data.res)

add_custom_target(data.res)
add_custom_command(
  TARGET data.res POST_BUILD
  #COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/res/data.res ${PROJECT_BINARY_DIR}
  COMMAND echo aaaaa $<CONFIG:Debug> ${CMAKE_BUILD_TYPE}
)

