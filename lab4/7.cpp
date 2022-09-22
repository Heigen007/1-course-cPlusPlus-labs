#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int b = 1; b <= n; b++) {
            if((n - b + 1) != i) cout << ".";
            else cout << i;
        }
        cout << endl;
    }
    return 0;
}