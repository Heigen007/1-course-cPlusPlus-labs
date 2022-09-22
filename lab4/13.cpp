#include <iostream>
using namespace std;

int main()
{
    int size, currentNum = 1, x = 0, y = 0;
    cin >> size;
    int arr[size][size];

    for (int i = 0; i < size; i++)
        for (int b = 0; b < size; b++)
            arr[i][b] = 0;

    while(currentNum < size*size) {
        while(y < size-1 && arr[x][y+1] == 0) {
            arr[x][y] = currentNum;
            y++;
            currentNum++;
        }
        while(x < size-1 && arr[x+1][y] == 0){
            arr[x][y] = currentNum;
            x++;
            currentNum++;
        }
        while(y>0 && arr[x][y-1] == 0){
            arr[x][y] = currentNum;
            y--;
            currentNum++;
        }
        while(x>0 && arr[x-1][y] == 0){
            arr[x][y] = currentNum;
            x--;
            currentNum++;
        }
    }
    arr[x][y] = currentNum;

    for (int i = 0; i < size; i++) {
        for (int b = 0; b < size; b++) {
            cout << arr[i][b] << " ";
        }
        cout << endl; 
    }

    return 0;
}