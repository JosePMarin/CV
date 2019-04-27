#include "opencv2/opencv.hpp"
#include <iostream>
#include "process.hpp"


Process::Process(cv::Mat frame)
    :m_frame(frame)
{
    if(m_frame.empty())
        throw "Error getting the frames";
    
}

void Process::framePreProcess(cv::Mat &m_frameOut)
    
    
{
    

    cvtColor(m_frame, m_frameGray, cv::COLOR_BGR2GRAY);
    GaussianBlur(m_frameGray, m_frameGauss, cv::Size(7,7), 1.5, 1.5);
    Canny(m_frameGauss, m_frameEdges, 0, 30, 3);
    m_frameOut=m_frameEdges;
    
}

Process::~Process()
{
}