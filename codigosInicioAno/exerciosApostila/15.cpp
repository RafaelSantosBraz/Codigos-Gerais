#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	double numero;
	cout << "Informe um numero real: ";
	cin >> numero;
	if (numero - (int)numero != 0.0){
        numero = (int)numero + 1;

	}
	printf("numero arredondado para cima: %.0f\n", numero);
	return 0;
}
