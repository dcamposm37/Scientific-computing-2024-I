#include <iostream>
#include <cstdlib>
#include <cmath>

int foo(int a, int b);
int bar(int a, int b);
double baz(double x);

int main (int argc, char **argv)
{
int ii, jj;
  ii =  0;
  jj = -1;
  foo(ii, jj);
  foo(jj, ii);
  baz(25.9);
  return EXIT_SUCCESS;
}

int foo(int a, int b){ 
  if (a == 0 || b == 0){ // Condición en la que se presenta división por cero
    std::cout << "La función foo tiene una división por cero. Por favor modifique los argumentos de la función" << std::endl;
    return EXIT_FAILURE;
  }else
  {
    return a/b + b/bar(a, b) + b/a;
  }
}

int bar(int a, int b){
  unsigned int c = a;
  if (c + a - b == 0){ //Condición en la cual la función retorna cero
    std::cout << "La función foo tiene una división por cero porque la función bar retorna 0. Por favor modifique los argumentos de la función" << std::endl;
    return EXIT_FAILURE;
  }else
  {
    return c + a - b;
  }
}

double baz(double x){
  double v = -x;
  if (x >= 0){
      return std::sqrt(x); // Retorna la raiz de x si x es positivo
    }
    else{
      return std::sqrt(v); // Retorna la raiz de v = -x si x es negativo
    }    
}