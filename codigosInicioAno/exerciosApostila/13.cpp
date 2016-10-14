#include <iostream>
#include <clocale>
#include <cstdio>

using namespace std;

int main(){
	int dias, total_onibus, total_carro;
	const int carro = 20;
	const int onibus = 5;
	
	setlocale(LC_ALL, "");
	cout << "Informe quantos dias úteis há no mês: ";
	cin >> dias;
	total_carro = dias * carro * 2;
	total_onibus = dias * onibus * 2;
	printf("Seria gasto, com apenas duas viagem diárias, %d - de ônibus - e %d - de carro.,", total_onibus, total_carro);
	return 0;
}