#include <iostream>
using namespace std;

int main()
{
    string str;
    int smCount = 0, bigCount = 0, tmp;
    cin >> str;

    for(int i = 0; i < str.length(); i++){
        tmp = int(str[i]);
        if((tmp > 64) && (tmp < 97)) bigCount++;
        else if((tmp > 96) && (tmp < 123)) smCount++;
    }

    cout << smCount << " " << bigCount;

    return 0;
}