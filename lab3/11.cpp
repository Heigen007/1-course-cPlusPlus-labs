#include <iostream>
#include <cmath>
#include <algorithm>
    #include <vector>

using namespace std;

int main()
{
    int n, tmp;

    cin >> n;
    int arr[n];
    vector<int> resultArr;

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        arr[i] = tmp;
    }

    for (int i = 0; i < n; i++) {
        while(( i < n-1 ) && arr[i] == arr[i+1]) i++;
        resultArr.push_back(arr[i]);
    }
    for (int i = 0; i < resultArr.size(); i++) {
        cout << resultArr[i] << " ";
    }
    
    return 0;
}