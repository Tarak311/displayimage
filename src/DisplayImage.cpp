#include<iostream>
#include<opencv2/opencv.hpp>
#include<string>
#include <builder/include/builder.h>
std::string path;

int main()
{

	cv::Mat img;
	builder bb;
	imagehandler* bbn = bb.loadimage("i.jpg").createfromimg(IMGHDTYPE).imagehandlerd;
	//bbn->showimage("Display Window", cv::WINDOW_AUTOSIZE);
	img = cv::imread("i.jpg", cv::IMREAD_COLOR) ;
	image imga;
	imga.img=img;
	imagehandler* ih = new imagehandler(&imga);
	if (bbn->imagesaved->img){std::cout<<"whoah"<<std::endl;}
	//std::cout<<"Enter the path:"<<std::endl;
	//std::cin>>path;
	//imagehandler im(path);

	//im.showimage("Yeah",0);
	//cv::namedWindow("Display Window", cv::WINDOW_AUTOSIZE);
	//cv::imshow("Display Window", img);
	cv::waitKey(0);
	//cv::destroyWindow("Display Window");
	return 0;

}
