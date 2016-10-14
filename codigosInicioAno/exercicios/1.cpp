#include <iostream>
#include <cstdio>
#include <clocale>

using namespace std;

int main()
{
    double n1, n2, n3, n4, media;
	
	setlocale(LC_ALL, "");
	
    cout << "Informe o primeiro número: ";
    cin >> n1;
    cout << "Informe o segundo número: ";
    cin >> n2;
    cout << "Informe o terceiro número: ";
    cin >> n3;
    cout << "Informe o último número: ";
    cin >> n4;

    media = (n1 + n2 + n3 + n4) / 4;
	
    printf("A média dos quatro números informados é: %f\n", media);
    return 0;
}
