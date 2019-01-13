#ifndef BUID_INC
#include <builder/include/builder.h>
#endif
#ifndef IMG_INC
class imagehandler;
#endif
#include<memory>


class listd
{public: int type; std::vector<imagehandler*> ii; imagehandler* parent_class; virtual listd ll_create(void){};};
class imhdlistd: public listd
{public: imagehandler* imagehandlerd;};

class image
{
public:
  image(){std::cout<<"image constructed"<<std::endl;}
  ~image(){std::cout<<" image object destroyed"<<std::endl;}
  std::string path;
  cv::Mat img;
  std::shared_ptr<image> output;
  std::shared_ptr<image> input;
  std::std::vector<imagehandler*> asotd; //use weak pointer in std::vector<> v
  imagehandler* handler;
};
