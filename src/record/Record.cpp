#include "record.hpp"


Record::Record(const std::string &path)
    :m_path(path)
{
    m_cap=cv::VideoCapture(m_path.c_str());
}



void grabFromVideo(cv::Mat &frame)
{
    if(!m_cap.isOpened()) 
    
        throw std::runtime_error("Video not found");       
    
    m_cap.read(frame); 
    if (frame.empty())
        throw std::runtime_error("Error while reading the video");
    
}

Record::~Record()
{
}



// void Record::operator()(int device, cv::Mat &frame)
// {
//     device=1;
//     m_cap=cv::VideoCapture(device);
//     grabFromVideo(frame);
// }