#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, currentInt = 1;
    cin >> n;
    
    while(currentInt <= n){
        cout << currentInt << endl;
        currentInt = pow(sqrt(currentInt)+1,2);
    }
    
    return 0;
}