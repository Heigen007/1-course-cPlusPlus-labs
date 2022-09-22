#include <iostream>
using namespace std;

int main()
{
    string str, reverseStr;
    int strLength;
    cin >> str;
    reverseStr = str;
    strLength = str.length();

    for (int i = 0; i < strLength; i++){
        reverseStr[i] = str[strLength - i - 1];
    }

    cout << (reverseStr == str ? "YES" : "NO");
    
    
    return 0;
}
