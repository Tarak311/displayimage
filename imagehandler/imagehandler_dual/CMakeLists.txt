project(imagehandler_dual)
add_library(${PROJECT_NAME} src/imagehandler_dual.cpp)
add_library(imghandler_d ALIAS ${PROJECT_NAME})
target_include_directories( ${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR} PUBLIC ${PROJECT_SOURCE_DIR}/.. PUBLIC ${PROJECT_SOURCE_DIR}/../.. )
