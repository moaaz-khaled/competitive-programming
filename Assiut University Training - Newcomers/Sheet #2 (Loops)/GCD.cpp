#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    int Num1 , Num2;
    cin >> Num1 >> Num2;
    int GCD = 1;
    for(int i = 1 ; i <= min(Num1 , Num2) ;i++)
    {
        if(Num1 % i == 0 && Num2 % i == 0)
            GCD = i;
    }
    cout << GCD;
    return 0;
}