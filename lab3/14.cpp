#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int size;

    cin >> size;
    int arr1[size];

    for (int i = 0; i < size; i++)
        cin >> arr1[i];
    for (int i = 0; i < size; i++){
        arr1[i] = pow(arr1[i],2);
        cout << arr1[i] << " ";
    }

    return 0;
}