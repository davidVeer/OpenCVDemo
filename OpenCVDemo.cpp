// OpenCVDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#ifdef _DEBUG
#pragma comment(lib, "opencv_world4110d.lib")
#else
#pragma comment(lib, "opencv_world4110.lib")
#endif

#include <opencv2/opencv.hpp>
#include <iostream>
#include <stdio.h>
#include <string>

void showImage(std::string path);

int main()
{
	showImage("Images/test.png");
}

void showImage(std::string path) {
	cv::Mat image = cv::imread(path);
	cv::imshow("Test Image", image);
	cv::waitKey(0);
}

