#include <iostream>
#include <cstdio>
#include <clocale>

using namespace std;

int main()
{
    double distancia, quant_litros, consumo;
	
	setlocale(LC_ALL, "");
	
	cout << "Informe os quilômetros percorridos: ";
	cin >> distancia;
	cout << "Informe a quantidade de combustível consumido: ";
	cin >> quant_litros;
	
	consumo = distancia / quant_litros;
	
	printf("O redendimento do carro é: %f km/L\n", consumo);
    return 0;
}
