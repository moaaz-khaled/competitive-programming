#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define pi 3.141592653


int main(void)
{   
    fast;
    string F1,S1,F2,S2;
    cin >> F1 >> S1 >> F2 >> S2;
    if(S1 == S2)
        cout << "ARE Brothers";
    else
        cout << "NOT";
    return 0;
}