#! /bin/bash

g++ -std=c++11 -c Point.cpp
g++ -std=c++11 -c Color.cpp
g++ -std=c++11 -c test_point.cpp
g++ -std=c++11 -c test_color.cpp
g++ -std=c++11 -c main.cpp
g++ *.o -o test.out
rm *.o
./test.out