#include "opencv2/opencv.hpp"
#include <iostream>
#include "process.hpp"





/*-------------PublicMembers---------------*/

Process::Process(const cv::Mat &frame)
    :m_frame(frame)
{
    if(m_frame.empty())
        throw std::runtime_error("Error getting the frames");    
}

void Process::preProcFrame(cv::Mat &frame)    
{   
    cvtColor(m_frame, m_frame, cv::COLOR_BGR2GRAY);
    GaussianBlur(m_frame, m_frame, cv::Size(7,7), 1.5, 1.5);
    Canny(m_frame, m_frame, 0, 30, 3);  
    frame=m_frame.clone();
}

Process::~Process()
{
}