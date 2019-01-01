project(src)
add_executable( DisplayImage DisplayImage.cpp )
target_link_libraries( DisplayImage imghandler builderbase  ${OpenCV_LIBS} )
