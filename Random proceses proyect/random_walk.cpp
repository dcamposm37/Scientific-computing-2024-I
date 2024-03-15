#include <iostream>
#include <cmath>
#include <vector>

std::vector<double> linspace(double start, double stop, int num) {
    std::vector<double> result;
    if (num <= 1) {
        result.push_back(start);
        return result;
    }
    
    double step = (stop - start) / (num - 1);
    for (int i = 0; i < num; ++i) {
        result.push_back(start + i * step);
    }
    
    return result;
}

int main(int argc, char const *argv[])
{
    return EXIT_SUCCESS;
}

double linspace(int start, int stop, int num){
    const int delta =  (stop - start)/num; 

    // Declaración del arreglo
    int arreglo[num];

    // Llenar el arreglo con valores desde -100 hasta 100
    for (int i = start; i <= stop; i=) {
        arreglo[i + 100] = i;
    }
}