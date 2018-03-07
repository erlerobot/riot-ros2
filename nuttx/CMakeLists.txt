cmake_minimum_required(VERSION 3.5)
project(nuttx)

include(ExternalProject)
find_package(ament_cmake REQUIRED)

ExternalProject_Add(NUTTX
    GIT_REPOSITORY https://github.com/microROS/NuttX
    GIT_TAG 67b5870cd7a02c10156186d1b27b35af23fb1809

    SOURCE_DIR NUTTX

    CONFIGURE_COMMAND ""
    BUILD_COMMAND ""
    INSTALL_COMMAND ""
    LOG_DOWNLOAD ON
    )

install(
    DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/NUTTX
    DESTINATION .
    USE_SOURCE_PERMISSIONS
    )

ament_package()
