/* This is the base class for most of the processing class */
#ifndef BUID_INC
#define TOBE_IMG_INC
#include <builder/include/builder.h>
#endif
#ifndef IMG_INC
#include "include/imagehandler.h"
#endif

#define IMGHDTYPE 001;


imagehandler::imagehandler(imagehandler& ih):img(ih.img),path(ih.path){}
imagehandler::imagehandler(imagehandler&& ih):img(ih.img),path(ih.path){}
imagehandler::imagehandler(cv::Mat& im){this->img=&im;}
imagehandler::imagehandler(cv::Mat&& im){this->img=&im;}
int imagehandler::showimage(std::string win,int flag){cv::namedWindow(win, cv::WINDOW_NORMAL);cv::imshow(win, *(this->img));return 0;}
builderlistd imagehandler::process(int TYPE){ if(TYPE==IMGHDTYPE){image im; builderlistd bhdli;im.path = this->path;im.img = *(this->img);im.input = this->imagesaved; builder bu; bu.imagebuild = im; bu.path=this->path; bhdli->builderd = &bu; return bhdli;}}
