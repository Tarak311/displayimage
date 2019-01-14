#include<builder/include/builder.h>

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
      ih->handlerbuild=this;
      imhdlistd* imhdli = new imhdlistd;
      imhdli->imagehandlerd=ih;
      imhdli->type=IMGHDTYPE;
      return *imhdli;
    }
  }
