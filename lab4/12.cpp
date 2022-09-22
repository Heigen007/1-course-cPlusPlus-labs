#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m, sum = 0, posX, posY;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int b = 0; b < m; b++) {
            cin >> arr[b][i];
        }
    }
    cout << "coordinates of min elements:" << endl;
    for (int i = 0; i < m; i++) {
        posX = i;
        posY = 0;
        for (int b = 0; b < n; b++) {
            if(arr[i][b] < arr[posX][posY]){
                posX = i;
                posY = b;
            }
        }
        cout << posY+1 << ";" << posX+1 << endl;
        sum += arr[posX][posY];
    }

    cout << endl << "Their sum:" << endl << sum;

    return 0;
}