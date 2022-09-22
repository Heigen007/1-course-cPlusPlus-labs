#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arraySize, tmp, evens = 0, odds = 0;
    cin >> arraySize;
    int arr[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cin >> tmp;
        arr[i] = tmp;
    }

    for (int i = 0; i < arraySize; i++) {
        if(arr[i] % 2 == 0) evens+=1;
        else odds+=1;
    }
    cout << evens << " " << odds;
    
    return 0;
}