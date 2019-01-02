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
  image* immm = new image;
  this->imagebuild=immm;
  this->imagebuild->img = img_temp;
  return *this;
}

std::shared_ptr<imhdlistd>  builder::createfromimg(int TYPE)
{
   std::shared_ptr<imhdlistd> imhdli;
   std::shared_ptr<imagehandler> ih = std::make_shared<imagehandler>(this->imagebuild);
   if(TYPE==IMGHDTYPE)
   {
      std::cout<<"creating imagehandler object"<<std::endl;
      ih->handlerbuild=this;
      imhdli->imagehandlerd=ih;
      imhdli->type=IMGHDTYPE;
      std::cout<<"DEB::SS"<<std::endl;
      std::shared_ptr<imhdlistd> im = imhdli;
    }
}
