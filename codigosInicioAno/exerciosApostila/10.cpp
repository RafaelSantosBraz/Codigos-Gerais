#include <iostream>
#include <clocale>
#include <cstdio>

using namespace std;

int main(){
	double valor, divisao;
	int quant;
	setlocale(LC_ALL, "");
	cout << "Informe o valor do prêmio: ";
	cin >> valor;
	cout << "Informe a quantidade de participantes: ";
	cin >> quant;
	divisao = valor / quant;
	printf("O valor dividido igualmente é %.2f\n", divisao);
	return 0;
}