project(builder)
add_library(${PROJECT_NAME} src/builder.cpp )
add_library(builderbase ALIAS ${PROJECT_NAME})
target_include_directories( ${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR} PUBLIC "${PROJECT_SOURCE_DIR}/.."  )
