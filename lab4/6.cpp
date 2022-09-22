#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, maxNumber, positionX = 0, positionY = 0;
    cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int b = 0; b < n; b++) {
            cin >> arr[i][b];
        }
    }
    maxNumber = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int b = 0; b < n; b++) {
            if(maxNumber < max(maxNumber, arr[i][b])) {
                positionX = i;
                positionY = b;
            }
            maxNumber = max(maxNumber, arr[i][b]);
        }
    }
    cout << positionX+1 << " " << positionY+1;

    return 0;
}