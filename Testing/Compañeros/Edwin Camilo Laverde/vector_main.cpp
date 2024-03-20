#include "vector_ops.hpp"
#include <iostream> // Se incluye para imprimir a consola
#include <numeric> // Para iota

int main(int argc, char **argv) {
    const int N = std::atoi(argv[1]); // Vector size
    std::vector<double> x; // Vector
    x.resize(N);
    std::iota(x.begin(), x.end(), 0.0); // see: https://en.cppreference.com/w/cpp/algorithm/iota
    std::cout << mean(x) << "\n";
}