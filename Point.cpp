#include <iostream>

struct Point {
    int x;
    int y;

    int getX() {
        return this->x;
    }

    bool operator==(const Point& other) {
        return this->x == other.x && this->y == other.y;
    }

    bool operator!=(const Point& other) {
        return !((*this) == other);
    }
};


std::ostream& operator<<(std::ostream& out, const Point& p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}

int main() {
    Point a = {10, 9};
    Point b = {10, 9};


    if ( a == b ) {
        std::cout << a << " == " << b << std::endl;
    } else {
        std::cout << a << " != " << b << std::endl;
    }


    return 0;
}