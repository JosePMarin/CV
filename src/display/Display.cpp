#include "display.hpp"
#include "process.hpp"
#include <exception>
#include <iostream>

/*----------------------------------------------Constructor-----------------------------------------------*/

/**@Brief: Constructor by string
 * @Params: string provided by the caller
*/
Display::Display(const std::string &path)
    :m_path(path)
{
    m_cap=cv::VideoCapture(m_path.c_str());

}

/**@Brief: Constructor by int. Any int provided will be adjusted to one (display by camera), for sack of the purpouse of the constructor
 * @Params:
*/
Display::Display(const int device)
{
    m_device=1;
    m_cap=cv::VideoCapture(m_device);
}


/*---------------------------------------------Member functions------------------------------------------------*/

/*-------------PrivateMembers---------------*/

/**@Brief: Close streams and free up space.
 * @Params:
*/
void Display::close()
{
    m_cap.release();
    cv::destroyAllWindows();
    if (m_cap.isOpened())
        throw std::runtime_error("Error closing streams");
    // the camera will be deinitialized automatically in VideoCapture destructor

}

/**@Brief: Set properties of the window. For the moment they are hardcoded,in future can be provided by enumtype
 * @Params:in enumtype, in display.hpp
*/
void Display::setWindow()
{
    if (!m_cap.isOpened())
        throw std::runtime_error("Can not configure cam because it is not opened");
    m_cap.set(cv::CAP_PROP_FRAME_HEIGHT,m_wSize.d_HEIGHT);
    m_cap.set(cv::CAP_PROP_FRAME_WIDTH,m_wSize.d_WIDTH);
    cv::resizeWindow(m_wSize.WINDOWNAME,m_wSize.WIDTH,m_wSize.HEIGHT);  //Flag as null because of manual autosize
}

/**@Brief: Process the images feeded from the source
 * @Params:m_frameOut: output array of preprocessed images
*/
void Display::processImages()
{    
    m_cap.read(m_frame); // get a new frame from camera
    if (m_frame.empty())
        throw std::runtime_error("Error while reading the video");
    Process proc(m_frame); //Initialize Process class
    proc.preProcFrame(m_frame); //Preprocess of images resulting in a new output array    
    
}

/*-------------PublicMembers---------------*/

/**@Brief: Display the content 
 * @Params:
*/
void Display::fromVideo()
{
    if(!m_cap.isOpened()) 
    {
        throw std::runtime_error("Video not found");        
    }
    else
    {
        //Set up 
        setWindow();
        

        //Controller
        while (m_cap.isOpened())
        {
            //Process images
            processImages();
            //Display
            imshow(m_windowName, m_frame);
            if(cv::waitKey(30) >= 0)
                break;
        }
    }
    //Clean up
    close();
}

/**@Brief: 
 * @Params:
*/
Display::~Display()
{

}