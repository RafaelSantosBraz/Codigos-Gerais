#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#include <vector>

using namespace std;

fstream arquivo;

void abrir_arquivo();
int sortear_numero(int m);

int main(){
    abrir_arquivo();
    int num = 0;
    while (arquivo.good()){
        string linha;
        getline(arquivo, linha);
        if (linha[0] != '%'){
            num++;
        }
    }
    arquivo.close();
    abrir_arquivo();
    int frase = sortear_numero(num);
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

void abrir_arquivo(){
    int op_arq = sortear_numero(3);
    if (op_arq == 1){
        arquivo.open("fortunes", ios::in);
    } else if(op_arq == 2){
        arquivo.open("literature", ios::in);
    } else{
        arquivo.open("riddles", ios::in);
    }
}

int sortear_numero(int m){
    srand(time(NULL));
    return rand() % m + 1;
}