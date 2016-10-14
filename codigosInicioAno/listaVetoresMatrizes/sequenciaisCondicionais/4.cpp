#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    cout << "Informe a duracao do evento, em segundos: ";
    int segundos, horas, minutos, seg;
    cin >> segundos;
    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    seg = (segundos % 3600) % 60;
    printf("Tempo convertido > %d : %d : %d\n", horas, minutos, seg);
    return 0;
}
