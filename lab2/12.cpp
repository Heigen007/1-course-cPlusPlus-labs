#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, currentInt = 0;
    cin >> n;
    
    while(pow(2,currentInt) <= n){
        cout << pow(2,currentInt) << " ";
        currentInt++;
    }
    
    return 0;
}