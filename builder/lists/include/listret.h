#ifndef BUID_INC
#include <builder/include/builder.h>
#endif
#ifndef IMG_INC
class imagehandler;
#endif
#include<memory>


/*************************************** To be moved to a seperate file *********************************************************************************************************************************************************/
class listd
{public: int type;};
class imhdlistd: public listd
{public:
  imagehandler* imagehandlerd;

};

class image
{
public:
  image()
  {
    std::cout<<"image constructed"<<std::endl;
  }
  ~image()
  {
    std::cout<<" image object destroyed"<<std::endl;
  }
  std::string path;
  cv::Mat img;
  std::shared_ptr<image> output;
  std::shared_ptr<image> input;
  imagehandler* handler;
};/*  code which takes image properties and return imagehandler by calling buildvar = new imagetype::builder.builder().createfromimg().build() */
/******************************************************************************************************************************************************************************************************************************************************************************/
