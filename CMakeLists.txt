cmake_minimum_required(VERSION 3.28)
project(Csci3260Proj)

set(CMAKE_CXX_STANDARD 14)

find_package(glfw3 REQUIRED)
find_package(GLEW REQUIRED)
find_package(glm REQUIRED)
find_package(Stb REQUIRED)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})
file(GLOB SOURCE_FILES *.cpp *.h)

add_executable(${CMAKE_PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE glfw GLEW::GLEW glm::glm-header-only)
