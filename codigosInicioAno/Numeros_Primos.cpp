#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int limite;
    int linha = 0;
    int num = 0;
    cout << "Digite o numero inicial do intervalo (numero >= 2): ";
    cin >> num;
    cout << "Digite o numero final do intervalo (numero >= 2): ";
    cin >> limite;
    while (num <= limite){
        int cont = 2;
        bool primo = true;
        while (cont < num){
            if (num % cont == 0){
                primo = false;
                cont = num;
            } else{
                cont++;
            }
        }
        if (primo == true){
            linha++;
            if (linha < 7){
                printf("%d ", num);
            } else{
                printf("%d\n", num);
                linha = 0;
            }
        }
        num++;
    }
    return 0;
}
