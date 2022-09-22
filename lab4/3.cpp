#include <iostream>
using namespace std;

int main()
{
    int n, m, countOfNegative = 0;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int b = 0; b < m; b++) {
            cin >> arr[i][b];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int b = 0; b < m; b++) {
            if(arr[i][b] < 0) countOfNegative++;
        }
    }
    cout << countOfNegative;
    return 0;
}