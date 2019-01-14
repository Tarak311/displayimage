#define IMGHDTYPE 001
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
#include <builder/lists/include/listret.h>
#include<opencv2/cudaimgproc.hpp>
#include <opencv2/cudafilters.hpp>
class builder:public baseclass{
public:
  ~builder(){std::cout << "deleting builder obj" << '\n';}
  builder& loadimage(std::string);
  imhdlistd& createfromimg(int); // TODO: New fucntion for creating from image structure. Which should create imagehandler obj from image structure
  std::shared_ptr<image> imagebuild;
  std::string path;

};

#ifndef IMG_INC
#ifndef TOBE_IMG_INC
#include <imagehandler/include/imagehandler.h>
#endif
#endif
// function is supposed to create image struct and assign function pointer. These are process(),createfromimg().s
