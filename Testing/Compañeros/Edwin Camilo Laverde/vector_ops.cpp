#include "vector_ops.hpp"
#include <numeric> // For accumulate function

double mean(const std::vector<double> & data)
{
  double sum = std::accumulate(data.begin(), data.end(), 0);
  double meanValue = sum/data.size();
  return meanValue;
}