#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arraySize, tmp, maxNumber;
    cin >> arraySize;
    int arr[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cin >> tmp;
        arr[i] = tmp;
    }
    maxNumber = arr[0];

    for (int i = 0; i < arraySize; i++) {
        maxNumber = max(maxNumber, arr[i]);
    }
    cout << maxNumber;
    
    return 0;
}