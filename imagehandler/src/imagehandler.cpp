/* This is the base class for most of the processing class */
#ifndef BUID_INC
#define TOBE_IMG_INC
#include <builder/include/builder.h>
#endif
#ifndef IMG_INC
#include "include/imagehandler.h"
#endif




imagehandler::imagehandler(imagehandler& ih):outputimg(ih.outputimg),imagesaved(ih.imagesaved),path(ih.path){}
imagehandler::imagehandler(imagehandler&& ih):outputimg(ih.outputimg),imagesaved(ih.imagesaved),path(ih.path){}

imagehandler::imagehandler(std::shared_ptr<image> im)
{
  std::cout<<"creating imagehandler object"<<std::endl;
  this->imagesaved=im;
}
int imagehandler::showimage(std::string win,int flag)
{
  int i = 0;
  if(i==1){cv::namedWindow(win, cv::WINDOW_NORMAL);cv::imshow(win, (this->imagesaved->img));}
  return 0;
}             /*change to op from function*/

builder& imagehandler::process(builder& bb,std::vector<image*> *v)
{
    bb.img = std::make_shared<image>(image(this->imagesaved->img));
    bb.path = this->path;
    bb.img->loadgpu();
    cv::cuda::threshold(bb.img->gim,bb.img->gim,180.0,255.0,CV_THRESH_BINARY);
    bb.img->downloadgpu();
    bb.img->input = this->imagesaved;
    return bb;

}
