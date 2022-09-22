#include <iostream>
using namespace std;

int main()
{
    int size, sum = 0;
    cin >> size;
    int arr[size][size];

    for (int i = 0; i < size; i++)
        for (int b = 0; b < size; b++)
            cin >> arr[i][b];

    for (int i = 0; i < size; i++) {
        for (int b = 0; b < size; b++) {
            if(i == (size - b - 1)) {
                sum += arr[i][b];
            }
        }
    }

    cout << sum;

    return 0;
}