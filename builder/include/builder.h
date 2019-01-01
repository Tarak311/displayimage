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

/*************************************** To be moved to a seperate file *********************************************************************************************************************************************************/
class listd {int type;};
class imhdlistd: public listd
{imagehandler* imagehandlerd;};
struct image { std::string path; cv::Mat img; image* output; image* input;imagehandler *handler;};/*  code which takes image properties and return imagehandler by calling buildvar = new imagetype::builder.builder().createfromimg().build() */
/******************************************************************************************************************************************************************************************************************************************************************************/


class builder{
public:

  builder& loadimage(std::string);
  imhdlistd createfromimg(int); // TODO: New fucntion for creating from image structure. Which should create imagehandler obj from image structure
  image* imagebuild;
  std::string path;
};

#ifndef IMG_INC
#ifndef TOBE_IMG_INC
#include <imagehandler/include/imagehandler.h>
#endif
#endif
// function is supposed to create image struct and assign function pointer. These are process(),createfromimg().s
