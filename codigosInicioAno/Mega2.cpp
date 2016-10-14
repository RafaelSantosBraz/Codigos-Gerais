#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cstdio>

using namespace std;

int main(){
    int nums[6];
    for (int cont = 0; cont < 6; cont++){
        nums[cont] = 0;
    }
    for (int cont = 0; cont < 6; cont++){
        bool resp = false;
        srand(time(NULL));
        while (resp == false){
            int n = rand() % 60 + 1;
            bool resul = false;
            for (int cont2 = 0; cont2 < 6; cont2++){
                if (n != nums[cont2]){
                    resul = false;
                } else{
                    resul = true;
                    break;
                }
            }
            if (resul == false){
               nums[cont] = n;
               resp = true;
            }
        }
    }
    printf("Numeros sorteados: ");
    for (int cont = 0; cont < 6; cont++){
       printf("%d ", nums[cont]);
    }
    return 0;
}
