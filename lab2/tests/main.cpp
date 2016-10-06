#define CATCH_CONFIG_MAIN
#include "../include/positive.h"
#include "catch.hpp"

TEST_CASE( "Checking on positive", "[number]" ) {
    REQUIRE( is_positive(-5) == false );
    REQUIRE( is_positive(5) == true );
    REQUIRE( is_positive(15) == true );
}