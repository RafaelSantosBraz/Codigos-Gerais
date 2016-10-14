#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    int a, b, c, d, e, maior, menor;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    maior = (a + b + (abs(a - b))) / 2;
    maior = (maior + c + (abs(maior - c))) / 2;
    maior = (maior + d + (abs(maior - d))) / 2;
    maior = (maior + e + (abs(maior - e))) / 2;
    if (((a < b) && (a < c) && (a < d) && (a < e)) || ((a <= b) && (a <= c) && (a <= d) && (a <= e))){
        menor = a;
    } else if (((b < a) && (b < c) && (b < d) && (b < e)) || ((b <= a) && (b <= c) && (b <= d) && (b <= e))){
        menor = b;
        } else if (((c < a) && (c < b) && (c < d) && (c < e)) || ((c <= a) && (c <= b) && (c <= d) && (c <= e))){
            menor = c;
        } else if (((d < a) && (d < b) && (d < c) && (d < e)) || ((d <= a) && (d <= b) && (d <= c) && (d <= e))){
            menor = d;
        } else if (((e < a) && (e < b) && (e < d) && (e < c)) || ((e <= a) && (e <= b) && (e <= d) && (e <= c))){
            menor = e;
        }else if ((a == b) && (a == c) && (a == d) && (a == e)){
            menor = a;
        }
    printf("Maior: %d\nMenor: %d", maior, menor);
    return 0;
}

