#include "vector_ops.hpp"

double mean(const std::vector<double> & data) {
	int size = data.size();
	
	if (size == 0) {
		return 0.0; // Promedio de un vector vacío
	} else {
		double average = 0.0;
		for (int i = 1; i <= data.size(); i++) {
			average += (data[i-1] - average)/i;
		}
		return average;
	}
}
