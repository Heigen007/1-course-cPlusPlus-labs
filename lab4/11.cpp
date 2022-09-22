#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m, sum = 0;
    cin >> n >> m;
    int arr[m][n];

    for (int i = 0; i < n; i++) {
        for (int b = 0; b < m; b++) {
            cin >> arr[b][i];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int b = 0; b < m; b++) {
            sum += arr[b][i];
        }
        cout << "The sum of row number " << i+1 << " is " << sum << endl;
        sum = 0;
    }
    for (int i = 0; i < m; i++) {
        for (int b = 0; b < n; b++) {
            sum += arr[i][b];
        }
        cout << "The sum of column number " << i+1 << " is " << sum << endl;
        sum = 0;
    }

    return 0;
}