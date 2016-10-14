#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    for (int estrelas = 1; estrelas <= 10; estrelas++){
        for (int imprimir = 1; imprimir <= estrelas; imprimir++){
            printf("*");
        }
        cout << endl;
    }
    cout << endl;
    for (int estrelas = 10; estrelas >= 1; estrelas--){
        for (int imprimir = 1; imprimir <= estrelas; imprimir++){
            printf("*");
        }
        cout << endl;
    }
    cout << endl;
    for (int estrelas = 10; estrelas >= 1; estrelas--){
        for (int imprimir = 0; imprimir < 10 - estrelas; imprimir++){
            printf(" ");
        }
        for (int imprimir = 1; imprimir <= estrelas; imprimir++){
            printf("*");
        }
        cout << endl;
    }
    cout << endl;
    for (int estrelas = 1; estrelas <= 10; estrelas++){
        for (int imprimir = 0; imprimir < 10 - estrelas; imprimir++){
            printf(" ");
        }
        for (int imprimir = 1; imprimir <= estrelas; imprimir++){
            printf("*");
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
