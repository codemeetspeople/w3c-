#include <iostream>
#include <cmath>

class NegativeValueException {};

class Point {
    // access modifier
    private:
        // instance properties
        int x;
        int y;

    public:
        // (default) constructor
        Point(int x=0, int y=0): x(x), y(y) {
            std::cout << "Point(int, int)" << std::endl;
        }

        // copy constructor
        Point(const Point& point) {
            this->x = point.x;
            this->y = point.y;
        }

        // destructor
        ~Point() {}

        // instance methods

        // getter / accessor
        int getX() const {
            return this->x;
        }

        int getY() const {
            return this->y;
        }

        // setter / mutator
        void setX(int x) {
            if ( x < 0 ) {
                throw NegativeValueException();
            }
            this->x = x;
        }

        void setY(int y) {
            this->y = y;
        }

        // overloaded operators
        bool operator==(const Point& other) const {
            return this->x == other.x && this->y == other.y;
        }

        bool operator!=(const Point& other) const {
            return !((*this) == other);
        }

        void operator+=(const Point& other) {
            this->x += other.x;
            this->y += other.y;
        }

        Point operator+(const Point& other) const {
            return Point(this->x + other.x, this->y + other.y);
        }

        double distance(const Point& other) const {
            return hypot(this->x - other.x, this->y - other.y);
        }

        // friend functions/operators
        friend std::ostream& operator<<(std::ostream& out, const Point& p);
};


std::ostream& operator<<(std::ostream& out, const Point& p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}

void printPoint(Point p) {
    std::cout << "(" << p.getX() << ", ";
    std::cout<< p.getY() << ")" << std::endl;
}

int main() {
    Point a = Point(10, 9);
    Point b = Point(11, 8);
    Point c;

    c.setY(20000000000);

    try {
        c.setX(-50);
    } catch ( NegativeValueException obj ) {
        std::cout << "Value should be positive" << std::endl;
    }

    std::cout << c.getY() << std::endl;

    Point* d = new Point(2, 5);

    std::cout << c << std::endl;

    if ( a == b ) {
        std::cout << a << " == " << b << std::endl;
    } else {
        std::cout << a << " != " << b << std::endl;
    }

    std::cout << a.distance(b) << std::endl;

    delete d;

    return 0;
}