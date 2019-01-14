#include<iostream>
#include<opencv2/opencv.hpp>
#include<string>
#include <builder/include/builder.h>
std::string path;

int main()
{
	builder bb;
	std::cout<<"Number of enabled GPUs are : "<<cv::cuda::getCudaEnabledDeviceCount()<<std::endl;
	std::cout<<"Using GPU : "<<cv::cuda::DeviceInfo().name()<<std::endl;
	imagehandler* bbn = bb.loadimage("i.jpg").build().imagehandlerd->process(bb).build().imagehandlerd;
		imagehandler* bbnp = bb.loadimage("i.jpg").build().imagehandlerd;//->process(bb).build().imagehandlerd;
	bbn->showimage("Display Window1", cv::WINDOW_AUTOSIZE);
	bbnp->showimage("Display Window", cv::WINDOW_AUTOSIZE);
	delete bbn;
  cv::waitKey(0);
	return 0;
}
