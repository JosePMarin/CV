#include "display.hpp"
#include "process.hpp"
#include <exception>
#include <iostream>

/*----------------------------------------------Constructor-----------------------------------------------*/




/*---------------------------------------------Member functions-------------------------------------------*/

/*-------------PrivateMembers---------------*/

/**@Brief: Close streams and free up space.
 * @Params:
*/
void Display::close()
{
    
    BaseVideo::getInstance()->getVideo().release();
    cv::destroyAllWindows();
    if (BaseVideo::getInstance()->getVideo().isOpened())
        throw std::runtime_error("Error closing streams");
    // the camera will be deinitialized automatically in VideoCapture destructor

}

/**@Brief: Set properties of the window. For the moment they are hardcoded,in future can be provided by enumtype
 * @Params:in enumtype, in display.hpp
*/
void Display::setWindow()
{
    WindowSize wSize;
    cv::namedWindow("CV", cv::WINDOW_AUTOSIZE);
    if (!BaseVideo::getInstance()->getVideo().isOpened())
        throw std::runtime_error("Can not configure cam because it is not opened");
    BaseVideo::getInstance()->getVideo().set(cv::CAP_PROP_FRAME_HEIGHT,wSize.d_HEIGHT);
    BaseVideo::getInstance()->getVideo().set(cv::CAP_PROP_FRAME_WIDTH,wSize.d_WIDTH);
    cv::resizeWindow(wSize.WINDOWNAME,wSize.WIDTH,wSize.HEIGHT);  //Flag as null because of manual autosize
}

/**@Brief: Process the images feeded from the source
 * @Params:m_frameOut: output array of preprocessed images
*/
// void Display::processImages()
// {    
//     m_cap.read(m_frame); // get a new frame from camera
//     if (m_frame.empty())
//         throw std::runtime_error("Error while reading the video");
//     Process proc(m_frame); //Initialize Process class
//     proc.preProcFrame(m_frame); //Preprocess of images resulting in a new output array    
    
// }

/*-------------PublicMembers---------------*/

/**@Brief: Display the content 
 * @Params:
*/

void Display::fromVideo(cv::Mat &frame)
{
    for(;;)
    {
        Display::setWindow();
        cv::imshow("CV",frame);
        if (cv::waitKey(30)>=0)
            BaseVideo::getInstance()->videoClose();
            break;
    }   
}


// void Display::fromVideo(cv::Mat &frame)
// {
//     if(!m_cap.isOpened()) 
//     {
//         throw std::runtime_error("Video not found");        
//     }
//     else
//     {
//         //Set up 
//         setWindow();
        

//         //Controller
//         while (m_cap.isOpened())
//         {

//             //Display
//             imshow(m_windowName, frame);
//             if(cv::waitKey(30) >= 0)
//                 break;
//         }
//     }
//     //Clean up
//     close();
// }

/**@Brief: 
 * @Params:
*/
Display::~Display()
{

}