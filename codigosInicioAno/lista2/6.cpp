#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n;
    cout << "Digite um numero inteiro positivo: ";
    cin >> n;
    if (n != 0){
        if (n > 0){
            int linha = 1;
            for (int cont = 1; cont <= n; cont++){
                if (n % cont == 0){
                    if (linha > 6){
                        cout << endl;
                        linha = 0;
                    }
                    printf("%d ", cont);
                    linha++;
                }
            }
        } else{
            cout << "Apenas numeros positivos sao aceitos!\n";
        }
    } else{
        cout << "Divisores de 0 pertencem a +infinito ou -infinito (o proprio 0 eh excluido)\n";
    }
    return 0;
}
