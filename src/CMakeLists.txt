project(src)
add_executable( DisplayImage DisplayImage.cpp )
target_link_libraries( DisplayImage imghandler builderbase  ${OpenCV_LIBS} )
target_include_directories( ${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR} PUBLIC ${PROJECT_SOURCE_DIR}/.. )
