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
  this->imagesaved=im;
}
int imagehandler::showimage(std::string win,int flag)
{
  int i = 0;
  if(i==1){
  //cv::Mat res;
  cv::namedWindow(win, cv::WINDOW_NORMAL);
  //this->gim.upload(this->imagesaved->img);
  //cv::cuda::threshold(this->gim,this->gom,180.0,255.0,CV_THRESH_BINARY);
  //cv::threshold(this->imagesaved->img,res,128.0,255.0,CV_THRESH_BINARY);
  //this->gom.download(res);
  cv::imshow(win, (this->imagesaved->img));
  //cv::imshow(win,res);

}
  return 0;
}             /*change to op from function*/

builderlistd& imagehandler::process(int TYPE,std::vector<image*> *v)
{
  if(TYPE==IMGHDTYPE)
  {
    std::shared_ptr<image> im(new image);
    builderlistd* bhdli = new builderlistd();
    im->path = this->path;
    im->img = (this->imagesaved->img);
    im->input = this->imagesaved;
    builder* bu = new builder;
    bu->imagebuild = im;
    bu->path=this->path;
    bhdli->builderd = bu;
    return *bhdli;
  }
}
