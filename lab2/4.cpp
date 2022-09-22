#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double n, k, rounds;
    cin >> n >> k;
    
    rounds = ceil((n*2)/k);
    if(rounds == 1) rounds = 2;
    cout << rounds;

    return 0;
}