#include <iostream>;
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(NULL));
    int x = rand() % 100 + 1, quant = 0, y;
    do{
        cin >> y;
        quant++;
        if (y > x){
            cout << "Maior\n";
        } else if (y < x){
            cout << "Menor\n";
        }
    } while (y != x);
    cout << quant << endl;
    return 0;
}
