#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int tmp;
    vector<int> resultArr;
    int count = 0, result = 0;
    while (cin >> tmp) {
        resultArr.push_back(tmp);
        count++;
    }
    for (int i = 0; i < count; i++) {
        result+=resultArr[i];
    }
    cout << result;
    return 0;
}