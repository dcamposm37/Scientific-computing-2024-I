#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch2/catch_test_macros.hpp>

#include "vector_ops.hpp"

TEST_CASE( "Mean of a vector is computed", "[mean]" ) {
    double presicion = 1.0e-3; // Presición relativa
    const int N = 20; // Tamaño vectores

    // Vector nulo
    std::vector<double> zero_vector(N);
    std::fill(zero_vector.begin(), zero_vector.end(), 0.0); //Se llena el vector con ceros

    // Vector lleno con el mismo valor.
    std::vector<double> const_vector(N); //Se decalara el vector constante
    const double cte = 69.0;
    std::fill(const_vector.begin(), const_vector.end(), cte); //Se llena el vector con el mismo valor cte

    // Vector de dimensión 0. La función debe devolver 1.
    std::vector<double> zero_dim_vector(0);

    // Vectores generados aleatoriamente
    std::vector<double> random_vector = {-26.3, 48.7, -15.9, 72.4, 83.2, -9.6, -65.1, 32.8, 91.5, -57.2};

    // Vector de dimensión grande
    const int L = 200; //Dimensión del vector.
    std::vector<double> large_vector(L);
    std::iota(large_vector.begin(), large_vector.end(), 0.0); // El vector inicia desde 0.0 y sus elementos aumentan de a 1
    double average_large_vector = (L + 1)/2.0 -1.0; // La suma aritmetica de 0 a L-1 es L(L+1)/2 - L. Entonces el promedio del vector es (L+1)/2 - 1

    std::vector<double> vec4 = {-4.32, 2.45, -1.87, 0.12, 3.67, -2.98, 1.23, -0.54, 4.76, -3.89};
    
    REQUIRE( std::fabs(mean(zero_vector) - 0.0) < presicion);
    REQUIRE( std::fabs(mean(const_vector) - cte)/cte < presicion);
    REQUIRE( std::fabs(mean(zero_dim_vector) - 1.0) < presicion);
    REQUIRE( std::fabs(mean(random_vector) - 15.45)/15.45 < presicion);
    REQUIRE( std::fabs(mean(large_vector) - average_large_vector)/average_large_vector < presicion);
}