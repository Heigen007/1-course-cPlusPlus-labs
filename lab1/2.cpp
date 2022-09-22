#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,k;
    string k_str;
    cin >> n >> k;
    k_str = to_string(k);
    cout << n + stoi(string(1,k_str.at(0))) + stoi(string(1,k_str.at(2)));
    return 0;
}