#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arraySize, maxNumber;
    cin >> arraySize;
    int arr[arraySize][arraySize];

    for (int i = 0; i < arraySize; i++) {
        for (int b = 0; b < arraySize; b++) {
            cin >> arr[i][b];
        }
    }
    maxNumber = arr[0][0];
    for (int i = 0; i < arraySize; i++) {
        for (int b = 0; b < arraySize; b++) {
            maxNumber = max(maxNumber, arr[i][b]);
        }
    }
    cout << maxNumber;

    return 0;
}