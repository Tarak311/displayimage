
#ifndef BUID_INC
#define TOBE_IMG_INC
#include "include/builder.h"
#endif
#ifndef IMG_INC
#include <imagehandler/include/imagehandler.h>
#endif
#include <imagehandler/include/imagehandler.h>

builder& builder::loadimage(std::string path)
{
  cv::Mat img_temp = cv::imread(path, cv::IMREAD_COLOR);
  image* immm = new image;
  this->imagebuild=immm;
  this->imagebuild->img = img_temp;
  return *this;
}

std::shared_ptr<imhdlistd>  builder::createfromimg(int TYPE)
{
   std::shared_ptr<imhdlistd> imhdli(new imhdlistd);
   std::shared_ptr<imagehandler> ih(new imagehandler(this->imagebuild));
   if(TYPE==IMGHDTYPE)
   {
      std::cout<<"creating imagehandler object"<<std::endl;
      ih->handlerbuild=this;
      imhdli->imagehandlerd=ih;
      std::cout<<"DEB::SS"<<std::endl;
      imhdli->type=IMGHDTYPE;
       return imhdli;
    }
}
