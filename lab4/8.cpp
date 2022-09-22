#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m, minNumber = 2147483647, position = 0, rowCount = 0;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int b = 0; b < m; b++) {
            cin >> arr[i][b];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int b = 0; b < m; b++) {
            rowCount+=arr[i][b];
        }
        if(minNumber > min(rowCount, minNumber)) {
            position = i;
        }
        minNumber = min(rowCount, minNumber);
        rowCount = 0;
    }
    cout << position + 1;

    return 0;
}