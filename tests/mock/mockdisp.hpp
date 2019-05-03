#include "gmock/gmock.h"
#include "display.hpp"


class MockDisp: public Display
{
public:

    MockDisp();

    

    virtual ~MockDisp();

    MOCK_METHOD1(fromVideo, void());
    
};