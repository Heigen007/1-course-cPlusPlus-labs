#include <iostream>
using namespace std;

int main()
{
    string str;
    int tmp;
    cin >> str;

    for(int i = 0; i < str.length(); i++){
        tmp = int(str[i]);
        if((tmp > 96) && (tmp < 123))
            str[i] = tmp - 32;
    }

    cout << str;

    return 0;
}