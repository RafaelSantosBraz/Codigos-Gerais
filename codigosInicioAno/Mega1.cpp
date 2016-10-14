#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cstdio>

using namespace std;

int main(){
    int nums[60];
    for (int cont = 0; cont < 60; cont++){
        nums[cont] = cont + 1;
    }
    printf("Numeros sorteados: ");
    for (int cont = 1; cont <= 6; cont++){
        bool resp = false;
        srand(time(NULL));
        while (resp == false){
            int posicao = rand() % 59 + 0;
            if (nums[posicao] != 0){
                printf("%d ", nums[posicao]);
                nums[posicao] = 0;
                resp = true;
            }
        }
    }
    return 0;
}
