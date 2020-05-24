#! /bin/bash

echo "g++ -std=c++11 -c ../point/Point.cpp"
g++ -std=c++11 -c ../point/Point.cpp
echo "g++ -std=c++11 -c ../color/Color.cpp"
g++ -std=c++11 -c ../color/Color.cpp
echo "g++ -std=c++11 -c test_point.cpp"
g++ -std=c++11 -c test_point.cpp
echo "g++ -std=c++11 -c test_color.cpp"
g++ -std=c++11 -c test_color.cpp
echo "g++ -std=c++11 -c main.cpp"
g++ -std=c++11 -c main.cpp
echo "build test.out"
g++ *.o -o test.out
rm *.o
echo "Run tests:"
./test.out
# ./test.out -s -r compact
rm *.out
