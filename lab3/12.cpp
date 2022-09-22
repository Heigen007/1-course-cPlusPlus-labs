#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int size1, size2;

    cin >> size1;
    int arr1[size1];

    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cin >> size2;
    int arr2[size2];

    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    int resultArr[size1+size2];

    for (int i = 0; i < size1; i++) {
        resultArr[i] = arr1[i];
    }
    
    for (int i = 0; i < size2; i++) {
        resultArr[i + size1] = arr2[i];
    }
    sort(resultArr, resultArr+size1+size2);
    for (int i = 0; i < size1 + size2; i++) {
        cout << resultArr[i] << " ";
    }
    
    return 0;
}