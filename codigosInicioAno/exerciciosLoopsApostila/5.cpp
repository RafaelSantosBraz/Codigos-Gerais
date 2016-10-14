#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    for (int cont = 3; cont <= 23; cont += 5){
        printf("%d ", cont);
    }
    cout << endl;
    for (int cont = 20; cont >= -10; cont -= 6){
        printf("%d ", cont);
    }
    cout << endl;
    for (int cont = 19; cont <= 51; cont += 8){
        printf("%d ", cont);
    }
    cout << endl;
    return 0;
}
