#include "vector_ops.hpp"
double mean(const std::vector<double> & data)
{ 
  if(data.size() <= 0 ) // Si el tamaño del vector es menor o igual a cero retorna 1
  {
    return 1.0;
  }else // Si el tamaño del vectores mayor a cero retorna la media
  {
    double suma = std::accumulate(data.begin(), data.end(), 0.0); // Suma todos los elementos del vector
    double media = suma / data.size(); // Divide la suma por el número de elementos
    return media;
  }
}