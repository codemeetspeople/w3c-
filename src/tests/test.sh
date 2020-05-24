#! /bin/bash

g++ -std=c++11 -c ../point/Point.cpp
g++ -std=c++11 -c ../color/Color.cpp
g++ -std=c++11 -c test_point.cpp
g++ -std=c++11 -c test_color.cpp
g++ -std=c++11 -c main.cpp
g++ *.o -o test.out
rm *.o
./test.out
# ./test.out -s -r compact
rm *.out
