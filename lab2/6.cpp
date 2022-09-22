#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int limit, count = 0;
    cin >> limit;

    for (int i = 0; i <= limit; i++)
        count+=i;
    
    cout << count;
    
    return 0;
}