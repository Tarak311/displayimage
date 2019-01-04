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
      //std::shared_ptr<imagehandler> ims(new imagehandler(this->imagebuild));
      ih->handlerbuild=this;
      imhdlistd* imhdli = new imhdlistd;
      imhdli->imagehandlerd=ih;
      //imhdli->imghd=ims;
      imhdli->type=IMGHDTYPE;
      return *imhdli;
    }
  }
int builder::decrementobj(){ return --counter;};
int builder::incrementobj(){ return ++counter;};
int builder::checkobj(){return counter;}
