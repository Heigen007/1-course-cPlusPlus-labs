#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arraySize, tmp;
    long long arrSum = 0;
    cin >> arraySize;
    int arr[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cin >> tmp;
        arr[i] = tmp;
    }

    for (int i = 0; i < arraySize; i++) {
        arrSum += arr[i];
    }

    cout << arrSum;
    
    return 0;
}