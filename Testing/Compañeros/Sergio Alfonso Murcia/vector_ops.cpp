#include "vector_ops.h"
double mean(const std::vector<double> & data)
{
  double suma=0.0;
  for (const double & elemento:data){
    suma+=elemento;
  }
  return(suma/static_cast<double>(data.size()));
}