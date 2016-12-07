#include <iostream>

using namespace std;

int main(){
    int x = 1, y = 2;
    int *xprt, *yptr;
    xprt = &x;
    yptr = &y;
    //cout << *xprt << endl << *yptr << endl;
    *xprt = 3;
    *yptr = 4;
    cout << *xprt << endl << *yptr << endl;
    return 0;
}