#include <iostream>

using namespace std;

int main(){
    int n[12], x, y;
    for (int cont = 0; cont < 12; cont++){
        cout << "Informe um valor para o vetor: ";
        cin >> n[cont];
    }
    cout << "Informe uma posicao do vetor: ";
    cin >> x;
    cout << "Informe uma posicao do vetor: ";
    cin >> y;
    printf("Soma dos valores das duas posicoes: %d\n", n[x] + n[y]);
    return 0;
}
