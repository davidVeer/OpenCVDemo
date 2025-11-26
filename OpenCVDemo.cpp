// OpenCVDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#ifdef _DEBUG
#pragma comment(lib, "opencv_world4110d.lib")
#else
#pragma comment(lib, "opencv_world4110.lib")
#endif

#include <opencv2/opencv.hpp>
#include <iostream>

int main()
{

    auto img = cv::imread("test.png");
    cv::imshow("My Image", img);
    cv::waitKey();
}
