#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arraySize, tmp, numOfZeros = 0;
    cin >> arraySize;
    string allNums= "";

    for (int i = 0; i < arraySize; i++) {
        cin >> tmp;
        allNums+=to_string(tmp);
    }
    for (int i = 0; i < allNums.length(); i++)
        if(allNums[i] == '0') numOfZeros++;

    cout << numOfZeros;
    
    return 0;
}