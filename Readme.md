Prerequisites:

Requirements for OpenCV library in Linux (according with https://docs.opencv.org):

GCC 4.4.x or later
CMake 2.6 or higher (We will need at least 3.10.3 for GoogleTest library)
Git
GTK+2.x or higher, including headers (libgtk2.0-dev)
pkg-config
Python 2.6 or later and Numpy 1.5 or later with developer packages (python-dev, python-numpy)
ffmpeg or libav development packages: libavcodec-dev, libavformat-dev, libswscale-dev
[optional] libtbb2 libtbb-dev
[optional] libdc1394 2.x
[optional] libjpeg-dev, libpng-dev, libtiff-dev, libjasper-dev, libdc1394-22-dev

command for all-packages installation:
$ sudo apt-get install python-dev python-numpy libtbb2 libtbb-dev libjpeg-dev libpng-dev libtiff-dev libjasper-dev libdc1394-22-dev



Get Started:

 in folder ../scripts/
 
 |run reposbuild.sh for dependencies installation.                | 
 |run appbuild.sh for the program to build.                       |
 |run exe.sh for run the executable (after building the program)  |
 |run test.sh for run the tests                                   |
