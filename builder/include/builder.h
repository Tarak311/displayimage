#ifndef BUILD_INC
#ifndef IMG_INC
#include<iostream>
#include<opencv2/opencv.hpp>
#endif
#define BUID_INC
#endif
#ifndef IMG_INC
#include <imagehandler/include/imagehandler.h>
#endif


class builder{
public:
  builder() {this->image.path=NULL;this->image.img=NULL;}
  builder& loadimage(std::string);
  builder& assignimg(cv::Mat&);

private:
  struct image { std::string path; cv::Mat img;};

};
