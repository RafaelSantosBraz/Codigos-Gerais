#include <iostream>
#include <clocale>
#include <cstdio>

using namespace std;

int main(){
	int quant_pizza, quant_cerveja, total, pessoas;
	double divisao;
	const int pizza = 23;
	const int cerveja = 4;
	
	setlocale(LC_ALL, "");
	cout << "Informe a quantidade de pizzas consumidas: ";
	cin >> quant_pizza;
	cout << "Informe a quantidade de cervejas ingeridas: ";
	cin >> quant_cerveja;
	total = (quant_pizza * pizza) + (quant_cerveja * cerveja);
	printf("O valor total da conta é %d\n", total);
	cout << "Informe a quantidade de pessoas: ";
	cin >> pessoas;
	divisao = (double)total / pessoas;
	printf("O valor por pessoa é %.2f\n", divisao);
	return 0;
}