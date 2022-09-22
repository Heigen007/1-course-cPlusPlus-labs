#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arraySize, tmp, numberOfPositive = 0;
    cin >> arraySize;
    int arr[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cin >> tmp;
        arr[i] = tmp;
    }

    for (int i = 0; i < arraySize; i++) {
        if(arr[i] > 0) {
            numberOfPositive++;
        }
    }
    cout << numberOfPositive;
    
    return 0;
}