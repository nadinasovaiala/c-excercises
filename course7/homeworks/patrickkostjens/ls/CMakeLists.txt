cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++14")

find_package(Boost 1.49.0 REQUIRED COMPONENTS filesystem)

INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

add_executable(ls ls.cc)
TARGET_LINK_LIBRARIES( ls LINK_PUBLIC ${Boost_LIBRARIES} )
