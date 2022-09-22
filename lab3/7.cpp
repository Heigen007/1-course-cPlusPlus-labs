#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int arraySize, tmp, arrMax, arrMin;
    cin >> arraySize;
    int arr[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cin >> tmp;
        arr[i] = tmp;
    }
    arrMax = arrMin = arr[0];
    for (int i = 0; i < arraySize; i++) {
        arrMax = max(arrMax, arr[i]);
        arrMin = min(arrMin, arr[i]);
    }

    for (int i = 0; i < arraySize; i++) {
        if(arr[i] == arrMax) arr[i] = arrMin;
    }

    for (int i = 0; i < arraySize; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}