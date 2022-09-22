#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, countOfNegative = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int b = 1; b <= i; b++)
            cout << "[*]";
        cout << endl;
    }
    return 0;
}