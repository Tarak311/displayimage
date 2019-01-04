#include<iostream>
#include<opencv2/opencv.hpp>
#include<string>
#include <builder/include/builder.h>
std::string path;
#define SHARDEN 22
int main()
{
	builder bb;
	int enable = 0;
	std::shared_ptr<builder> b(new builder());
	if(enable=SHARDEN){b.loadimage("i.jpg").createfromimg(IMGHDTYPE,SHARDEN);}
	//imagehandler* bbn = bb.loadimage("i.jpg").createfromimg(IMGHDTYPE).imagehandlerd	;
	bbn->showimage("Display Window", cv::WINDOW_AUTOSIZE);
  cv::waitKey(0);
	return 0;
}
