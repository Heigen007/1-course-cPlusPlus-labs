#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, countOfNegative = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int b = 0; b < n; b++) {
            if(i == 0) cout << (i+1) * b << " ";
            else if(b == 0) cout << i * (b+1) << " ";
            else cout << i * b << " ";
        }
    }
    return 0;
}