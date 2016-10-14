#include <iostream>
#include <clocale>
#include <cstdio>

using namespace std;

int main(){
	int n1, n2, resp;
	setlocale(LC_ALL, "");
	cout << "Informe o primeiro número: ";
	cin >> n1;
	cout << "Informe o segundo número: ";
	cin >> n2;
	resp = n1 + n2;
	printf("A soma dos números é: %d\n", resp);
	return 0;
}