#pragma once
#include <string>
#include "opencv2/opencv.hpp"

class Display
{
private:
    const std::string m_path;
    cv::VideoCapture cap;
    int m_device;
    

    

public:

    Display(const std::string &path);

    Display(int device);

    void fromVideo();

    ~Display();
    
};