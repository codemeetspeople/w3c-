#include "Point.h"
#include "catch.hpp"
#include <cmath>

TEST_CASE( "test Point", "[Point]" ) {
    int x_coord = 10;
    int y_coord = 12;
    int default_coord = 0;

    Point a;
    Point b = Point(x_coord, y_coord);
    Point c = b;

    SECTION( "Point: test contructing" ) {
        REQUIRE(a.getX() == default_coord);
        REQUIRE(a.getY() == default_coord);

        REQUIRE(b.getX() == x_coord);
        REQUIRE(b.getY() == y_coord);

        REQUIRE(c.getX() == x_coord);
        REQUIRE(c.getY() == y_coord);

        REQUIRE_FALSE(&b == &c);
    }
    SECTION( "Point: test operators" ) {
        REQUIRE(a != b);
        REQUIRE_FALSE(a == b);
        REQUIRE(b == c);
        REQUIRE_FALSE(b != c);
    }
    SECTION( "Point: test operators" ) {
        REQUIRE(round(a.distance(b)) == round(15.6204993518));
    }
}