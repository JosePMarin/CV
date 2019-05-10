#include "opencv2/opencv.hpp"
#include <string>



class Record
{
private:
    const std::string m_path;
    
    
    

public:
    cv::VideoCapture m_cap;
    
    Record(const std::string &path);

    void grabFromVideo(cv::Mat &frame);
    ~Record();



    // void operator ()(const std::string &path, cv::Mat &frame);
    // void operator ()(int device, cv::Mat &frame);
    // Record(const std::string &path);
    // Record(const std::string &path, cv::Mat &frame);
};

