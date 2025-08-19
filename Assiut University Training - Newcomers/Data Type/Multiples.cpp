#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define pi 3.141592653


int main(void)
{   
    fast;
    int A , B;
    cin >> A >> B;
    if(A % B == 0 || B % A == 0)
        cout << "Multiples";
    else
        cout << "No Multiples";
    return 0;
}