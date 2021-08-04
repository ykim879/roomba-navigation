# Install script for directory: /home/nicholas/catkin_ws/src/PlotJuggler

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/nicholas/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/nicholas/catkin_ws/build/PlotJuggler/catkin_generated/installspace/plotjuggler.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plotjuggler/cmake" TYPE FILE FILES
    "/home/nicholas/catkin_ws/build/PlotJuggler/catkin_generated/installspace/plotjugglerConfig.cmake"
    "/home/nicholas/catkin_ws/build/PlotJuggler/catkin_generated/installspace/plotjugglerConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plotjuggler" TYPE FILE FILES "/home/nicholas/catkin_ws/src/PlotJuggler/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/nicholas/catkin_ws/devel/lib/libplotjuggler_plugin_base.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/nicholas/catkin_ws/src/PlotJuggler/include/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/nicholas/catkin_ws/install/share/applications/PlotJuggler.desktop")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/nicholas/catkin_ws/install/share/applications" TYPE FILE FILES "/home/nicholas/catkin_ws/src/PlotJuggler/PlotJuggler.desktop")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/nicholas/catkin_ws/install/share/icons/plotjuggler.svg")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/nicholas/catkin_ws/install/share/icons" TYPE FILE FILES "/home/nicholas/catkin_ws/src/PlotJuggler/plotjuggler.svg")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/nicholas/catkin_ws/build/PlotJuggler/3rdparty/backward-cpp/cmake_install.cmake")
  include("/home/nicholas/catkin_ws/build/PlotJuggler/3rdparty/color_widgets/cmake_install.cmake")
  include("/home/nicholas/catkin_ws/build/PlotJuggler/3rdparty/Qt-Advanced-Docking/cmake_install.cmake")
  include("/home/nicholas/catkin_ws/build/PlotJuggler/3rdparty/qwt/src/cmake_install.cmake")
  include("/home/nicholas/catkin_ws/build/PlotJuggler/3rdparty/lua-5.4.1/cmake_install.cmake")
  include("/home/nicholas/catkin_ws/build/PlotJuggler/plugins/DataStreamMQTT/cmake_install.cmake")
  include("/home/nicholas/catkin_ws/build/PlotJuggler/3rdparty/liblsl/cmake_install.cmake")
  include("/home/nicholas/catkin_ws/build/PlotJuggler/plugins/DataStreamLSL/cmake_install.cmake")
  include("/home/nicholas/catkin_ws/build/PlotJuggler/src/cmake_install.cmake")
  include("/home/nicholas/catkin_ws/build/PlotJuggler/plugins/DataLoadCSV/cmake_install.cmake")
  include("/home/nicholas/catkin_ws/build/PlotJuggler/plugins/DataLoadULog/cmake_install.cmake")
  include("/home/nicholas/catkin_ws/build/PlotJuggler/plugins/DataStreamSample/cmake_install.cmake")
  include("/home/nicholas/catkin_ws/build/PlotJuggler/plugins/DataStreamWebsocket/cmake_install.cmake")
  include("/home/nicholas/catkin_ws/build/PlotJuggler/plugins/DataStreamUDP/cmake_install.cmake")
  include("/home/nicholas/catkin_ws/build/PlotJuggler/plugins/StatePublisherCSV/cmake_install.cmake")
  include("/home/nicholas/catkin_ws/build/PlotJuggler/plugins/DataStreamZMQ/cmake_install.cmake")

endif()

