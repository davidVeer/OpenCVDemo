#ifdef _DEBUG
#pragma comment(lib, "opencv_world4110d.lib")
#else
#pragma comment(lib, "opencv_world4110.lib")
#endif

#include <opencv2/opencv.hpp>
#include "Assignments/Headers/TekstAssignmentFunctions.h"



int main()
{
	createCanvas(500, 0, 108, 170);
	cv::waitKey(0);
}

