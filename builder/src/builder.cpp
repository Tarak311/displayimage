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
shared_from_this()->imagebuild = immm ; //seg faul
 std::cout<<"before assign";
 shared_from_this()->imagebuild->img = img_temp;
  std::cout<<"loaded image2"<<std::endl;
  return shared_from_this();
}

std::shared_ptr<imhdlistd>  builder::createfromimg(int TYPE)
{
   std::cout<<""<<std::endl;
   std::shared_ptr<imhdlistd> imhdli(new imhdlistd);
   std::shared_ptr<imagehandler> ih(new imagehandler((shared_from_this())->imagebuild));
   if(TYPE==IMGHDTYPE)
   {
      std::cout<<"creating imagehandler object"<<std::endl;
       std::shared_ptr<builder> ihds = shared_from_this();
      ih->handlerbuild=ihds;
      imhdli->imagehandlerd=ih;
      std::cout<<"DEB::SS"<<std::endl;
      std::cout<<"created imagehandler"<<std::endl;
      imhdli->type=IMGHDTYPE;
      return imhdli;
    }
}
