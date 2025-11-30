#pragma once
#include <string>

void printImageSize(std::string imagePath);
void CropImage(std::string imagePath, int XStart, int YStart, int width, int height);
void ResizeImage(std::string imagePath, double XScale, double YScale);