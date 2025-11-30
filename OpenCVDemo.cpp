#ifdef _DEBUG
#pragma comment(lib, "opencv_world4110d.lib")
#else
#pragma comment(lib, "opencv_world4110.lib")
#endif

#include <opencv2/opencv.hpp>
#include "Assignments/Headers/ResizeAndRoiAssignmentFunctions.h"
#include "Assignments/Headers/HelloWorldAssignmentFunctions.h"



int main()
{
	showImage("Recources/Images/Images1/basisfiguren.jpg");
	ResizeImage("Recources/Images/Images1/basisfiguren.jpg", 1.5,0.5);
	CropImage("Recources/Images/Images1/basisfiguren.jpg", 75, 130, 175, 125);

	cv::waitKey(0);
}

