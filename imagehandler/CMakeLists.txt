project(imagehandler)

#target_include_directories($(PROJECT_NAME) PUBLIC ${PROJECT_SOURCE_DIR}/include)
#include_directories(include)

add_library(${PROJECT_NAME} src/imagehandler.cpp)
add_library(imghandler ALIAS ${PROJECT_NAME})
target_include_directories( ${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR} PUBLIC ${PROJECT_SOURCE_DIR}/.. )
