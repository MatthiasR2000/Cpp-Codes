cmake_minimum_required(VERSION 3.30)
project(Klassen)

set(CMAKE_CXX_STANDARD 20)

add_executable(Klassen main.cpp
        Vehicle.cpp
        Vehicle.h
        Garage.cpp
        Garage.h
        Dealership.cpp
        Dealership.h
        Car.cpp
        Car.h

        Motorbike.cpp
        Motorbike.h)
