#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arraySize, tmp;
    cin >> arraySize;
    int arr[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cin >> tmp;
        arr[i] = tmp;
    }

    for (int i = 0; i < arraySize; i++) {
        if(arr[i] % 2 == 1) {
            cout << arr[i] << " ";
        }
    }
    
    return 0;
}