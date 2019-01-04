#pragma once

#ifndef IMG_INC
#ifndef BUID_INC
#include<iostream>
#include<opencv2/opencv.hpp>
#include<string>
#endif
#endif
#define IMG_INC
#ifndef BUID_INC
#include <builder/include/builder.h>
#endif

class builderlistd: public listd
{public: std::shared_ptr<builder> builderd;};


class imagehandler {
	public:
		 imagehandler(std::shared_ptr<image>);
		 ~imagehandler(){std::cout<<"Item deleted";}
		 //imagehandler(void);
		 imagehandler(const imagehandler&)=delete;
		 imagehandler(imagehandler&);
		 imagehandler(imagehandler&&);
		 int showimage(std::string win,int flag);
		 virtual std::shared_ptr<builderlistd> process(int);
		 std::shared_ptr<builder> handlerbuild;
		 std::shared_ptr<image>  imagesaved;
	private:

		std::shared_ptr<image> outputimg;
		std::string path;
		std::string currentWindow;
		int flags;
};
