#include <iostream>

using namespace std;

int somar(int, int);

int main(){
    int n1, n2;
    cout << "N1: ";
    cin >> n1;
    cout << "N2: ";
    cin >> n2;
    cout << somar(n1, n2) << endl;
    return 0;
}

int somar(int x, int y){
    return x + y;
}