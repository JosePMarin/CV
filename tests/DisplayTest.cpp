#include "display.hpp"
#include "gtest/gtest.h"


class DisplayTest : public testing::Test
{
    public:

    protected:

    //Test variables here

    void SetUp() override
    {
        //build up for testing here
    }

    void TearDown() override
    {
        //clean up for testing here
    }
};



TEST(DisplayTest, AnyIntWork) 
{
    const int num=3;
    Display disp(num);
    EXPECT_NO_THROW(disp);
}

TEST(DisplayTest, NullPath) 
{
    const std::string str ("");
    Display disp(str);
    EXPECT_ANY_THROW(disp);
}

TEST(DisplayTest, CorrectPath)
 {
    const std::string path ("/home/jmarin/Desktop/CV/videos/test.mp4");
    Display disp(path);
    EXPECT_NO_THROW(disp);
}

TEST(DisplayTest, PathFromVid) 
{
    const std::string path ("/home/jmarin/Desktop/CV/videos/test.mp4");
    Display disp(path);
    EXPECT_NO_THROW(disp.fromVideo());
}

TEST(DisplayTest, AnyIntFromVid) 
{
    const int num=3;
    Display disp(num);
    EXPECT_NO_THROW(disp.fromVideo());
}

TEST(DisplayTest, OtherArg) 
{
    bool bl=false;
    Display disp(bl);
    EXPECT_ANY_THROW(disp);
}

TEST(DisplayTest, OtherArgFromVid)
{
    bool bl=false;
    Display disp(bl);
    EXPECT_ANY_THROW(disp.fromVideo());
}



