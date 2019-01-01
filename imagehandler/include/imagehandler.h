
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


class imagehandler {
	public:
		 imagehandler(image*);
		 imagehandler(void);
		 imagehandler(const imagehandler&)=delete;
		 imagehandler(imagehandler&);
		 imagehandler(imagehandler&&);
		 int showimage(std::string win,int flag);
		 virtual builderlistd process(int);
		 builder* handlerbuild;
	private:
		image *imagesaved;
		image *outputimg;
		std::string path;
		std::string currentWindow;
		int flags;
};
