#include "display.hpp"
#include <string>
#include <iostream>
#include "opencv2/opencv.hpp"
#include <thread>



int main(int argc, char **argv)
{
    const std::string path ("/home/jmarin/Desktop/CV/videos/test.mp4");
    unsigned int n = std::thread::hardware_concurrency(); //Number of threads supported by OS

    try
    {
        Display disp(path);
        disp.fromVideo();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    

    
    return 0;
    

}