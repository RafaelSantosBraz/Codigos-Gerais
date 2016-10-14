#include <iostream>;

using namespace std;

int main(){
    int m;
    bool rep = true;
    do{
        cin >> m;
        if (m != -1){
            if (m % 2 == 0){
                cout << "A\n";
            } else{
                cout << "B\n";
            }
        } else{
            rep = false;
        }
    } while (rep);
    return 0;
}
