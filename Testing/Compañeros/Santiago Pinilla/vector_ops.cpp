#include "vector_ops.hpp"


double mean(const std::vector<double> & data)
{
    double sum = 0.0;
    int N = data.size(); // Tmanho del vector

    //Vector vacio
    if(N == 0){return 0.0;}

    for (int ii = 0; ii < N; ii++) {
        sum += data[ii];
    }

    return sum / static_cast<double>(N);
}