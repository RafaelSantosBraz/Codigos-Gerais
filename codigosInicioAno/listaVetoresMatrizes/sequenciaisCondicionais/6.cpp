#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int a, b;
    cout << "Informe o valor de a: ";
    cin >> a;
    cout << "Informe o valor de b: ";
    cin >> b;
    if (a > b){
        int aux = a;
        a = b;
        b = a;
    }
    if (b % a == 0){
        cout << "Sao multiplos\n";
    } else{
        cout << "Nao sao multiplos\n";
    }
    return 0;
}
