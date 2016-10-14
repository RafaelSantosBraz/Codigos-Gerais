#include <iostream>;

using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    cout << "{";
    for (;x>0;x--)
        for (int a = y; a < 0; a++)
            cout << x << a << ",";
    cout << "}";
    return 0;
}
