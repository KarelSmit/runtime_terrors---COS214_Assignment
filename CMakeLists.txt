cmake_minimum_required(VERSION 3.23)
project(QueueIterator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(
        Node.h
        Supply.cpp
        Supply.h
        SupplyTest.cpp
        SupplyIterator.cpp
        SupplyIterator.h
        SupplyUnit.cpp
        SupplyUnit.h
        TransportUnit.cpp
        TransportUnit.h
)
