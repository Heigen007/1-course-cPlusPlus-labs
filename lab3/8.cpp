#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, r, l, tmp;
    long long sum = 0;

    cin >> n >> l >> r;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        arr[i] = tmp;
    }
    for (int i = 0; i < n; i++) {
        if((l <= i+1) && (i+1 <= r)) {
            sum+=arr[i];
        }
    }
    cout << sum;
    
    return 0;
}