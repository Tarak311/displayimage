#include<iostream>
#include<opencv2/opencv.hpp>
#include<string>
#include <builder/include/builder.h>
std::string path;

int main()
{
	std::cout<<"sts1"<<std::endl;
	cv::Mat img,dst;
	builder bb;
	std::cout<<"sts2"<<std::endl;
	imagehandler* bbn = bb.loadimage("i.jpg").createfromimg(IMGHDTYPE).imagehandlerd;
	std::cout<<"sts3"<<std::endl;
	bbn->showimage("Display Window", cv::WINDOW_AUTOSIZE);
	img = cv::imread("i.jpg", cv::IMREAD_COLOR) ;
	image imga;
	imga.img=img;
	imagehandler* ih = new imagehandler(&imga);
  std::cout<<"sts4"<<std::endl;
	//cv::compare(img,bbn->imagesaved->img,dst,cv::CMP_EQ);

	std::cout<<"sts5"<<std::endl;

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
