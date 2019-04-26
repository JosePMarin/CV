#!/bin/sh

#################################### Clean up ########################################
cd ..
rm -r build
echo "clean up"

##################################### Build ip #############################################

mkdir -p build/install
cd build
cmake .. -DCMAKE_INSTALL_PREFIX=./install -Wno-dev && make -j4
