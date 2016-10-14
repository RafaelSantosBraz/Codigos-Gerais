// Rafael dos Santos Braz n°120121

#include <iostream>
#include <cstdio>

using namespace std;

long fib_re(long);
double fib_ite(long);
double fib_vet(long);

int main(){
    /*
        posição a ser calculada e retornada pelo Fibonacci. Se for o recursivo, o valor máximo "aceitável" (menos de 2s) é 42, os demais calculam até
        o 1476 de modo correto.
    */
    long posi = 1476;

    /*
        Os "printf" abaixo chamam as respectivas funções de cálculo do Fibonacci. Na ordem: recursivo; iterativo; e iterativo com vetor.
        Para utilizar retire os "//" que precedem a linha desejada.
    */

    //printf("%d\n", fib_re(posi)); // recursivo
    //printf("%.0f\n", fib_ite(posi)); // iterativo
    //printf("%.0f\n", fib_vet(posi)); // iterativo com vetor

    return 0;
}

long fib_re(long f){ //Fibonacci recursivo -> Tempo médio (42): 1.5806
    if (f == 1 || f == 2){
        return 1;
    }
    return fib_re(f -1) + fib_re(f -2);
}

double fib_ite(long f){ //Fibonacci iterativo -> Tempo médio (42): 0.2436       novo tempo médio (1476): 0.1884
    double n_1 = 1, n_2 = 1;
    for (int c = 3; c <= f; c++){
        double aux = n_1 + n_2;
        n_1 = n_2;
        n_2 = aux;
    }
    return n_2;
}

double fib_vet(long f){ //Fibonacci iterativo com vetor -> Tempo médio (42): 0.2732       novo tempo médio (1476): 0.1594
    double fib[f];
    fib[0] = 1;
    fib[1] = 1;
    for (int c = 2; c < f; c++){
        fib[c] = fib[c - 1] + fib[c - 2];
    }
    return fib[f - 1];
}
