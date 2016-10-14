#include <iostream>
#include <cstdlib>
#include <cctype>
#include <time.h>

using namespace std;

int main(){
    cout << "Adivinha um numero" << endl;
    cout << "==================" << endl;
    cout << "Maquina Vs Maquina" << endl;
    cout << endl;
    int c = 0;
    while (c < 10){
        int x;
        int y, vezes_ganhas = 0, vezes = 0;
        long int inicial = time(NULL);
        do {
            long int semente;
            semente = time(NULL);
            srand (semente);
            x =  rand() % 10 + 1; // entre 1 e 10
            long int semente2 = semente - rand() % 1000000 + 1;
            srand (semente2);
            y =  rand() % 10 + 1; // entre 1 e 10
            vezes++;
            if (x == y){
                vezes_ganhas++;
            }
        } while (time(NULL) <= inicial + 1);
        double resultado = (100.0 * vezes_ganhas) / vezes;
        if (resultado != 0){
            cout << "Total de sorteios: " << vezes << endl;
            cout << "Acertos: " << vezes_ganhas << endl;
            cout << "Porcentagem de acertos: " << resultado << "%" << endl << endl;
        } else{
            //cout << "0%\n\n";
        }
        //cin >> c;
        c++;
    }
    return 0;
}
