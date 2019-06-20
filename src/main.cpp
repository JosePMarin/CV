#include "record/record.hpp"
#include <iostream>
#include "ThreadPool.h"
#include "display/display.hpp"



int main(int argc, char **argv)
{
 
    cv::Mat frame;
    const std::string path ("/home/jmarin/Desktop/CV/videos/test.mp4");
    BaseVideo::videoInit(path);



    ThreadPool pool(3);

    pool.init();

    /*-This thread grabs frames from video
    */
    auto t_record =pool.submit(Record::grabFromVideo, std::ref(frame));

    //t_record.get();
    /*-This thread displays the frames
    */
    auto t_display = pool.submit(Display::fromVideo, std::ref(frame));

    t_display.get();

    

 
    // unsigned int n = std::thread::hardware_concurrency(); //Number of threads supported by OS
  
    return 0;
    

}

    // cv::Mat frame;
    // const std::string path ("/home/jmarin/Desktop/CV/videos/test.mp4");
    // BaseVideo::videoInit(path);

//     while (BaseVideo::getInstance()->getVideo().isOpened())
//     {
//         Record::grabFromVideo(frame);

//         Display::fromVideo(frame);
//     }