#include <iostream>
using namespace std;

int main(){
    string str;
    int l,r;

    cin >> str >> l >> r;

    cout << str.substr(l,r+1);
    return 0;
}