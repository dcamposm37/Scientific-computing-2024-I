#include <iostream>


bool prime(int n);
const int top = 30;
const int bottom = 10;

int main(){
    for (int i = top; i >= bottom; i--){
        if (prime(i)) std::cout << i << std::endl;
    }
} 

bool prime(int n){
    for (int i = n - 1; i*i >= n; i--){
        if (n%i == 0){
            return false;
        }
    }
    return true;
}