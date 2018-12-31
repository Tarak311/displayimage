#ifndef BUID_INC
#define TOBE_IMG_INC
#include "include/builder.h"
#endif
#ifndef IMG_INC
#include <imagehandler/include/imagehandler.h>
#endif


builder& builder::loadimage(std::string path){}
builder& builder::assignimg(cv::Mat& immat){}
cllist*  builder::createfromimg(image& inpimg,int type){if(type==0){ std::cout<<"creating imagehandler object"<<std::endl; imagehandler* ih = new imagehandler(inpimg.img);cllist cli;cli.imghd=ih; return cli;}}
