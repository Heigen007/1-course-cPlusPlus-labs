#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int pr;
    bool isPryme = true;

    cin >> pr;

    if(pr == 1) isPryme = false;
    for (int i = 2; i <= pr/2; i++) {
        if(pr%i == 0) {
            isPryme = false;
            break;
        }
    }

    cout << (isPryme ? "Yes" : "No");
    

    return 0;
}