#include "display/display.hpp"
#include "record/record.hpp"
#include <iostream>
#include "ThreadPool.h"



int main(int argc, char **argv)
{
    cv::Mat frame;
    const std::string path ("/home/jmarin/Desktop/CV/videos/test.mp4");


    ThreadPool pool(3);

    pool.init();

    Record rec (path);

   

    auto t_record =pool.submit(rec.grabFromVideo,std::ref(frame));
    // auto t_record pool.submit(Record(), std::ref(path,frame));
    t_record.get();

    // const std::string path ("/home/jmarin/Desktop/CV/videos/test.mp4");
    // unsigned int n = std::thread::hardware_concurrency(); //Number of threads supported by OS

    // try
    // {
    //     Display disp(path);
    //     disp.fromVideo();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    
    
    

    
    return 0;
    

}