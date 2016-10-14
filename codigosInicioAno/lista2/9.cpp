#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    cout << "Informe um numero inteiro: ";
    int n;
    cin >> n;
    bool primo = false;
    for (int cont = 2; cont < n; cont++){
        if (n % cont != 0){
            primo = true;
        } else{
            primo = false;
            break;
        }
    }
    if (primo == true){
        cout << "Eh primo!\n";
    } else{
        cout << "Nao eh primo!\n";
    }
    return 0;
}
