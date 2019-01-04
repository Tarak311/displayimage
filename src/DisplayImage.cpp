#include<iostream>
#include<opencv2/opencv.hpp>
#include<string>
#include <builder/include/builder.h>
std::string path;

int main()
{
	builder bb;
	std::shared_ptr<builder> b(new builder());
	imagehandler* bbn = bb.loadimage("i.jpg").createfromimg(IMGHDTYPE).imagehandlerd;
	bbn->showimage("Display Window", cv::WINDOW_AUTOSIZE);
	delete bbn;
<<<<<<< HEAD
	std::cout << "deleted oj" << '\n';
=======
	std::std::cout << "deleted oj" << '\n';
>>>>>>> 8a218e41a19e3a58734465479bd42a93947d640b
	cv::waitKey(0);
	return 0;
}
