#!/bin/bash
rm -rf build-cmake
mkdir build-cmake && cd build-cmake
cmake .. -DCMAKE_PREFIX_PATH="/Users/atatat/Qt/6.4.1/macos" -DQt5Widgets_DIR="~/Qt/QtDesignStudio/qt5_design_studio_reduced_version/lib/cmake/Qt5Widgets"
