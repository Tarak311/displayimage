project(listret)
add_library(${PROJECT_NAME} src/listret.cpp)
add_library(listrt ALIAS ${PROJECT_NAME})
target_include_directories( ${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR} PUBLIC ${PROJECT_SOURCE_DIR}/.. PUBLIC ${PROJECT_SOURCE_DIR}/../.. )
