#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#include <vector>

using namespace std;
int main(){
    fstream arquivo;
    srand(time(NULL));
    int op_arq = rand() % 3 + 1;
    if (op_arq == 1){
        arquivo.open("fortunes", ios::in);
    } else if(op_arq == 2){
        arquivo.open("literature", ios::in);
    } else{
        arquivo.open("riddles", ios::in);
    }
    int num = 0;
    while (arquivo.good()){
        string linha;
        getline(arquivo, linha);
        if (linha[0] != '%'){
            num++;
        }
    }
    arquivo.close();
    if (op_arq == 1){
        arquivo.open("fortunes", ios::in);
    } else if(op_arq == 2){
        arquivo.open("literature", ios::in);
    } else{
        arquivo.open("riddles", ios::in);
    }
    int frase = rand() % num + 1;
    cout << frase << endl;
    cout << op_arq << endl;
    num = 0;
    if (frase == 1){
        
    } else{
        while (arquivo.good()){
            string linha;
            getline(arquivo, linha);
            if (num == frase - 1){
                cout << linha << endl;
            }
            if (linha[0] == '%'){
                num++;
            }
        }   
    }
    arquivo.close();
    return 0;
}