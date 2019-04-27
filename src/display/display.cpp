#include "opencv2/opencv.hpp"
#include <string>
#include <iostream>
#include "display.hpp"
#include "process.hpp"


Display::Display(const std::string &path)
    :m_path(path)
{
    cap=cv::VideoCapture(m_path.c_str());

}

Display::Display(int device)
    :m_device(device)
{
    cap=cv::VideoCapture(m_device);
}

void Display::fromVideo()
{
    
    
    if(!cap.isOpened()) 
        throw "Video not found";

    cv::Mat edges;
    cv::namedWindow("edges",1);
    while (cap.isOpened())
    {
        cv::Mat frame;
        cv::Mat frameOut;
        cap.read(frame); // get a new frame from camera
        Process proc(frame);
        proc.framePreProcess(frameOut);
        
        imshow("edges", frameOut);
        if(cv::waitKey(30) >= 0)
            break;
    }

    //Feeing up space and closing streams.
    cap.release();
    cv::destroyAllWindows();
        
    // the camera will be deinitialized automatically in VideoCapture destructor
   
    

}

Display::~Display()
{
}