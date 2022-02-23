#/*build by lishuwei  date:2021-07-22
cmake_minimum_required(VERSION 3.10)

project(libusb-demo)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake_modules/")
find_package(LibUSB)
#find_package(libusb-1.0 REQUIRED)
#find_package(libusb-1.0 REQUIRED)
set(VERION_SOFT, 0.2)
configure_file (
    "${PROJECT_SOURCE_DIR}/config.h.in"
    "${PROJECT_BINARY_DIR}/config.h"
)
include_directories(${LIBUSB_1_INCLUDE_DIRS})
include_directories(
    ${PROJECT_SOURCE_DIR}/hotplug
)
#SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
add_compile_options(-std=c++11 -fpermissive)
add_executable(libusb-demo  ${PROJECT_SOURCE_DIR}/src/hotplug.cpp  ${PROJECT_SOURCE_DIR}/src/test.cpp)
target_link_libraries(libusb-demo pthread log4cxx ${LIBUSB_1_LIBRARIES})
#target_link_libraries(libusb-demo  ${PROJECT_SOURCE_DIR}/lib/usb/libusb-1.0.so pthread log4cxx)
#target_link_libraries(libusb-demo  ${PROJECT_SOURCE_DIR}/lib/usb/libusb-1.0.so pthread ${PROJECT_SOURCE_DIR}/lib/log4cxx/liblog4cxx.so)
#target_link_libraries(libusb-demo ${LIBUSB_LIBRARY} pthread log4cxx)
