#include "record.hpp"



Record::Record()
{
    
}



void Record::grabFromVideo(cv::Mat &frame)
{
    // cv::VideoCapture m_cap;
    // m_cap=cv::VideoCapture(path.c_str());
    // if(!m_cap->isOpened()) 
    
    //     throw std::runtime_error("Video not found");
    
    
    BaseVideo::getInstance()->getVideo().read(frame); 
    if (frame.empty())
        throw std::runtime_error("Error while reading the video");
    
}

Record::~Record()
{
}

