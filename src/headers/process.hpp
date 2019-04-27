#pragma once
#include "opencv2/opencv.hpp"



class Process
{
private:
    cv::Mat m_frame;
    cv::Mat m_frameEdges;
    cv::Mat m_frameGray;
    cv::Mat m_frameGauss;
    cv::Mat m_frameOut;
    
    
public:
    Process(cv::Mat frame);

    void framePreProcess(cv::Mat &frameOut);

    ~Process();
};