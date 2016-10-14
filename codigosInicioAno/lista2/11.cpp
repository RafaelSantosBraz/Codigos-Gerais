#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    cout << "Informe o numero delimitador inicial da sequencia: ";
    int n1, n2;
    cin >> n1;
    cout << "Informe o numero delimitador final da sequencia: ";
    cin >> n2;
    if (n1 != n2){
        int quant = 0;
        for (int cont = ++n1; cont < n2; cont++){
            if (cont % 2 != 0){
                printf("%d ", cont);
                quant++;
            }
        }
        if (quant == 0){
            cout << "Nao ha numeros primos no intervalo indicado.\n";
        }
    } else{
        cout << "Numeros iguais! Nao ha intervalo de numeros.\n";
    }
    return 0;
}
