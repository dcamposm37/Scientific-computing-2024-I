#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2/catch.hpp"
#include "vector_ops.hpp"

TEST_CASE( "Mean of a vector is computed", "[mean]" ) {
  	std::vector<double> vector_test1 = {0.0, 0.0, 0.0, 0.0};
  	std::vector<double> vector_test2 = {5.0, 5.0, 5.0, 5.0};
  	std::vector<double> vector_test3 = {8.0, 4.0, 3.0, 9.0};
  	std::vector<double> vector_test4 = {2.5, 8.9, 10.1, 1.2};
  	std::vector<double> vector_test5 = {1.4, 34.0, 1.3, 0.8};
	std::vector<double> vector_test6 = {1.0};
	std::vector<double> vector_test7;

	/*
	Nota: Cuando se compara con el valor 0.0, no es posible determinar el error
	relativo porque se genera una división entre 0, por lo que únicamente se 
	calcula su error.
	*/

	REQUIRE(std::fabs(mean(vector_test1) - 0.0) <= 1.0e-3);
	REQUIRE(std::fabs(mean(vector_test2) - 5.0)/5.0 <= 1.0e-3);
	REQUIRE(std::fabs(mean(vector_test3) - 6.0)/6.0 <= 1.0e-3);
	REQUIRE(std::fabs(mean(vector_test4) - 5.675)/5.675 <= 1.0e-3);
	REQUIRE(std::fabs(mean(vector_test5) - 9.375)/9.375 <= 1.0e-3);
	REQUIRE(std::fabs(mean(vector_test6) - 1.0)/1.0 <= 1.0e-3);
	REQUIRE(std::fabs(mean(vector_test7) - 0.0) <= 1.0e-3);
}