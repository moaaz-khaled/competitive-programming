#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define pi 3.141592653


int main(void)
{   
    fast;
    float Num1 , Num2;
    cin >> Num1 >> Num2;
    cout << "floor " << Num1 << " / " << Num2 << " = " << (int)(Num1 / Num2) << endl;
    cout << "ceil  " << Num1 << " / " << Num2 << " = " << (int)ceil(Num1 / Num2) << endl;
    cout << "round  " << Num1 << " / " << Num2 << " = " << (int)round(Num1 / Num2);
    return 0;
}