#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    const double t = 0.05;
    const double p = 1000.00;
    double aux = 1.0;
    for (int n = 1; n <= 10; n++){
        aux *= (1 + t);
    }
    double m = p * aux;
    printf("Montante: %f\n", m);
    return 0;
}
