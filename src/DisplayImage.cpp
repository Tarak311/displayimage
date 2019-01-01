#include<iostream>
#include<opencv2/opencv.hpp>
#include<string>
#include <builder/include/builder.h>
std::string path;

int main()
{

	cv::Mat img;
	builder bb;
	builder bbn = bb.loadimage("i.jpg");
	img = cv::imread("i.jpg", cv::IMREAD_COLOR) ;
	image imga;
	imga.img=img;
	imagehandler* ih = new imagehandler(&imga);
	std::cout<<"Enter the path:"<<std::endl;
	std::cin>>path;
	//imagehandler im(path);

	//im.showimage("Yeah",0);
	cv::namedWindow("Display Window", cv::WINDOW_AUTOSIZE);
	cv::imshow("Display Window", img);
	cv::waitKey(0);
	cv::destroyWindow("Display Window");
	return 0;

}
