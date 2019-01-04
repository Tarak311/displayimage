#ifndef BUID_INC
#define TOBE_IMG_INC
#include "include/builder.h"
#endif
#ifndef IMG_INC
#include <imagehandler/include/imagehandler.h>
#endif

std::shared_ptr<builder> builder::loadimage(std::string path)
{
  std::cout<<"loading image"<<std::endl;
  cv::Mat img_temp = cv::imread(path, cv::IMREAD_COLOR);
 // image*  immm = new image;
  std::shared_ptr<image> immm(new image());
  std::cout<<"loaded image"<<std::endl;
  shared_from_this()->imagebuild.reset(new image) ; //seg faul
 std::cout<<"before assign";
 shared_from_this()->imagebuild->img = img_temp;
  std::cout<<"loaded image2"<<std::endl;
  return shared_from_this();
}

builder& builder::loadimage(std::string path)
{
  cv::Mat img_temp = cv::imread(path, cv::IMREAD_COLOR);
  std::shared_ptr<image> immm(new image());
  this->imagebuild=immm;
  this->imagebuild->img = img_temp;
  return *this;
}
imhdlistd&  builder::createfromimg(int TYPE)
{
   if(TYPE==IMGHDTYPE)
   {
      std::cout<<"creating imagehandler object"<<std::endl;
      imagehandler* ih = new imagehandler(this->imagebuild);
      ih->handlerbuild=this;imhdlistd* imhdli = new imhdlistd;
      imhdli->imagehandlerd=ih;
      imhdli->type=IMGHDTYPE;
      return *imhdli;
    }
  }
