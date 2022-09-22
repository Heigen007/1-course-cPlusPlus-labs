#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int size;

    cin >> size;
    int arr1[size], arr2[size];

    for (int i = 0; i < size; i++)
        cin >> arr1[i];
    sort(arr1, arr1 + size);
    for (int i = 0; i < size; i++)
        arr2[i] = arr1[size-1-i];
    for (int i = 0; i < size; i++)
        cout << arr2[i] << " ";
    

    return 0;
}