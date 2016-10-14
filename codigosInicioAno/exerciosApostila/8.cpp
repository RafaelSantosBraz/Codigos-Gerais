#include <iostream>
#include <clocale>
#include <cstdio>

using namespace std;

int main(){
	double preco, total;
	int quant;
	setlocale(LC_ALL, "");
	cout << "Informe o preço da mercadoria: ";
	cin >> preco;
	cout << "Informe a quantidade comprada: ";
	cin >> quant;
	total = quant * preco;
	printf("O valor a pagar é: %.2f\n", total);
	return 0;
}