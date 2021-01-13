cmake_minimum_required(VERSION 3.0.0)
set(CMAKE_CXX_STANDARD 17)

project(Komis VERSION 0.1.0)

find_package(wxWidgets REQUIRED COMPONENTS net core base)

include(${wxWidgets_USE_FILE})
file(GLOB_RECURSE SOURCES src/*.cpp )
file(GLOB_RECURSE HEADERS src/*.h src/*.hpp )
include_directories( ${PROJECT_NAME} src )

add_executable(${PROJECT_NAME} ${SOURCES} )
target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})
