#pragma once
#include <string>
#include "opencv2/opencv.hpp"




struct WindowSize
{
    int HEIGHT{650};
    int WIDTH{880};
    double d_HEIGHT{650.0};
    double d_WIDTH={880.0};
    std::string WINDOWNAME="CV";
};

class Display
{

private:

/*-----Variables----*/
    const std::string m_path;
    cv::VideoCapture m_cap;
    int m_device;
    std::string m_windowName;
    WindowSize m_wSize;
    
/*-----Const&Methods----*/
    Display();
    void close();
    void setWindow();

public:

/*-----Variables----*/
    cv::Mat m_frame;

/*-----Const&Methods----*/
    Display(const std::string &path);

    Display(const int device);

    void processImages();

    void fromVideo();

    ~Display();
    
};