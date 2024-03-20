#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2/catch_test_macros.hpp"
#include "vector_ops.hpp"
#include <cmath>

double EPS = 1.0e-3; //Precision

TEST_CASE( "Mean of a vector is computed", "[mean]" ) {

    std::vector<double> vec1 = {1.0, 2.0, 3.0, 4.0, 5.0};
    REQUIRE( std::fabs(mean(vec1) - 3.0) < EPS );
    
    //Vector Nulo
    std::vector<double> vec2 = {0.0, 0.0, 0.0, 0.0};
    REQUIRE( std::fabs(mean(vec2) - 0.0) < EPS );

    //Vector de valores iguales
    std::vector<double> vec3 = {2.5, 2.5, 2.5, 2.5};
    REQUIRE( std::fabs(mean(vec3)-2.5) < EPS );

    //Vector con valores negativos
    std::vector<double> vec4 = {4.0, -4.0, 7.53, -7.53};
    REQUIRE( std::fabs(mean(vec4)-0.0) < EPS );

    //Vector vacio
    std::vector<double> vec5;
    REQUIRE( std::fabs(mean(vec5)-0.0) < EPS );
}