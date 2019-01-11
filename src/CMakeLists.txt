project(DisplayImage)
add_executable( DisplayImage DisplayImage.cpp )
target_link_libraries( DisplayImage builderbase imghandler  imghandler_d listrt ${OpenCV_LIBS} )
target_include_directories( ${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR} PUBLIC ${PROJECT_SOURCE_DIR}/.. )
