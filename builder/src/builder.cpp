#ifndef BUID_INC
#define TOBE_IMG_INC
#include "include/builder.h"
#endif
#ifndef IMG_INC
#include <imagehandler/include/imagehandler.h>
#endif


builder& builder::loadimage(std::string path){cv::Mat img_temp = cv::imread(name, cv::IMREAD_COLOR);this->imagebuild->img = &img_temp;return this;}
imhdlistd  builder::createfromimg(int TYPE){ if(TYPE==IMGHDTYPE){ std::cout<<"creating imagehandler object"<<std::endl; imagehandler* ih = new imagehandler(this->imagebuild->img); ih->handlerbuild=this;imhdlistd imhdli; imhdli->imagehandlerd=ih; imhdli.type=IMGHDTYPE; return imhdli;}}
