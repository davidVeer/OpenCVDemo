#include "Headers/HelloWorldAssignmentFunctions.h"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <stdio.h>

void showImage(std::string path) {
	cv::Mat image = cv::imread(path);
	cv::imshow("Test Image", image);
}

void showVideo(std::string path) {
	cv::VideoCapture cap(path);
	cv::Mat frame;
	while (1) {
		cap.read(frame);

		try { cv::imshow("Test video", frame); }
			catch (cv::Exception &e){
			std::cout << "Error Occured: " << e.msg;
			break;
		}
		
		cv::waitKey(32);
	}
}

void showWebCam(int webCamId) {
	cv::VideoCapture cap(webCamId);
	cv::Mat frame;


	while (1) {
		cap.read(frame);

		try { cv::imshow("Test webcam", frame); }
		catch (cv::Exception& e) {
			std::cout << "Error Occured: " << e.msg;
			break;
		}

		cv::waitKey(1);
	}
}