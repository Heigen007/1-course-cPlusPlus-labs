#include <iostream>
using namespace std;

int main()
{
    int num;
    bool isPryme = true;

    cin >> num;
    for (int l = 2; l < num; l++){
        for (int i = 2; i <= l/2; i++) {
            if(l%i == 0) {
                isPryme = false;
                break;
            }
        }
        if(isPryme == true) {
            cout << l << " is prime" << endl;
        }
        isPryme = true;
    }
    

    

    return 0;
}