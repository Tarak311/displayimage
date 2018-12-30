
#ifndef IMG_INC
#include<iostream>
#include<opencv2/opencv.hpp>
#include<string>
#define IMG_INC
#endif
#ifndef BUID_INC
#ifndef TOBE_BUILD_INC
#include <builder/include/builder.h>
#endif
#endif
class imagehandler {

	public:

		 [[deprecated]]  imagehandler(std::string name);
		 //[[deprecated]] imagehandler(cv::Mat& im);
		 //[[deprecated]] imagehandler(cv::Mat&& im);
		 imagehandler(const imagehandler&)=delete;
		 imagehandler(imagehandler&);
		 imagehandler(imagehandler&&);
		 int showimage(std::string win,int flag);
		 imagehandler& gethandler();
		 virtual void process(void);

		 builderi *handlerbuild;

	private:

		std::string path;
		cv::Mat* img;
		cv::Mat* opimg;
		std::string currentWindow;
		int flags;

};
