#include <iostream>
#include <clocale>
#include <cstdio>

using namespace std;

int main(){
	double x, y, area, perimetro;
	
	setlocale(LC_ALL, "");
	cout << "Informe o primeiro lado: ";
	cin >> x;
	cout << "Informe o segundo lado: ";
	cin >> y;
	area = x * y;
	perimetro = (2 * x) + (2 * y);
	printf("A área é %f. O perímetro é %f\n", area, perimetro);
	return 0;
}