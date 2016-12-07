#include <iostream>

using namespace std;

void exibe(int);

int main(){
    int x;
    cout << "Digite um número inteiro: ";
    cin >> x;
    exibe(x);
    return 0;
}

void exibe(int x){
    cout << x << endl;
}