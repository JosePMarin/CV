#pragma once
#include "opencv2/opencv.hpp"



class Process
{
private:

    cv::Mat m_frame;  
    
    
public:

    Process(const cv::Mat &frame);

    void preProcFrame(cv::Mat &frame);

    ~Process();
};