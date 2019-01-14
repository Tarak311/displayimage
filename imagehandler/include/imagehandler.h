#ifndef IMG_INC
#ifndef BUID_INC
#include<iostream>
#include<opencv2/opencv.hpp>
#include<string>
#define IMG_INC
#endif
#endif

#ifndef BUID_INC
#include <builder/include/builder.h>
#endif

class builderlistd: public listd
{public: builder* builderd;};

class imagehandler: public baseclass {
	public:

		 imagehandler(std::shared_ptr<image>);

		 ~imagehandler(void){if ((this->handlerbuild->decrementobj()) == 1){std::cout<<"deleting imagehandler object"<<std::endl; delete handlerbuild;}};

		 imagehandler(const imagehandler&)=delete;
		 imagehandler(imagehandler&);
		 imagehandler(imagehandler&&);

		 int showimage(std::string win,int flag);
		 virtual builder& process(builder&,std::vector<image*> *v = nullptr);

		 std::shared_ptr<image> imagesaved;
		 std::shared_ptr<image> outputimg;
		 imagehandler* parent;
		 builder* handlerbuild;

	private:

		std::string path;
		std::string currentWindow;
		int flags;
		imagehandler& savestate(std::vector<image*>);
		std::vector<imagehandler*> child;
	};
