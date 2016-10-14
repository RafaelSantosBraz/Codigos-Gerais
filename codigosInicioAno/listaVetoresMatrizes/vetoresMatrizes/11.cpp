#include <iostream>
#include <cstdio>
#define TAM 3

using namespace std;

int main(){
    int n[9], n2[9], n3[9], x[9];
    for (int cont = 0; cont < 9; cont++){
        cout << "Informe um valor para o vetor 1: ";
        cin >> n[cont];
    }
    for (int cont = 0; cont < 9; cont++){
        cout << "Informe um valor para o vetor 2: ";
        cin >> n2[cont];
    }
    for (int cont = 0; cont < 9; cont++){
        cout << "Informe um valor para o vetor 3: ";
        cin >> n3[cont];
    }
    for (int cont = 0; cont < 9; cont++){
       if (cont <= 2){
           x[cont] = n[cont];
       } else if (cont <= 5){
           x[cont] = n2[cont];
       } else{
           x[cont] = n3[cont];
       }
    }
    for (int cont = 0; cont < 9; cont++){
        cout << x[cont] << " ";
    }
    cout << endl;
    return 0;
}

