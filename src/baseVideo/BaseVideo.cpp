#include "baseVideo.hpp"

BaseVideo *BaseVideo::videoInstance=nullptr;
cv::VideoCapture BaseVideo::m_cap=0;

BaseVideo::BaseVideo()
{
}

void BaseVideo::videoInit(const std::string &path)
{
    BaseVideo::m_cap =cv::VideoCapture(path.c_str());
    if(!BaseVideo::m_cap.isOpened()) 
    
        throw std::runtime_error("Video not found"); 
}

BaseVideo *BaseVideo::getInstance() 
{   
    if (BaseVideo::videoInstance == nullptr)
    {
        BaseVideo::videoInstance = new BaseVideo();
    }

    return  BaseVideo::videoInstance;
}





cv::VideoCapture BaseVideo::getVideo()
{
    return BaseVideo::m_cap;
}



void BaseVideo::videoClose()
{
    BaseVideo::m_cap.release();
    cv::destroyAllWindows();
    
    if (BaseVideo::m_cap.isOpened())
        throw std::runtime_error("Error closing streams");
    // the camera will be deinitialized automatically in VideoCapture destructor
}

BaseVideo::~BaseVideo()
{
}