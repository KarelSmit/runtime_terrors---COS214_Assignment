cmake_minimum_required(VERSION 3.23)
project(QueueIterator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(
        Node.h
        Medic.cpp
        Medic.h
        MedicTest.cpp
        MedicIterator.cpp
        MedicIterator.h
        MedicUnit.cpp
        MedicUnit.h
        Battalion.cpp
        Battalion.h
)
