#include <iostream>
#include <vector>

using namespace std;

int main(){
    int x;
    vector<int> v;
    do{
        v.push_back(x);
        cout << "Número: ";
        cin >> x;
    } while (x != -1);
    for (int c = 0; c < v.size(); c++){
        cout << v[c] << endl;
    }
    return 0;
}