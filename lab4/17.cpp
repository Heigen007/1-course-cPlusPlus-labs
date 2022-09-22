#include <iostream>
using namespace std;

int main()
{
    int height,width;
    cin >> height; // высота матрицы
    width = height*2-1; // ширина матрицы(всегда нечетная)
    
    for(int i = 0; i < height; i++){
        for(int b = 0; b < height-i-1; b++) {
            cout << ".";
        }
        for(int b = 0; b < i*2+1; b++) {
            cout << "*";
        }
        for(int b = 0; b < height-i-1; b++) {
            cout << ".";
        }
        cout << endl;
    }

    return 0;
}