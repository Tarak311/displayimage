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

imagehandler::imagehandler(image *im)
{
  this->imagesaved=im;
}

int imagehandler::showimage(std::string win,int flag)
{
  cv::namedWindow(win, cv::WINDOW_NORMAL);
  cv::imshow(win, (this->imagesaved->img));
  return 0;
}             /*change to op from function*/

std::shared_ptr<builderlistd> imagehandler::process(int TYPE)
{
  if(TYPE==IMGHDTYPE)
  {
    std::shared_ptr<image> im(new image);
    std::shared_ptr<builderlistd> bhdli(new builderlistd());
    im->path = this->path;
    im->img = (this->imagesaved->img);
    im->input = this->imagesaved;
    std::shared_ptr<builder> bu(new builder);
    bu->imagebuild = im;
    bu->path=this->path;
    bhdli->builderd = bu;
    return bhdli;
  }
}
