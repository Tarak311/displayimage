#include<iostream>
#include<opencv2/opencv.hpp>
#include<string>
#include <builder/include/builder.h>
std::string path;

int main()
{
	std::shared_ptr<builder> bb;

	std::shared_ptr<imagehandler>  bbn = bb->loadimage("i.jpg")->createfromimg(IMGHDTYPE)->imagehandlerd->process(IMGHDTYPE)->builderd->createfromimg(IMGHDTYPE)->imagehandlerd;

	bbn->showimage("Display Window", cv::WINDOW_AUTOSIZE);
  cv::waitKey(0);
	return 0;
}
