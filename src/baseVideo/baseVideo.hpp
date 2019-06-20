#pragma once
#include "opencv2/opencv.hpp"

class BaseVideo
{
private:

    BaseVideo(); // ctor hidden

    ~BaseVideo(); // dtor hidden

    
    static BaseVideo *videoInstance;
   
    
public:

    static cv::VideoCapture m_cap;

    static BaseVideo *getInstance();

    static void videoInit(const std::string &path);

    cv::VideoCapture getVideo();
    
    void videoClose();


   
};
