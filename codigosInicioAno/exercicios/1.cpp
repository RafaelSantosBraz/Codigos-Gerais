#include <iostream>
#include <cstdio>
#include <clocale>

using namespace std;

int main()
{
    double n1, n2, n3, n4, media;
	
	setlocale(LC_ALL, "");
	
    cout << "Informe o primeiro n�mero: ";
    cin >> n1;
    cout << "Informe o segundo n�mero: ";
    cin >> n2;
    cout << "Informe o terceiro n�mero: ";
    cin >> n3;
    cout << "Informe o �ltimo n�mero: ";
    cin >> n4;

    media = (n1 + n2 + n3 + n4) / 4;
	
    printf("A m�dia dos quatro n�meros informados �: %f\n", media);
    return 0;
}
