#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    for (int num = 1; num <= 10; num++){
        printf("Tabuada do %d\n", num);
        for (int linha = 1; linha <= 10; linha++){
           printf("%d * %d = %d\n", num, linha, num * linha);
        }
        cout << endl;
    }
    return 0;
}
