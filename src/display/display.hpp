#pragma once
#include <string>
#include "opencv2/opencv.hpp"
#include "baseVideo.hpp"





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
/*-----Construct&Methods----*/
    Display();
    

protected:

/*-----Variables----*/
    std::string m_windowName;
    WindowSize m_wSize;
    
/*-----Construct&Methods----*/
    
    void close();
    static void setWindow();

public:

/*-----Variables----*/
   

/*-----Const&Methods----*/


    // void processImages();

    static void fromVideo(cv::Mat &frame);

    ~Display();
    
};