#include "opencv2/opencv.hpp"
#include <string>
#include <iostream>



int main(int argc, char **argv)
{
    std::string path ("/home/jmarin/Desktop/CV/videos/test.mp4");

    try
    {
        cv::VideoCapture cap(path.c_str());
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
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() <<std::endl;
    }
    
   
    
    // the camera will be deinitialized automatically in VideoCapture destructor
    return 0;
    

}