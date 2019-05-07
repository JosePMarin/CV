#include "gmock/gmock.h"
#include "process.hpp"


class MockProc: public Process
{
public:
    MOCK_METHOD0(framePreProcess, void(cv::Mat &m_frameOut));
    
};