#include <iostream>
#include <clocale>
#include <cstdio>
#define carro 20
#define onibus 5

using namespace std;

int main(){
	int dias, total_onibus, total_carro;
	
	setlocale(LC_ALL, "");
	cout << "Informe quantos dias úteis há no mês: ";
	cin >> dias;
	total_carro = dias * carro * 2;
	total_onibus = dias * onibus * 2;
	printf("Seria gasto, com apenas duas viagem diárias, %d - de ônibus - e %d - de carro.,", total_onibus, total_carro);
	return 0;
}