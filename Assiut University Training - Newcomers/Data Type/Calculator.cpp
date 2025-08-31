#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    int Num1 , Num2;
    char Operation;
    cin >> Num1 >> Operation >> Num2;
    if(Operation == '+')
        cout << Num1 + Num2;
    else if(Operation == '*')
        cout << Num1 * Num2;
    else if(Operation == '-')
        cout << Num1 - Num2;
    else
        cout << Num1 / Num2;
    return 0;
}