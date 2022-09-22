#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arraySize, maxNumber;
    cin >> arraySize;
    int arr[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cin >> arr[i];
    }
    maxNumber = arr[0];

    for (int i = 0; i < arraySize; i++) {
        maxNumber = max(maxNumber, arr[i]);
    }
    cout << maxNumber;
    
    return 0;
}