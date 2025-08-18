#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define pi 3.141592653


int main(void)
{   
    fast;
    double Radius , area;
    cin >> Radius;
    area = pi * Radius * Radius;
    cout << fixed << setprecision(9);
    cout << area ;
    return 0;
}