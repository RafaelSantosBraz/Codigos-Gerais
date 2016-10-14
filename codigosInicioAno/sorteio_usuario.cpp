#include <iostream>
#include <cstdlib>
#include <cctype>
#include <time.h>

using namespace std;

int main(){
    cout << "Adivinha um numero" << endl;
    cout << "==================" << endl;
    cout << "Usuario Vs Maquina" << endl;
    cout << endl;
    int num;
    cout << "Numero (1 a 10): ";
    cin >> num;
    int x;
    long int vezes = 0;
    long int semente = time(NULL);
    srand (semente);
    bool correto = false;
    do {
        x =  rand() % 100 + 1;
        vezes++;
        if (num == x){
            correto = true;
        }
    } while (correto == false);
    cout << "Total de sorteios: " << vezes << endl;
    return 0;
}
