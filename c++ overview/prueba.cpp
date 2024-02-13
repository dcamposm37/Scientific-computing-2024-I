#include <iostream>
#include <math.h>


bool prime(int n);
const int number = 30;

int main(){
    for (int i = number; i > 1; i--){
        if (prime(i)) std::cout << i << std::endl;
    }
} 

bool prime(int n){
    double raiz = std::sqrt(n);
    for (int i = n - 1; i >= raiz; i--){
        if (n%i == 0){
            return false;
        }
    }
    return true;
}