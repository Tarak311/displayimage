/* This is the base class for most of the processing class */
#ifndef IMG_INC
#define IMG_INC
#endif
#ifndef BUILD_INC
#include <builder/include/builder.h>
#endif
#include<iostream>
#include<opencv2/opencv.hpp>
#include "include/imagehandler.h"



[[deprecated]]  imagehandler::imagehandler(std::string name){cv::Mat img_temp = cv::imread(name, cv::IMREAD_COLOR);this->img = &img_temp;}
imagehandler::imagehandler(imagehandler& ih):img(ih.img),path(ih.path){} // ADD VARIABLES PERFORM SHALLOW COPY
imagehandler::imagehandler(imagehandler&& ih):img(ih.img),path(ih.path){} // move constructor used

int imagehandler::showimage(std::string win,int flag)
{
	cv::namedWindow(win, cv::WINDOW_NORMAL);
	cv::imshow(win, *(this->img));
	return 0;
}

imagehandler& imagehandler::gethandler(){return *this;}

// [[deprecated]] imagehandler::imagehandler(cv::Mat& im){this->img=&im;} // PASSED BY REFRENCE - DEPRECATED : REMOVED
// [[deprecated]] imagehandler::imagehandler(cv::Mat&& im){this->img=&im;} // MOVE SCHEMATICS USED - DEPRECATED : REMOVED
//imagehandler::imagehandler(const imagehandler& ih) {this->img = ih.img;} //copy constructor -  deleted
