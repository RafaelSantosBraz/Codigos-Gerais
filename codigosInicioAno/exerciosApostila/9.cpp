#include <iostream>
#include <clocale>
#include <cstdio>

using namespace std;

int main(){
	double F, C;
	const double div = 0.55555555555555555555555555555556;
	setlocale(LC_ALL, "");
	cout << "Informe a temperatura (°F): ";
	cin >> F;
	C = div * (F - 32);
	printf("A temperatura em °C é %f\n", C);
	return 0;
}