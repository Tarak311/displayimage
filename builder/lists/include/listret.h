#pragma once

#ifndef BUID_INC
#include <builder/include/builder.h>
#endif
#ifndef IMG_INC
class imagehandler;
#endif
#include<memory>

class baseclass
{
public:
   baseclass(void){std::cout << "creating" << '\n';}
   ~baseclass(void){std::cout << "deleting" << '\n';}
   virtual int decrementobj(){ return --counter;} //to be moved to base class
   virtual int incrementobj(){ return ++counter;}//to be moved to base class
   virtual int checkobj(){return counter;}
   int counter = 0 ;
};
class builder;
class listd: public baseclass
{public: int type; virtual listd* ll_create(void){};};
class imhdlistd: public listd
{
  public:
    imagehandler* imagehandlerd;
    std::vector<imagehandler*> ii;
    imagehandler* parent_class;
    imhdlistd* ll_create(builder&);
  };


class image: public baseclass
{
public:
  image(cv::Mat ii){std::cout<<"image constructed"<<std::endl;this->img=ii;}
  image(){std::cout<<"image constructed"<<std::endl;}
  ~image(){std::cout<<" image object destroyed"<<std::endl;}
  std::string path;
  cv::Mat img;
  std::shared_ptr<image> output;
  std::shared_ptr<image> input;
  void loadgpu(){this->gim.upload(this->img);}
  void downloadgpu(){this->gim.download(this->img);}
  cv::cuda::GpuMat gim;
  std::vector<imagehandler*> asotd; //use weak pointer in std::vector<> v
};
