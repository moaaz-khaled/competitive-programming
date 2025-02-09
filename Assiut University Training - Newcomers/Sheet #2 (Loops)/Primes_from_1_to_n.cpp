#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    int Num;
    cin >> Num;
    for(int i = 1 ; i <= Num ;i++)
    {
        int divisors = 0;
        for(int j = 1 ; j <= i ;j++){
            if(i % j == 0)
                divisors++;
        }
        if(divisors == 2)
            cout << i << " ";
    }
    return 0;
}