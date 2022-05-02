#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "B1.hpp"

TEST_CASE( "Arguments initialized") {

    B1 b01(999);
    B1 b02(1000);
    int b001 = b01.get_b1() + 1;
    int b002 = b02.get_b1();

    REQUIRE( b001 == b002 );
}
