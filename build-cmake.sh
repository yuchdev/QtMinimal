#!/bin/bash
rm -rf build-cmake
mkdir build-cmake && cd build-cmake
cmake .. -DCMAKE_PREFIX_PATH="/usr/local/Cellar/qt/6.4.0/lib/cmake"
