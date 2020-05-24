CXXFLAGS := -std=c++11

all: test.out

test.out: test_point.o Point.o test_color.o Color.o main.o
	g++ -o test.out *.o

main.o:
	g++ $(CXXFLAGS) -c main.cpp

test_point.o:
	g++ $(CXXFLAGS) -c test_point.cpp

Point.o:
	g++ $(CXXFLAGS) -c ../point/Point.cpp

test_color.o:
	g++ $(CXXFLAGS) -c test_color.cpp

Color.o:
	g++ $(CXXFLAGS) -c ../color/Color.cpp

clean:
	rm -f *.o
