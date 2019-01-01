#include<iostream>
#include<opencv2/opencv.hpp>
#include<string>
#include <builder/include/builder.h>
std::string path;

int main()
{

	cv::Mat img;

	std::cout<<"Enter the path:"<<std::endl;
	std::cin>>path;
	//imagehandler im(path);
	img = cv::imread(path, cv::IMREAD_COLOR) ;
	//im.showimage("Yeah",0);
	cv::namedWindow("Display Window", cv::WINDOW_AUTOSIZE);
	cv::imshow("Display Window", img);
	cv::waitKey(0);
	cv::destroyWindow("Display Window");
	return 0;

}
