#include <iostream>
#include <cstdio>
#include <clocale>

using namespace std;

int main()
{
    int horas, minutos, segundos, segundos_totais;
	
	setlocale(LC_ALL, "");
	
	cout << "Informe a(s) hora(s): ";
	cin >> horas;
	cout << "Informe o(s) minuto(s): ";
	cin >> minutos;
	cout << "Informe o(s) segundo(s): ";
	cin >> segundos;
	
	segundos_totais = (horas * 60 * 60) + (minutos * 60) + segundos;
	
	printf("A conversão resulta em %d segundos\n", segundos_totais);
    return 0;
}
