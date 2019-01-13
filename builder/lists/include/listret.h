#ifndef BUID_INC
#include <builder/include/builder.h>
#endif
#ifndef IMG_INC
class imagehandler;
#endif
#include<memory>


class listd
{public: int type; virtual listd ll_create(void){};};
class imhdlistd: public listd
{public: imagehandler* imagehandlerd; std::vector<imagehandler*> ii; imagehandler* parent_class;};

class image
{
public:
  image(){std::cout<<"image constructed"<<std::endl;}
  ~image(){std::cout<<" image object destroyed"<<std::endl;}
  std::string path;
  cv::Mat img;
  cv::cuda::GpuMat gim;
  std::shared_ptr<image> output;
  std::shared_ptr<image> input;
  std::vector<imagehandler*> asotd; //use weak pointer in std::vector<> v
  imagehandler* handler;
};
