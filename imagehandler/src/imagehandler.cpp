/* This is the base class for most of the processing class */
#ifndef BUID_INC
#define TOBE_IMG_INC
#include <builder/include/builder.h>
#endif
#ifndef IMG_INC
#include "include/imagehandler.h"
#endif

#define container_of(ptr, type, member) ({                      \
        const typeof( ((type *)0)->member ) *__mptr = (ptr);    \
        (type *)( (char *)__mptr - offsetof(type,member) );})



[[deprecated]]  imagehandler::imagehandler(std::string name){cv::Mat img_temp = cv::imread(name, cv::IMREAD_COLOR);this->img = &img_temp;}
imagehandler::imagehandler(imagehandler& ih):img(ih.img),path(ih.path){} // ADD VARIABLES PERFORM SHALLOW COPY
imagehandler::imagehandler(imagehandler&& ih):img(ih.img),path(ih.path){} // move constructor used
int imagehandler::showimage(std::string win,int flag){cv::namedWindow(win, cv::WINDOW_NORMAL);cv::imshow(win, *(this->img));return 0;}
imagehandler& imagehandler::gethandler(){return *this;}

image imagehandler::process(int i){ image imgst; imgst.path = this->path;imgst.img = *(this->img);imgst.input = this->imagesaved;imgst.buildimghd=&buildfuntion;this->outputimg[i]=&imgst ; return imgst;}
// [[deprecated]] imagehandler::imagehandler(cv::Mat& im){this->img=&im;} // PASSED BY REFRENCE - DEPRECATED : REMOVED
// [[deprecated]] imagehandler::imagehandler(cv::Mat&& im){this->img=&im;} // MOVE SCHEMATICS USED - DEPRECATED : REMOVED
//imagehandler::imagehandler(const imagehandler& ih) {this->img = ih.img;} //copy constructor -  deleted
cllist& buildfuntion(int type,image& imm){if(type==0){cllist& cli = imagehandler::handlerbuild->createfromimg(imm,type); return cli; }}
