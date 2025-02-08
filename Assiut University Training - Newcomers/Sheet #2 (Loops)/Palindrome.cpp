#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    int Num , PalindromeNum = 0;
    cin >> Num;
    int copyNum = Num;
    while(copyNum > 0){
        int lastDigit = copyNum % 10;
        PalindromeNum = PalindromeNum * 10 + lastDigit;
        copyNum/=10;
    }
    cout << PalindromeNum << endl;
    if(Num == PalindromeNum)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}