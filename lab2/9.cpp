#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arraySize, tmp, numOFSevens = 0;
    cin >> arraySize;
    int arr[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cin >> tmp;
        arr[i] = tmp;
    }

    for (int i = 0; i < arraySize; i++) {
        if(arr[i] % 10 == 7) numOFSevens++;
    }
    cout << numOFSevens;
    
    return 0;
}