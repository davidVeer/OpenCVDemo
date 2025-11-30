#include "Headers/TekstAssignmentFunctions.h"

#include <iostream>
#include <stdio.h>

void drawBob(cv::Mat canvas, int canvasSize);

void createCanvas(int canvasSize, double redValue, double greenValue, double blueValue) {
	cv::Mat blankImage(canvasSize, canvasSize, CV_8UC3, cv::Scalar(blueValue, greenValue, redValue));
	drawBob(blankImage, canvasSize);
	cv::imshow("blank Image", blankImage);
}

void drawBob(cv::Mat canvas, int canvasSize) {
	int radiusBaseSize = canvasSize * 0.1;

	cv::rectangle(canvas, cv::Point(canvasSize * 0.4, canvasSize * 0.2), cv::Point(canvasSize*0.6, canvasSize*0.6), cv::Scalar(0, 0, 0), cv::FILLED);
	cv::circle(canvas, cv::Point(canvasSize*0.5, canvasSize*0.3), radiusBaseSize * 2, cv::Scalar(0, 0, 0), cv::FILLED);
	cv::circle(canvas, cv::Point(canvasSize*0.4, canvasSize * 0.3), radiusBaseSize/2, cv::Scalar(255, 255, 255), cv::FILLED);
	cv::circle(canvas, cv::Point(canvasSize * 0.6, canvasSize * 0.3), radiusBaseSize/2, cv::Scalar(255, 255, 255), cv::FILLED);
	cv::putText(canvas, "This, this is bob", cv::Point(canvasSize * 0.2, canvasSize * 0.8), cv::FONT_HERSHEY_DUPLEX,radiusBaseSize/50,cv::Scalar(0,0,0),radiusBaseSize*0.05);
	cv::line(canvas, cv::Point(canvasSize * 0.2, canvasSize * 0.85), cv::Point(canvasSize * 0.8, canvasSize * 0.85), cv::Scalar(0, 0, 0), radiusBaseSize * 0.05);
}
