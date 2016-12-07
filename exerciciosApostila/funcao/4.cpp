#include <iostream>

using namespace std;

double calcula(int);

int main(){
    int h;
    cout << "Horas: ";
    cin >> h;
    cout << "Valor: " << calcula(h) << endl;
    return 0;
}

double calcula(int h){
    double total = 5.0;
    if (h > 3){
        total += (h - 3) * 3.0;
        if (total > 20.00){
            total = 20.00;
        }
    }
    return total;
}