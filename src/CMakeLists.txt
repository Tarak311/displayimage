project(src)
add_executable( DisplayImage DisplayImage.cpp )
target_link_libraries( DisplayImage imghandler  ${OpenCV_LIBS} )

