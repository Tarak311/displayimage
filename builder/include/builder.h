#ifndef BUID_INC
#ifndef IMG_INC
#include<iostream>
#include<opencv2/opencv.hpp>
#endif
#define BUID_INC
#endif

#ifndef IMG_INC
class imagehandler;
#endif

class builder{
public:
  builder() {/*this->image.path=NULL;this->image.img=NULL;*/}
  builder& loadimage(std::string);
  builder& assignimg(cv::Mat&);
  imagehandler& build();
private:
  struct image { std::string path; cv::Mat img;};

};
#ifndef IMG_INC
#ifndef TOBE_IMG_INC
#include <imagehandler/include/imagehandler.h>
#endif
#endif
