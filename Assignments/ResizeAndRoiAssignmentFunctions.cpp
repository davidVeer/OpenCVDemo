#include "Headers/ResizeAndRoiAssignmentFunctions.h"

#include <opencv2/opencv.hpp>
#include <iostream>
#include <stdio.h>


void printImageSize(std::string imagePath) {
	cv::Mat image = cv::imread(imagePath);
	std::cout << image.size() << std::endl;
}

void ResizeImage(std::string imagePath, double XScale, double YScale) {
	cv::Mat image = cv::imread(imagePath);
	cv::Mat resizedImage;

	cv::resize(image, resizedImage, cv::Size(), XScale, YScale);

	cv::imshow("ResizedImage", resizedImage);
}

void CropImage(std::string imagePath, int XStart, int YStart, int width, int height) {
	cv::Mat image = cv::imread(imagePath);
	cv::Mat croppedImage;

	cv::Rect roi(XStart, YStart, width, height);
	croppedImage = image(roi);

	cv::imshow("CroppedImage",	croppedImage);
}
