#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2/catch_test_macros.hpp"
#include <numeric> // Para iota
#include "vector_ops.hpp"

TEST_CASE( "Mean of a vector is computed", "[mean]" ) {
  double eps = 1.e-3; // Epsilon
  
  // Test 1
  std::vector<double> vec0 = {0.,0.,0.,0.,0.,0.}; // Vector 0
  REQUIRE( mean(vec0) < eps ); // Mean debería ser 0

  // Test 2
  double a = 3.14;
  std::vector<double> veca = {a, a, a, a}; // Vector con entradas iguales
  REQUIRE( mean(veca) - a < eps ); // Mean debería ser igual al valor de a

  // Test 3
  std::vector<double> vec1 = {a, -a, a, -a, -a, a, -a, a}; // Vector 'simétrico'
  REQUIRE( mean(vec1) < eps ); // Mean debería ser 0

  // Test 4
  std::vector<double> vecaa = {a, 2*a, 3*a, 4*a}; // Vector de aumento (?)
  REQUIRE( mean(vecaa) - a*10./4 < eps ); // Mean debería ser a*10/4

  // Test 5
  std::vector<double> vecs = {0, 0, 0, a, 0, 0, 0}; // Vector sparse (?)
  REQUIRE( mean(vecs) - a); // Mean debería ser a

}