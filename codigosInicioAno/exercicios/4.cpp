#include <iostream>
#include <cstdio>
#include <clocale>

using namespace std;

int main()
{
    int segundos, c_horas, c_minutos, c_segundos;
	double aux;
	
	setlocale(LC_ALL, "");
	
	cout << "Informe o(s) segundo(s): ";
	cin >> segundos;
	
	if (segundos < 60){
		c_horas = 0;
		c_minutos = 0;
		c_segundos = segundos;
	} else {	
		aux = segundos / 60.00;
		c_minutos = (int) aux;
		aux += 0.001;
		c_segundos = 60 * (aux - c_minutos);
		if (c_minutos >= 60){
			aux = c_minutos / 60.00;
			c_horas = (int) aux;
			aux += 0.001;
			c_minutos = 60 * (aux - c_horas);
		}
	}
	printf("A conversão resulta em: %dh:%dmin:%ds\n", c_horas, c_minutos, c_segundos);
    return 0;
}
