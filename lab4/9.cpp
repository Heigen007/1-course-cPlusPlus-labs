#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    double arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int b = 0; b < m; b++) {
            cin >> arr[i][b];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int b = 0; b < m; b++) {
            if(pow(int(sqrt(arr[i][b])),2) == arr[i][b]) arr[i][b] = sqrt(arr[i][b]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int b = 0; b < m; b++) {
            cout << arr[i][b] << endl;
        }
    }


    return 0;
}