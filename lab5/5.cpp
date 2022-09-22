#include <iostream>
using namespace std;

int main(){
    string num;
    int sumEv = 0;
    int sumOdd = 0;
    cin >> num;
    for (int i = 0; i < num.length(); i++){
        if(i % 2 == 0) sumEv += num[i];
        else sumOdd += num[i];
    }
    
    if(sumEv == sumOdd)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}