#include <iostream>
#include <algorithm>
#include <bitset>
// #include <string>

using namespace std;

int main()
{
    int b;
    cin >> b;
    auto str = bitset<4>(b).to_string();

    reverse(str.begin(), str.end());
    auto y = bitset<4>(str);
    cout << (int)(y.to_ulong());

    return 0;
}