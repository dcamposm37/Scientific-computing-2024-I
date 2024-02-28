#include <random>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <string>
using std::ofstream;
using std::to_string;
using std::string;

void compute_pdf(int seed, int nsamples, double mu, double sigma, double xmin, double xmax, int nbins);

int main(int argc, char **argv)
{
  const int SEED = std::atoi(argv[1]);
  const int NSAMPLES = std::atoi(argv[2]);
  const double MU = std::stod(argv[3]);
  const double SIGMA = std::stod(argv[4]);
  const double XMIN = std::stod(argv[5]);
  const double XMAX = std::stod(argv[6]);
  const int NBINS = std::atoi(argv[7]);

  compute_pdf(SEED, NSAMPLES, MU, SIGMA, XMIN, XMAX, NBINS);
}

void compute_pdf(int seed, int nsamples, double mu, double sigma, double xmin, double xmax, int nbins)
{
  // random stuff
  std::mt19937 gen(seed); //  Inicializa un generador de números pseudoaleatorios con una semilla
  std::normal_distribution<double> dis{mu, sigma};// Inicializa una distribución normal 
  std::vector<int> hist(nbins,0);// Vector para conteo del histograma
  double width = (xmax-xmin)/nbins;// Ancho de los itervalos del histograma

  for(int n = 0; n < nsamples; ++n){// Itera sobre el número de muestras (5000)
    double r = dis(gen);
    double x0 = xmin;
    double x1 = x0 + width;
      for(int ii = 0; ii < nbins; ii++){// Itera sobre el número del intervalo
        if(x0 < r & r < x1){// Verifica que el número generado pertenezca al intervalo actual
          hist[ii]++; // Aumentar el conteo del hisograma
          break;
        }
        x0 = x0 + width;
        x1 = x1 + width;
      }
  }

  string dataFile = "data" + to_string(seed) + ".txt";
  ofstream fout;
  fout.open(dataFile);

  double BinCenter = (2*xmin + width)/2; // Calcula el centro de los bins
  for(int ii = 0; ii < nbins; ii++){
    double f = hist[ii]/(nsamples*width);
    fout << BinCenter << '\t' << f << '\n';
    BinCenter = BinCenter + width;
  }
  fout.close();
} 