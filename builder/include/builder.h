#define IMGHDTYPE 001
#pragma once

#ifndef BUID_INC
#ifndef IMG_INC
#include<iostream>
#include<opencv2/opencv.hpp>

#endif
#define BUID_INC
#endif

#ifndef IMG_INC
class imagehandler;
#endif
#include<memory>
/*************************************** To be moved to a seperate file *********************************************************************************************************************************************************/
class listd
{
  public:
    int type;
  };

class imhdlistd: public listd
{
  public:
    std::shared_ptr<imagehandler> imagehandlerd;
    int get(std::shared_ptr<imagehandler> imd){std::shared_ptr<imagehandler> imagehandlerd1=imd;std::cout<<"setting value "<<std::endl;this->imagehandlerd.reset();this->imagehandlerd =imd;}
};

struct image
{
  std::string path;
  cv::Mat img;
  std::shared_ptr<image> output;
  std::shared_ptr<image> input;
  imagehandler* handler;
};/*  code which takes image properties and return imagehandler by calling buildvar = new imagetype::builder.builder().createfromimg().build() */
/******************************************************************************************************************************************************************************************************************************************************************************/


class builder : public std::enable_shared_from_this<builder>{
public:
  std::shared_ptr<builder> loadimage(std::string);
  std::shared_ptr<imhdlistd> createfromimg(int); // TODO: New fucntion for creating from image structure. Which should create imagehandler obj from image structure
  std::shared_ptr<image> imagebuild;
  std::string path;
};

#ifndef IMG_INC
#ifndef TOBE_IMG_INC
#include <imagehandler/include/imagehandler.h>
#endif
#endif
// function is supposed to create image struct and assign function pointer. These are process(),createfromimg().s
