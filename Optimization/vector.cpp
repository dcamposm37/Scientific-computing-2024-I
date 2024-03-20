#include <iostream>
#include <vector>

int main(void)
{
    const int M = 100000;
    const int N = 20000;

    std::vector<double> data;
    data.resize(M*N);

    // [id][jd] -> id*N + jd
    std::cout << data[M*N/2 + N/2] << std::endl;

    return 0;
}