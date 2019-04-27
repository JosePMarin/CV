#include "display.hpp"
#include <string>
#include <iostream>
#include "opencv2/opencv.hpp"



int main(int argc, char **argv)
{
    const std::string path ("/home/jmarin/Desktop/CV/videos/test.mp4");
    

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