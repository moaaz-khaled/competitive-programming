#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define pi 3.141592653


int main(void)
{   
    fast;
    long long Num1 , Num2;
    cin >> Num1 >> Num2;
    cout << Num1 % 10 + Num2 % 10;
    return 0;
}