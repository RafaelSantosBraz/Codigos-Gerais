#include <iostream>

using namespace std;

int main(){
    int v[5] = {1,2,3,4,5};
    int *vptr = &v[4];
    for (; vptr >= v; vptr--){
        cout << *vptr << endl;
    }
    return 0;
}