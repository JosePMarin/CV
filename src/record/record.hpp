#pragma once
#include "opencv2/opencv.hpp"
#include <string>
#include "baseVideo.hpp"




class Record 
{
private:
    Record();
         

public:

    Record(Record const&)=delete;  // copy ctor deleted

    Record& operator=(Record const&)=delete; //assign op. deleted

    static void grabFromVideo (cv::Mat &frame);

    ~Record();




};

