#include <iostream>

using namespace std;

int main()
{
    int n, m, tmp, index = 0;

    cin >> n >> m;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n-1; i++) {
        if(arr[i+1] == m)
            index = i+2;
        else if((arr[i] < m) && (arr[i+1] > m))
            index = i+1;
        else if((i == n-2) && (arr[i] < m))
            index = n; 
    }

    cout << index;

    return 0;
}