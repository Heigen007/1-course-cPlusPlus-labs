#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arraySize, maxNumber, secondMaxNumber;
    cin >> arraySize;
    int arr[arraySize][arraySize];

    for (int i = 0; i < arraySize; i++) {
        for (int b = 0; b < arraySize; b++) {
            cin >> arr[i][b];
        }
    }
    maxNumber = arr[0][0];
    secondMaxNumber = arr[0][0];

    for (int i = 0; i < arraySize; i++) {
        for (int b = 0; b < arraySize; b++) {
            maxNumber = max(maxNumber, arr[i][b]);
        }
    }
    for (int i = 0; i < arraySize; i++) {
        for (int b = 0; b < arraySize; b++) {
            if(arr[i][b] < maxNumber)
                secondMaxNumber = max(secondMaxNumber, arr[i][b]);
        }
    }
    if(maxNumber == secondMaxNumber) cout << 0;
    else cout << secondMaxNumber;

    return 0;
}