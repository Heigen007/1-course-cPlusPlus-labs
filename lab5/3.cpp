#include <iostream>
using namespace std;

int main()
{
    string str, subStr;
    cin >> str >> subStr;

    size_t found = str.find(subStr);
    if (found != string::npos)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}
