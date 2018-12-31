
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

cllist& buildfuntion(int type);
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
		 virtual image process(int);  // This function handle the process of creating a new image structure. and then call it's create funtion pinter
 	 		// We can have a pointer to function as a argument and it will assigned to function pointer.
		static	builder *handlerbuild= new builder();

	private:
		image *imagesaved;
		image *outputimg[10];
		std::string path;
		cv::Mat* img;
		cv::Mat* opimg;
		std::string currentWindow;
		int flags;

};
