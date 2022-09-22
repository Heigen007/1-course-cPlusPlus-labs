#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, r, l, tmp;

    cin >> n >> l >> r;
    r-=1;
    l-=1;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    for (int i = 0; i <= (r-l)/2; i++) {
        tmp = arr[r-i];
        arr[r-i] = arr[l+i];
        arr[l+i] = tmp;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}