#pragma once




class AdaptorMockDisp //Interface to get the mock working
{
    public:
  
    
    virtual void processImages()=0;
    virtual void fromVideo()=0;
    virtual void close()=0;
    virtual void setWindow()=0;
    virtual ~AdaptorMockDisp(){}
    
};



