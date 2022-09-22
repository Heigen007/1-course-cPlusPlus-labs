#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arraySize, tmp, maxNumberIndex = 0;
    cin >> arraySize;
    int arr[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cin >> tmp;
        arr[i] = tmp;
    }

    for (int i = 0; i < arraySize; i++) {
        if(arr[maxNumberIndex] < arr[i]) {
            maxNumberIndex = i;
        }
    }
    cout << maxNumberIndex + 1;
    
    return 0;
}