#include "../color/Color.h"
#include "catch.hpp"


TEST_CASE( "test Color", "[Color]" ) {
    SECTION( "Point: test contructing" ) {
        REQUIRE(getRedColor() == "red");
        REQUIRE(getBlueColor() == "blue");
        REQUIRE(getMagentaColor() == "magenta");
        REQUIRE(getYellowColor() == "yellow");
        REQUIRE(getLightGreenColor() == "green");
        REQUIRE(getBlackColor() == "black");
    }
}