#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int x = 3;
    while (x <= 23){
        printf("%d ", x);
        x += 5;
    }
    cout << endl;
    x = 20;
    while (x >= -10){
        printf("%d ", x);
        x -= 6;
    }
    cout << endl;
    x = 19;
    while (x <= 51){
        printf("%d ", x);
        x += 8;
    }
    cout << endl;
    return 0;
}
