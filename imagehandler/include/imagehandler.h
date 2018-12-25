
#ifndef IMG_INC
#define IMG_INC
#endif
#ifndef BUILD_INC
#include <builder/include/builder.h>
#endif
#include<iostream>
#include<opencv2/opencv.hpp>
#include<string>

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

	private:

		std::string path;
		cv::Mat* img;
		cv::Mat* opimg;
		std::string currentWindow;
		int flags;

};
