#ifndef BUID_INC
#define TOBE_IMG_INC
#include "include/builder.h"
#endif
#ifndef IMG_INC
#include <imagehandler/include/imagehandler.h>
#endif


builder& builder::loadimage(std::string path)
{
  cv::Mat img_temp = cv::imread(path, cv::IMREAD_COLOR);
// this goes by by and we are left with dangling point
  image* immm = new image;
  this->imagebuild=immm;
  this->imagebuild->img = img_temp;
  // cv::namedWindow("Display Window", cv::WINDOW_AUTOSIZE);
  // cv::imshow("Display Window", this->imagebuild->img);
  return *this;
}
imhdlistd  builder::createfromimg(int TYPE){ if(TYPE==IMGHDTYPE){ std::cout<<"creating imagehandler object"<<std::endl; imagehandler* ih = new imagehandler(this->imagebuild); ih->handlerbuild=this;imhdlistd imhdli; imhdli.imagehandlerd=ih; imhdli.type=IMGHDTYPE; return imhdli;}}
