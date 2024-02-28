#include <iostream>
#include <vector>
#include <cmath>
#include <omp.h>
using std::vector;

const int N = 1e6;

vector<float> SumUp(int limit){
    vector<float> sum(limit); 
    float term = 0;
    for (int ii = 1; ii<=limit; ii++){        
        term += 1.0/ii;

        sum[ii-1] = term;
    }

    return sum;
}

float SumDown(int limit){
    float term = 0;
    for (int ii = limit; ii>=1; ii--){
        term += 1.0/ii;
    }
    return term;
}

int main(){
    vector<float>S1results = SumUp(N);
    for(int ii=1; ii<=N; ii++
    ){
        float S1 = S1results[ii-1];
        float S2 = SumDown(ii);
        float DS = 1.0 - S1/S2;
        std::cout << ii << "\t " << S1 << "\t" << S2 << "\t" << std::abs(DS) << std::endl;
    }

}