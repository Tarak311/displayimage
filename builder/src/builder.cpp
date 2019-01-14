#include<builder/include/builder.h>

builder& builder::loadimage(std::string path)
{
  this->img = std::make_shared<image>(image(cv::imread(path, cv::IMREAD_COLOR)));
  return *this;
}

imhdlistd& builder::build()
{
  imagehandler* ih = new imagehandler(this->img);
  ih->handlerbuild=this;
  imhdlistd* imhdli = new imhdlistd;
  imhdli->imagehandlerd=ih;
  return *imhdli;
}
