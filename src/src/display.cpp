#include "opencv2/opencv.hpp"
#include <string>
#include <iostream>
#include "display.hpp"


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
        cap >> frame; // get a new frame from camera
        cvtColor(frame, edges, cv::COLOR_BGR2GRAY);
        GaussianBlur(edges, edges, cv::Size(7,7), 1.5, 1.5);
        Canny(edges, edges, 0, 30, 3);
        imshow("edges", edges);
        if(cv::waitKey(30) >= 0)
            break;
    }
    
    
   
    
    // the camera will be deinitialized automatically in VideoCapture destructor
   
    

}