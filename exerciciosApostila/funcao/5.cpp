#include <iostream>

using namespace std;

int inverter(int);

int main(){
    int n;
    cout << "Número: ";
    cin >> n;
    cout << inverter(n) << endl;
    return 0;
}

int inverter(int n){
    string num = to_string(n), convert = "";
    for (int i = num.length() - 1; i >= 0; i--){
        convert += num[i];
    }
    return atoi(convert.c_str());
}