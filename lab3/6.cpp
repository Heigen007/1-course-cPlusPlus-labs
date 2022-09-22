#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arraySize, tmp, arrSum = 0;
    cin >> arraySize;
    int arr[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cin >> tmp;
        arr[i] = tmp;
    }

    for (int i = arraySize - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    
    return 0;
}