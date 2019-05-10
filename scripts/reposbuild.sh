#!/bin/sh

################################## Clean up #########################################

echo "clean up"
cd ..
rm -r extra
echo "current dir " $PWD

################################## Setup #######################################

#Creating extra folder if it does not exist

echo "Creating folder /extra, in case it does not exist"

mkdir -p extra
cd extra

################################# Submodules ######################################

git submodule add --force https://github.com/google/googletest.git
git submodule add --force https://github.com/opencv/opencv.git 


git submodule init
git submodule update

#Setting the path to /extra as a variable
export extra_dir="$PWD"

echo "extra_dir= " $extra_dir


################################# Building process ############################

#looping through libraries in order to build them
for pack in googletest opencv 
do  
    echo "${extra_dir}/${pack}"
    cd "${extra_dir}/${pack}"
    mkdir -p build/install
    cd build
    cmake .. -DCMAKE_INSTALL_PREFIX=./install -Wno-dev && make -j4 && make install -Wno-dev
    #In case of installing dynamic libraries:
    #cmake .. -DCMAKE_INSTALL_PREFIX=./install -DBUILD_SHARED_LIBS:BOOL=ON -Wno-dev
done