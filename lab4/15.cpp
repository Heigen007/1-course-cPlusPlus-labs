#include <iostream>
using namespace std;

int main()
{
    int size, currentNum, x = 0, y = 0;
    cin >> size;
    int arr[size][size];

    for (int i = 0; i < size; i++)
        for (int b = 0; b < size; b++)
            cin >> arr[i][b];

    currentNum = arr[0][0];

    for (int i = 0; i < size; i++) {
        for (int b = 0; b < size; b++) {
            if(i == b && arr[i][b] > currentNum) {
                currentNum = arr[i][b];
                x = i;
                y = b;
            }
        }
    }

    cout << "Maximum element is: " << currentNum << " with coordinates: " << x+1 << ";" << y+1;

    return 0;
}