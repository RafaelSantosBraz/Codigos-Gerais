#include <iostream>

using namespace std;

int main(){
    int pessoas;
    cout << "Informe o numero de pessoas: ";
    cin >> pessoas;
    if (pessoas <= 1000){
        cout << "Publico baixo";
    } else if ((pessoas >= 1001) && (pessoas <= 10000)){
        cout << "Publico medio";
    } else{
        cout << "Publico bom";
    }
    return 0;
}

