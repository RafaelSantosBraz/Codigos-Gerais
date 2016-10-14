#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n = 3;
    do{
        printf("%d ", n);
        n += 5;
    } while (n <= 23);
    cout << endl;
    n = 20;
    do{
        printf("%d ", n);
        n -= 6;
    } while (n >= -10);
    cout << endl;
    n = 19;
    do{
        printf("%d ", n);
        n += 8;
    } while (n <= 51);
    cout << endl;
    return 0;
}
