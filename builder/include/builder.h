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

struct cllist {int type ;imagehandler *imghd;};                                                   /* it should have switch statement which selects which type to use*/
struct image { std::string path; cv::Mat img; image* output; image* input; cllist (*buildimghd)(int);imagehandler *handler;};/*  code which takes image properties and return imagehandler by calling buildvar = new imagetype::builder.builder().createfromimg().build() */

class builder{
public:
  builder() {}
  builder& loadimage(std::string);
  builder& assignimg(cv::Mat&);
  cllist createfromimg(image&,int/*type*/); // TODO: New fucntion for creating from image structure. Which should create imagehandler obj from image structure

private:
  image imagebuild;

};
#ifndef IMG_INC
#ifndef TOBE_IMG_INC
#include <imagehandler/include/imagehandler.h>
#endif
#endif
// function is supposed to create image struct and assign function pointer. These are process(),createfromimg().s
