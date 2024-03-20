#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2/catch_test_macros.hpp"

#include "vector_ops.h"

TEST_CASE( "Mean of a vector is computed", "[mean]" ) {
  REQUIRE( mean(0) == 1 );
  REQUIRE( mean(0) == 1 );
  REQUIRE( mean(0) == 1 );
  REQUIRE( mean(0) == 1 );
  REQUIRE( mean(0) == 1 );
  
} 