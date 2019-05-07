#include "display.hpp"
#include "gtest/gtest.h"
#include "gmock/gmock.h"


using ::testing::Return;
using ::testing::AtLeast;

class MockDisp : public AdaptorMockDisp
{
    private:

    std::string m_path;
    int m_device;

    public:
    
    MockDisp(const std::string &path)
        :m_path(path)
    {
        Display disp(m_path);
    }

    MockDisp(const int device)
        :m_device(device)
    {
        Display disp(m_device);
    }

    virtual ~MockDisp();

    MOCK_METHOD0(processImages, void());
    MOCK_METHOD0(fromVideo, void());
    MOCK_METHOD0(close, void());
    MOCK_METHOD0(setWindow, void());
    
};


class DisplayTest : public testing::Test
{
    public:

    protected:

    DisplayTest()
    {

    }

    //Test variables here
    std::string t_path;
    int t_num;
    

    void SetUp() override
    {
        //build up for testing here
       
       
        
    }

    void TearDown() override
    {
        //clean up for testing here
    }

    ~DisplayTest()
    {

    }
};






TEST(DisplayTest, AnyIntWork) 
{
    const int num=3;
    MockDisp disp(num);
    EXPECT_CALL(disp,fromVideo()).Times(AtLeast(1));
}

// TEST(DisplayTest, NullPath) 
// {
//     const std::string str ("");
//     Display disp(str);
//     EXPECT_ANY_THROW(disp);
// }

// TEST(DisplayTest, CorrectPath)
//  {
//     const std::string path ("/home/jmarin/Desktop/CV/videos/test.mp4");
//     Display disp(path);
//     EXPECT_NO_THROW(disp);
// }

// TEST(DisplayTest, PathFromVid) 
// {
//     const std::string path ("/home/jmarin/Desktop/CV/videos/test.mp4");
//     Display disp(path);
//     EXPECT_NO_THROW(disp.fromVideo());
// }

// TEST(DisplayTest, AnyIntFromVid) 
// {
//     const int num=3;
//     Display disp(num);
//     EXPECT_NO_THROW(disp.fromVideo());
// }

// TEST(DisplayTest, OtherArg) 
// {
//     bool bl=false;
//     Display disp(bl);
//     EXPECT_ANY_THROW(disp);
// }

// TEST(DisplayTest, OtherArgFromVid)
// {
//     bool bl=false;
//     Display disp(bl);
//     EXPECT_ANY_THROW(disp.fromVideo());
// }



