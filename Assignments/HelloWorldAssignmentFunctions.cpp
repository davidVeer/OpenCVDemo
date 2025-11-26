#include "Headers/HelloWorldAssignmentFunctions.h"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <stdio.h>

void showImage(std::string path) {
	cv::Mat image = cv::imread(path);
	cv::imshow("Test Image", image);
	cv::waitKey(0);
}