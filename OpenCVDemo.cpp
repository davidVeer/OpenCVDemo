#ifdef _DEBUG
#pragma comment(lib, "opencv_world4110d.lib")
#else
#pragma comment(lib, "opencv_world4110.lib")
#endif

#include "Assignments/Headers/HelloWorldAssignmentFunctions.h"



int main()
{
	showVideo("Videos/TestVideo.mp4");
}

