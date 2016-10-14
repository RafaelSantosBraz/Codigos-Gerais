#include <iostream>

using namespace std;

int main(){
    int n[10], aux = -1;
    for (int cont = 0; cont < 10; cont++){
        aux += 2;
        n[cont] = aux;
    }
    for (int cont = 0; cont < 10; cont++){
        cout << n[cont] << " ";
    }
    cout << endl;
    return 0;
}

